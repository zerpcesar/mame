/*************************************************************************

  Cuatro en Linea.
  System I.
  1991, Compumatic


  1x Z84C00HB6 CPU @ 8 MHz for program.
  1x Z84C00AB6 CPU @ 4 MHz for sound.
  1x AY-3-8910 A
  1x UMC UM487F (HCGA Controller)

  2x NEC D41464C (64K x 4-bit Dynamic NMOS RAM).
  1x UMC UM6264A (8K x 8-bit CMOS SRAM).

  2x 27512 EPROMS.
  1x X24C16P Serial EEPROM.

  1x GAL16V8AS
  
  1x ES2 CM3080 (unknown DIP-18 IC)
  1x ES2 9046 (unknown PLCC-84 IC)
  1x 8952 CM 32 (unknown DIP-40 IC)

  1x 14.31818 MHz crystal (for HMCGA video controller)
  1x 8.0000 MHz crystal. (for Z84C00HB6)
  1x 16.000 MHz crystal. (divided by 2 for Z84C00AB6)

**************************************************************************

  UM487F Notes...
  
  The fact that there is a 14.318 MHz crystal tied to pin 65, just point
  that the video controller is working in CGA mode. MGA mode needs a
  16.257 MHz crystal instead, and tied to pin 64 (currently tied to GND).

  Also a signal of 8Mhz (shared with the program CPU is entering from the
  pin 1 (CLK) needed for clock the UM6845 mode.

  UM487F Access:

  Offsets are for sure the CGA mode. MGA mode has different ones.

  3D4h:  W  CRTC index register.
  3D5h: RW  CRTC data register.
  3D8h:  W  Mode control register.
  3D9h:  W  Color select register.
  3DAh: R   Status register.
  3BFh:  W  Config register.

  Mode CTRL (3D8h) 6Ah:
  ----- bits -----
  7 6 5 4  3 2 1 0   For CGA Mode.
  - x x -  x - x -
  | | | |  | | | |
  | | | |  | | | '-- 40*25 text.
  | | | |  | | '---- Graphics.
  | | | |  | '------ Color Mode.
  | | | |  '-------- Enable Video.
  | | | '----------- 320x200 Graphics.
  | | '------------- Enable Blink.
  | '--------------- Enable Change Mode.
  '----------------- (not for CGA)

  Color Sel (3D9h): 00

  Index register (3D4h): 00 01 02 03 04 05 06 07 08 09 0A 0B 0C 0D 0E 0F
  Data register (3D5h):  38 28 2D 0A 7F 06 64 70 02 01 06 07 10 00 00 00

  Config Register (3BFh): 0x40
  (bit 6 active means CGA Mode)


  So... Screen size is set to 320x200.
  but...

  The embedded CRT controller is set to:
  Screen Total:   0x38+1 * 0x7F+1 = (57 * 128) chars.
  Screen Visible: 0x28 * 0x64 = (40 * 100) chars.

*************************************************************************/

#define MAIN_CLOCK           XTAL_16MHz
#define SEC_CLOCK            XTAL_8MHz
#define HCGA_CLOCK           XTAL_14_31818MHz

#define PRG_CPU_CLOCK        MAIN_CLOCK /2		/* 8 MHz. */
#define SND_CPU_CLOCK        SEC_CLOCK /2       /* 4 MHz. */
#define SND_AY_CLOCK         SEC_CLOCK /4       /* 2 MHz.? (guess) */
#define CRTC_CLOCK           SEC_CLOCK /2       /* 8 MHz. */


#include "emu.h"
#include "cpu/z80/z80.h"
#include "video/mc6845.h"
#include "sound/ay8910.h"

class _4enlinea_state : public driver_device
{
public:
	_4enlinea_state(const machine_config &mconfig, device_type type, const char *tag)
		: driver_device(mconfig, type, tag),
		m_ay(*this, "aysnd"),
		m_videoram(*this, "videoram"),
		m_maincpu(*this, "maincpu"),
		m_gfxdecode(*this, "gfxdecode"),
		m_palette(*this, "palette")  { }


	required_device<ay8910_device> m_ay;
	required_shared_ptr<UINT8> m_videoram;

	DECLARE_WRITE8_MEMBER(crtc_config_w);
	DECLARE_WRITE8_MEMBER(crtc_mode_ctrl_w);
	DECLARE_WRITE8_MEMBER(crtc_colormode_w);
	virtual void machine_start();
	virtual void machine_reset();
	virtual void video_start();
	DECLARE_PALETTE_INIT(_4enlinea);
	UINT32 screen_update_4enlinea(screen_device &screen, bitmap_ind16 &bitmap, const rectangle &cliprect);
	required_device<cpu_device> m_maincpu;
	required_device<gfxdecode_device> m_gfxdecode;
	required_device<palette_device> m_palette;

	DECLARE_WRITE8_MEMBER(vram_w);
};


/***********************************
*          Video Hardware          *
***********************************/

void _4enlinea_state::video_start()
{

	m_gfxdecode->gfx(0)->set_source(m_videoram);
}

UINT32 _4enlinea_state::screen_update_4enlinea(screen_device &screen, bitmap_ind16 &bitmap, const rectangle &cliprect)
{
	int offset = 0;
		
	for (int y = 0; y < 256; y++)
	{
		UINT16* dstptr_bitmap = &bitmap.pix16(y);

		for (int x = 0; x < 256; x+=4)
		{
			UINT8 pix = m_videoram[offset++];

			dstptr_bitmap[x+3] = (pix>>0)&0x3;
			dstptr_bitmap[x+2] = (pix>>2)&0x3;
			dstptr_bitmap[x+1] = (pix>>4)&0x3;
			dstptr_bitmap[x+0] = (pix>>6)&0x3;

		}
	}

	return 0;
}


WRITE8_MEMBER(_4enlinea_state::vram_w)
{
	m_videoram[offset] = data;
	m_gfxdecode->gfx(0)->mark_dirty(offset/16);
}


WRITE8_MEMBER(_4enlinea_state::crtc_config_w)
{
	if(data & 0x40)
	{
		logerror("CRTC config mode (3BFh): CGA\n");
	}
	else
	{
		logerror("CRTC config mode (3BFh): MGA\n");
	}
}

WRITE8_MEMBER(_4enlinea_state::crtc_mode_ctrl_w)
{
	logerror("CRTC mode control (3D8h): %02x\n", data);
}

WRITE8_MEMBER(_4enlinea_state::crtc_colormode_w)
{
	logerror("CRTC color mode (3D9h): %02x\n", data);
}


/***********************************
*      Memory Map Information      *
***********************************/

static ADDRESS_MAP_START( main_map, AS_PROGRAM, 8, _4enlinea_state )
	AM_RANGE(0x0000, 0x7fff) AM_ROM

	AM_RANGE(0x8000, 0xbfff) AM_RAM_WRITE(vram_w) AM_SHARE("videoram")
	AM_RANGE(0xc000, 0xcfff) AM_RAM

	AM_RANGE(0xd000, 0xdfff) AM_RAM
	AM_RANGE(0xe000, 0xffff) AM_RAM

ADDRESS_MAP_END


static ADDRESS_MAP_START( main_portmap, AS_IO, 8, _4enlinea_state )
	ADDRESS_MAP_GLOBAL_MASK(0xff)

	AM_RANGE(0xd4, 0xd4) AM_DEVWRITE("crtc", mc6845_device, address_w)
	AM_RANGE(0xd5, 0xd5) AM_DEVWRITE("crtc", mc6845_device, register_w)
	AM_RANGE(0xd8, 0xd8) AM_WRITE(crtc_mode_ctrl_w)
	AM_RANGE(0xd9, 0xd9) AM_WRITE(crtc_colormode_w)
	AM_RANGE(0xbf, 0xbf) AM_WRITE(crtc_config_w)

ADDRESS_MAP_END



static ADDRESS_MAP_START( audio_map, AS_PROGRAM, 8, _4enlinea_state )
	AM_RANGE(0x0000, 0x7fff) AM_ROM
	AM_RANGE(0xf000, 0xffff) AM_RAM
ADDRESS_MAP_END


static ADDRESS_MAP_START( audio_portmap, AS_IO, 8, _4enlinea_state )
	ADDRESS_MAP_GLOBAL_MASK(0xff)
ADDRESS_MAP_END


/***********************************
*           Input Ports            *
***********************************/

static INPUT_PORTS_START( 4enlinea )
	PORT_START("DSW1")
	PORT_DIPNAME( 0x01, 0x00, "0-0")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x01, DEF_STR( On ) )
	PORT_DIPNAME( 0x02, 0x00, "0-1")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x02, DEF_STR( On ) )
	PORT_DIPNAME( 0x04, 0x00, "0-2")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x04, DEF_STR( On ) )
	PORT_DIPNAME( 0x08, 0x00, "0-3")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x08, DEF_STR( On ) )
	PORT_DIPNAME( 0x10, 0x00, "0-4")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x10, DEF_STR( On ) )
	PORT_DIPNAME( 0x20, 0x00, "0-5")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x20, DEF_STR( On ) )
	PORT_DIPNAME( 0x40, 0x00, "0-6")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x40, DEF_STR( On ) )
	PORT_DIPNAME( 0x80, 0x00, "0-7")
	PORT_DIPSETTING(    0x00, DEF_STR( Off ) )
	PORT_DIPSETTING(    0x80, DEF_STR( On ) )
INPUT_PORTS_END


/***********************************
*         Graphics Layouts         *
***********************************/

static const gfx_layout charlayout =
{
	8,8,
	0x4000/16,
	2,
	{ 0, 1 },
	{ 0, 2, 4, 6, 8, 10, 12, 14 },
	{ 0*16, 1*16, 2*16, 3*16, 4*16, 5*16, 6*16, 7*16 },
	8*16
};

/****************************************
*      Graphics Decode Information      *
****************************************/

static GFXDECODE_START( 4enlinea )
	GFXDECODE_ENTRY( NULL, 0, charlayout, 0, 1 )
GFXDECODE_END


/****************************************
*          Machine Start/Reset          *
****************************************/

void _4enlinea_state::machine_start()
{

}

void _4enlinea_state::machine_reset()
{

}


/**********************************
*         CRTC Interface          *
**********************************/

static MC6845_ON_UPDATE_ADDR_CHANGED(crtc_addr)
{

}

static MC6845_INTERFACE( mc6845_intf )
{
	false,           /* show border area */
	0,0,0,0,         /* visarea adjustment */
	8,               /* number of pixels per video memory address */
	NULL,            /* before pixel update callback */
	NULL,            /* row update callback */
	NULL,            /* after pixel update callback */
	DEVCB_NULL,      /* callback for display state changes */
	DEVCB_NULL,      /* callback for cursor state changes */
	DEVCB_NULL,      /* HSYNC callback */
	DEVCB_NULL,      /* VSYNC callback */
	crtc_addr        /* update address callback */
};


/***********************************
*         Sound Interface          *
***********************************/

static const ay8910_interface ay8910_intf =
{
	AY8910_LEGACY_OUTPUT,
	AY8910_DEFAULT_LOADS,
	DEVCB_NULL,
	DEVCB_NULL,
	DEVCB_NULL,
	DEVCB_NULL
};


/***********************************
*         Machine Drivers          *
***********************************/

static MACHINE_CONFIG_START( 4enlinea, _4enlinea_state )

	/* basic machine hardware */
	MCFG_CPU_ADD("maincpu", Z80, PRG_CPU_CLOCK)
	MCFG_CPU_PROGRAM_MAP(main_map)
	MCFG_CPU_IO_MAP(main_portmap)
	MCFG_CPU_VBLANK_INT_DRIVER("screen", _4enlinea_state, nmi_line_pulse)
	MCFG_CPU_PERIODIC_INT_DRIVER(_4enlinea_state, irq0_line_hold, 4*60)
	
	MCFG_CPU_ADD("audiocpu", Z80, SND_CPU_CLOCK)
	MCFG_CPU_PROGRAM_MAP(audio_map)
	MCFG_CPU_IO_MAP(audio_portmap)

	/* video hardware */
	MCFG_SCREEN_ADD("screen", RASTER)
	MCFG_SCREEN_REFRESH_RATE(60)
	MCFG_SCREEN_VBLANK_TIME(ATTOSECONDS_IN_USEC(0))
//	MCFG_SCREEN_SIZE(320, 200)
//	MCFG_SCREEN_VISIBLE_AREA(0, 320-1, 0, 200-1)
	MCFG_SCREEN_SIZE(32*8, 32*8)
	MCFG_SCREEN_VISIBLE_AREA(0*8, 32*8-1, 0*8, 32*8-1)
	MCFG_SCREEN_UPDATE_DRIVER(_4enlinea_state, screen_update_4enlinea)
	MCFG_SCREEN_PALETTE("palette")

	MCFG_GFXDECODE_ADD("gfxdecode", "palette", 4enlinea)
	MCFG_PALETTE_ADD("palette", 256)

/*  6845 clock is a guess, since it's a UM6845R embedded in the UM487F.
    CRTC_CLOCK is 8MHz, entering for pin 1 of UM487F. This clock is used
    only for UM6845R embedded mode. The frequency divisor is unknown.

	CRTC_CLOCK / 4.0 = 66.961296 Hz.
	CRTC_CLOCK / 4.5 = 59.521093 Hz.
    CRTC_CLOCK / 5.0 = 53.569037 Hz.
*/
//	MCFG_MC6845_ADD("crtc", MC6845, "screen", CRTC_CLOCK / 2, mc6845_intf)	// seems that MC6845 doesn't support the game mode
	MCFG_MC6845_ADD("crtc", R6545_1, "screen", CRTC_CLOCK / 4.5, mc6845_intf)

	/* sound hardware */
	MCFG_SPEAKER_STANDARD_MONO("mono")
	MCFG_SOUND_ADD("aysnd", AY8910, SND_AY_CLOCK)
	MCFG_SOUND_CONFIG(ay8910_intf)
	MCFG_SOUND_ROUTE(ALL_OUTPUTS, "mono", 0.50)
MACHINE_CONFIG_END


/***********************************
*             Rom Load             *
***********************************/

ROM_START( 4enlinea )
	ROM_REGION( 0x10000, "maincpu", 0 )
	ROM_LOAD( "cuatro_en_linea_27c256__cicplay-2.ic6",  0x0000, 0x8000, CRC(f8f14bf8) SHA1(e48fbedbd1b9be6fb56a0f65db80eddbedb487c7) )

	ROM_REGION( 0x10000, "audiocpu", 0 )
	ROM_LOAD( "cuatro_en_linea_27c256__cicplay-1.ic19", 0x0000, 0x8000, CRC(307a57a3) SHA1(241329d919ec43d0eeb1dad0a4db6cf6de06e7e1) )

	ROM_REGION( 0x0800, "eeprom", 0 )   /* default serial EEPROM */
	ROM_LOAD( "cuatro_en_linea_x24c16p__nosticker.ic17", 0x000, 0x800, CRC(21f81f5a) SHA1(00b10eee5af1ca79ced2878f4be4cac2bb8d26a0) )

	ROM_REGION( 0x200, "plds", 0 )
	ROM_LOAD( "cuatro_en_linea_gal16v8as__nosticker.ic04", 0x000, 0x117, CRC(094edf29) SHA1(428a2f6568ac1032833ee0c65fa8304967a58607) )
ROM_END


/***********************************
*           Game Drivers           *
***********************************/

/*    YEAR  NAME       PARENT   MACHINE   INPUT     STATE          INIT   ROT    COMPANY       FULLNAME          FLAGS  */
GAME( 1991, 4enlinea,  0,       4enlinea, 4enlinea, driver_device, 0,     ROT0, "Compumatic", "Cuatro en Linea", GAME_NOT_WORKING )
        