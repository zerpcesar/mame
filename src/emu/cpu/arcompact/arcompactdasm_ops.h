
/************************************************************************************************************************************
*                                                                                                                                   *
* individual opcode handlers (disassembly)                                                                                          *
*                                                                                                                                   *
************************************************************************************************************************************/

#define DASM_OPS_16 char *output, offs_t pc, UINT16 op, const UINT8* oprom
#define DASM_OPS_32 char *output, offs_t pc, UINT32 op, const UINT8* oprom
#define DASM_PARAMS output, pc, op, oprom

#define LIMM_REG 62

#define GET_LIMM_32 \
	limm = oprom[6] | (oprom[7] << 8); \
	limm |= (oprom[4] << 16) | (oprom[5] << 24); \


int arcompact_handle00_00_dasm(DASM_OPS_32);
int arcompact_handle00_01_dasm(DASM_OPS_32);
int arcompact_handle01_00_00dasm(DASM_OPS_32);
int arcompact_handle01_00_01dasm(DASM_OPS_32);
int arcompact_handle01_01_00_00_dasm(DASM_OPS_32);
int arcompact_handle01_01_00_01_dasm(DASM_OPS_32);
int arcompact_handle01_01_00_02_dasm(DASM_OPS_32);
int arcompact_handle01_01_00_03_dasm(DASM_OPS_32);
int arcompact_handle01_01_00_04_dasm(DASM_OPS_32);
int arcompact_handle01_01_00_05_dasm(DASM_OPS_32);
int arcompact_handle01_01_00_0e_dasm(DASM_OPS_32);
int arcompact_handle01_01_00_0f_dasm(DASM_OPS_32);
int arcompact_handle01_01_01_00_dasm(DASM_OPS_32);
int arcompact_handle01_01_01_01_dasm(DASM_OPS_32);
int arcompact_handle01_01_01_02_dasm(DASM_OPS_32);
int arcompact_handle01_01_01_03_dasm(DASM_OPS_32);
int arcompact_handle01_01_01_04_dasm(DASM_OPS_32);
int arcompact_handle01_01_01_05_dasm(DASM_OPS_32);
int arcompact_handle01_01_01_0e_dasm(DASM_OPS_32);
int arcompact_handle01_01_01_0f_dasm(DASM_OPS_32);
int arcompact_handle02_dasm(DASM_OPS_32);
int arcompact_handle03_dasm(DASM_OPS_32);
int arcompact_handle04_00_dasm(DASM_OPS_32);
int arcompact_handle04_01_dasm(DASM_OPS_32);
int arcompact_handle04_02_dasm(DASM_OPS_32);
int arcompact_handle04_03_dasm(DASM_OPS_32);
int arcompact_handle04_04_dasm(DASM_OPS_32);
int arcompact_handle04_05_dasm(DASM_OPS_32);
int arcompact_handle04_06_dasm(DASM_OPS_32);
int arcompact_handle04_07_dasm(DASM_OPS_32);
int arcompact_handle04_08_dasm(DASM_OPS_32);
int arcompact_handle04_09_dasm(DASM_OPS_32);
int arcompact_handle04_0a_dasm(DASM_OPS_32);
int arcompact_handle04_0b_dasm(DASM_OPS_32);
int arcompact_handle04_0c_dasm(DASM_OPS_32);
int arcompact_handle04_0d_dasm(DASM_OPS_32);
int arcompact_handle04_0e_dasm(DASM_OPS_32);
int arcompact_handle04_0f_dasm(DASM_OPS_32);
int arcompact_handle04_10_dasm(DASM_OPS_32);
int arcompact_handle04_11_dasm(DASM_OPS_32);
int arcompact_handle04_12_dasm(DASM_OPS_32);
int arcompact_handle04_13_dasm(DASM_OPS_32);
int arcompact_handle04_14_dasm(DASM_OPS_32);
int arcompact_handle04_15_dasm(DASM_OPS_32);
int arcompact_handle04_16_dasm(DASM_OPS_32);
int arcompact_handle04_17_dasm(DASM_OPS_32);
int arcompact_handle04_18_dasm(DASM_OPS_32);
int arcompact_handle04_19_dasm(DASM_OPS_32);
int arcompact_handle04_1a_dasm(DASM_OPS_32);
int arcompact_handle04_1b_dasm(DASM_OPS_32);
int arcompact_handle04_1c_dasm(DASM_OPS_32);
int arcompact_handle04_1d_dasm(DASM_OPS_32);
int arcompact_handle04_20_dasm(DASM_OPS_32);
int arcompact_handle04_21_dasm(DASM_OPS_32);
int arcompact_handle04_22_dasm(DASM_OPS_32);
int arcompact_handle04_23_dasm(DASM_OPS_32);
int arcompact_handle04_28_dasm(DASM_OPS_32);
int arcompact_handle04_29_dasm(DASM_OPS_32);
int arcompact_handle04_2a_dasm(DASM_OPS_32);
int arcompact_handle04_2b_dasm(DASM_OPS_32);
int arcompact_handle04_2f_00_dasm(DASM_OPS_32);
int arcompact_handle04_2f_01_dasm(DASM_OPS_32);
int arcompact_handle04_2f_02_dasm(DASM_OPS_32);
int arcompact_handle04_2f_03_dasm(DASM_OPS_32);
int arcompact_handle04_2f_04_dasm(DASM_OPS_32);
int arcompact_handle04_2f_05_dasm(DASM_OPS_32);
int arcompact_handle04_2f_06_dasm(DASM_OPS_32);
int arcompact_handle04_2f_07_dasm(DASM_OPS_32);
int arcompact_handle04_2f_08_dasm(DASM_OPS_32);
int arcompact_handle04_2f_09_dasm(DASM_OPS_32);
int arcompact_handle04_2f_0a_dasm(DASM_OPS_32);
int arcompact_handle04_2f_0b_dasm(DASM_OPS_32);
int arcompact_handle04_2f_0c_dasm(DASM_OPS_32);
int arcompact_handle04_2f_3f_01_dasm(DASM_OPS_32);
int arcompact_handle04_2f_3f_02_dasm(DASM_OPS_32);
int arcompact_handle04_2f_3f_03_dasm(DASM_OPS_32);
int arcompact_handle04_2f_3f_04_dasm(DASM_OPS_32);
int arcompact_handle04_2f_3f_05_dasm(DASM_OPS_32);
int arcompact_handle04_30_dasm(DASM_OPS_32);
int arcompact_handle04_31_dasm(DASM_OPS_32);
int arcompact_handle04_32_dasm(DASM_OPS_32);
int arcompact_handle04_33_dasm(DASM_OPS_32);
int arcompact_handle04_34_dasm(DASM_OPS_32);
int arcompact_handle04_35_dasm(DASM_OPS_32);
int arcompact_handle04_36_dasm(DASM_OPS_32);
int arcompact_handle04_37_dasm(DASM_OPS_32);
int arcompact_handle05_00_dasm(DASM_OPS_32);
int arcompact_handle05_01_dasm(DASM_OPS_32);
int arcompact_handle05_02_dasm(DASM_OPS_32);
int arcompact_handle05_03_dasm(DASM_OPS_32);
int arcompact_handle05_04_dasm(DASM_OPS_32);
int arcompact_handle05_05_dasm(DASM_OPS_32);
int arcompact_handle05_06_dasm(DASM_OPS_32);
int arcompact_handle05_07_dasm(DASM_OPS_32);
int arcompact_handle05_08_dasm(DASM_OPS_32);
int arcompact_handle05_0a_dasm(DASM_OPS_32);
int arcompact_handle05_0b_dasm(DASM_OPS_32);
int arcompact_handle05_28_dasm(DASM_OPS_32);
int arcompact_handle05_29_dasm(DASM_OPS_32);
int arcompact_handle05_2f_dasm(DASM_OPS_32);
int arcompact_handle06_dasm(DASM_OPS_32);
int arcompact_handle07_dasm(DASM_OPS_32);
int arcompact_handle08_dasm(DASM_OPS_32);
int arcompact_handle09_dasm(DASM_OPS_32);
int arcompact_handle0a_dasm(DASM_OPS_32);
int arcompact_handle0b_dasm(DASM_OPS_32);

int arcompact_handle0c_00_dasm(DASM_OPS_16);
int arcompact_handle0c_01_dasm(DASM_OPS_16);
int arcompact_handle0c_02_dasm(DASM_OPS_16);
int arcompact_handle0c_03_dasm(DASM_OPS_16);
int arcompact_handle0d_00_dasm(DASM_OPS_16);
int arcompact_handle0d_01_dasm(DASM_OPS_16);
int arcompact_handle0d_02_dasm(DASM_OPS_16);
int arcompact_handle0d_03_dasm(DASM_OPS_16);
int arcompact_handle0e_00_dasm(DASM_OPS_16);
int arcompact_handle0e_01_dasm(DASM_OPS_16);
int arcompact_handle0e_02_dasm(DASM_OPS_16);
int arcompact_handle0e_03_dasm(DASM_OPS_16);
int arcompact_handle0f_00_00_dasm(DASM_OPS_16);
int arcompact_handle0f_00_01_dasm(DASM_OPS_16);
int arcompact_handle0f_00_02_dasm(DASM_OPS_16);
int arcompact_handle0f_00_03_dasm(DASM_OPS_16);
int arcompact_handle0f_00_06_dasm(DASM_OPS_16);
int arcompact_handle0f_00_07_00_dasm(DASM_OPS_16);
int arcompact_handle0f_00_07_01_dasm(DASM_OPS_16);
int arcompact_handle0f_00_07_04_dasm(DASM_OPS_16);
int arcompact_handle0f_00_07_05_dasm(DASM_OPS_16);
int arcompact_handle0f_00_07_06_dasm(DASM_OPS_16);
int arcompact_handle0f_00_07_07_dasm(DASM_OPS_16);
int arcompact_handle0f_02_dasm(DASM_OPS_16);
int arcompact_handle0f_04_dasm(DASM_OPS_16);
int arcompact_handle0f_05_dasm(DASM_OPS_16);
int arcompact_handle0f_06_dasm(DASM_OPS_16);
int arcompact_handle0f_07_dasm(DASM_OPS_16);
int arcompact_handle0f_0b_dasm(DASM_OPS_16);
int arcompact_handle0f_0c_dasm(DASM_OPS_16);
int arcompact_handle0f_0d_dasm(DASM_OPS_16);
int arcompact_handle0f_0e_dasm(DASM_OPS_16);
int arcompact_handle0f_0f_dasm(DASM_OPS_16);
int arcompact_handle0f_10_dasm(DASM_OPS_16);
int arcompact_handle0f_11_dasm(DASM_OPS_16);
int arcompact_handle0f_12_dasm(DASM_OPS_16);
int arcompact_handle0f_13_dasm(DASM_OPS_16);
int arcompact_handle0f_14_dasm(DASM_OPS_16);
int arcompact_handle0f_15_dasm(DASM_OPS_16);
int arcompact_handle0f_16_dasm(DASM_OPS_16);
int arcompact_handle0f_18_dasm(DASM_OPS_16);
int arcompact_handle0f_19_dasm(DASM_OPS_16);
int arcompact_handle0f_1a_dasm(DASM_OPS_16);
int arcompact_handle0f_1b_dasm(DASM_OPS_16);
int arcompact_handle0f_1c_dasm(DASM_OPS_16);
int arcompact_handle0f_1d_dasm(DASM_OPS_16);
int arcompact_handle0f_1e_dasm(DASM_OPS_16);
int arcompact_handle0f_1f_dasm(DASM_OPS_16);
int arcompact_handle10_dasm(DASM_OPS_16);
int arcompact_handle11_dasm(DASM_OPS_16);
int arcompact_handle12_dasm(DASM_OPS_16);
int arcompact_handle13_dasm(DASM_OPS_16);
int arcompact_handle14_dasm(DASM_OPS_16);
int arcompact_handle15_dasm(DASM_OPS_16);
int arcompact_handle16_dasm(DASM_OPS_16);
int arcompact_handle17_00_dasm(DASM_OPS_16);
int arcompact_handle17_01_dasm(DASM_OPS_16);
int arcompact_handle17_02_dasm(DASM_OPS_16);
int arcompact_handle17_03_dasm(DASM_OPS_16);
int arcompact_handle17_04_dasm(DASM_OPS_16);
int arcompact_handle17_05_dasm(DASM_OPS_16);
int arcompact_handle17_06_dasm(DASM_OPS_16);
int arcompact_handle17_07_dasm(DASM_OPS_16);
int arcompact_handle18_00_dasm(DASM_OPS_16);
int arcompact_handle18_01_dasm(DASM_OPS_16);
int arcompact_handle18_02_dasm(DASM_OPS_16);
int arcompact_handle18_03_dasm(DASM_OPS_16);
int arcompact_handle18_04_dasm(DASM_OPS_16);
int arcompact_handle18_05_00_dasm(DASM_OPS_16);
int arcompact_handle18_05_01_dasm(DASM_OPS_16);
int arcompact_handle18_06_01_dasm(DASM_OPS_16);
int arcompact_handle18_06_11_dasm(DASM_OPS_16);
int arcompact_handle18_07_01_dasm(DASM_OPS_16);
int arcompact_handle18_07_11_dasm(DASM_OPS_16);
int arcompact_handle19_00_dasm(DASM_OPS_16);
int arcompact_handle19_01_dasm(DASM_OPS_16);
int arcompact_handle19_02_dasm(DASM_OPS_16);
int arcompact_handle19_03_dasm(DASM_OPS_16);
int arcompact_handle1a_dasm(DASM_OPS_16);
int arcompact_handle1b_dasm(DASM_OPS_16);
int arcompact_handle1c_00_dasm(DASM_OPS_16);
int arcompact_handle1c_01_dasm(DASM_OPS_16);
int arcompact_handle1d_00_dasm(DASM_OPS_16);
int arcompact_handle1d_01_dasm(DASM_OPS_16);
int arcompact_handle1e_00_dasm(DASM_OPS_16);
int arcompact_handle1e_01_dasm(DASM_OPS_16);
int arcompact_handle1e_02_dasm(DASM_OPS_16);
int arcompact_handle1e_03_00_dasm(DASM_OPS_16);
int arcompact_handle1e_03_01_dasm(DASM_OPS_16);
int arcompact_handle1e_03_02_dasm(DASM_OPS_16);
int arcompact_handle1e_03_03_dasm(DASM_OPS_16);
int arcompact_handle1e_03_04_dasm(DASM_OPS_16);
int arcompact_handle1e_03_05_dasm(DASM_OPS_16);
int arcompact_handle1e_03_06_dasm(DASM_OPS_16);
int arcompact_handle1e_03_07_dasm(DASM_OPS_16);
int arcompact_handle1f_dasm(DASM_OPS_16);

/************************************************************************************************************************************
*                                                                                                                                   *
* illegal opcode handlers (disassembly)                                                                                             *
*                                                                                                                                   *
************************************************************************************************************************************/

int arcompact_handle01_01_00_06_dasm(DASM_OPS_32); //("<illegal 01_01_00_06> (%08x)", op); return 4; }
int arcompact_handle01_01_00_07_dasm(DASM_OPS_32); //("<illegal 01_01_00_07> (%08x)", op); return 4; }
int arcompact_handle01_01_00_08_dasm(DASM_OPS_32); //("<illegal 01_01_00_08> (%08x)", op); return 4; }
int arcompact_handle01_01_00_09_dasm(DASM_OPS_32); //("<illegal 01_01_00_09> (%08x)", op); return 4; }
int arcompact_handle01_01_00_0a_dasm(DASM_OPS_32); //("<illegal 01_01_00_0a> (%08x)", op); return 4; }
int arcompact_handle01_01_00_0b_dasm(DASM_OPS_32); //("<illegal 01_01_00_0b> (%08x)", op); return 4; }
int arcompact_handle01_01_00_0c_dasm(DASM_OPS_32); //("<illegal 01_01_00_0c> (%08x)", op); return 4; }
int arcompact_handle01_01_00_0d_dasm(DASM_OPS_32); //("<illegal 01_01_00_0d> (%08x)", op); return 4; }

int arcompact_handle01_01_01_06_dasm(DASM_OPS_32); //("<illegal 01_01_01_06> (%08x)", op); return 4; }
int arcompact_handle01_01_01_07_dasm(DASM_OPS_32); //("<illegal 01_01_01_07> (%08x)", op); return 4; }
int arcompact_handle01_01_01_08_dasm(DASM_OPS_32); //("<illegal 01_01_01_08> (%08x)", op); return 4; }
int arcompact_handle01_01_01_09_dasm(DASM_OPS_32); //("<illegal 01_01_01_09> (%08x)", op); return 4; }
int arcompact_handle01_01_01_0a_dasm(DASM_OPS_32); //("<illegal 01_01_01_0a> (%08x)", op); return 4; }
int arcompact_handle01_01_01_0b_dasm(DASM_OPS_32); //("<illegal 01_01_01_0b> (%08x)", op); return 4; }
int arcompact_handle01_01_01_0c_dasm(DASM_OPS_32); //("<illegal 01_01_01_0c> (%08x)", op); return 4; }
int arcompact_handle01_01_01_0d_dasm(DASM_OPS_32); //("<illegal 01_01_01_0d> (%08x)", op); return 4; }


int arcompact_handle04_1e_dasm(DASM_OPS_32); //("<illegal 0x04_1e> (%08x)", op); return 4;}
int arcompact_handle04_1f_dasm(DASM_OPS_32); //("<illegal 0x04_1f> (%08x)", op); return 4;}

int arcompact_handle04_24_dasm(DASM_OPS_32); //("<illegal 0x04_24> (%08x)", op); return 4;}
int arcompact_handle04_25_dasm(DASM_OPS_32); //("<illegal 0x04_25> (%08x)", op); return 4;}
int arcompact_handle04_26_dasm(DASM_OPS_32); //("<illegal 0x04_26> (%08x)", op); return 4;}
int arcompact_handle04_27_dasm(DASM_OPS_32); //("<illegal 0x04_27> (%08x)", op); return 4;}

int arcompact_handle04_2c_dasm(DASM_OPS_32); //("<illegal 0x04_2c> (%08x)", op); return 4;}
int arcompact_handle04_2d_dasm(DASM_OPS_32); //("<illegal 0x04_2d> (%08x)", op); return 4;}
int arcompact_handle04_2e_dasm(DASM_OPS_32); //("<illegal 0x04_2e> (%08x)", op); return 4;}

int arcompact_handle04_2f_0d_dasm(DASM_OPS_32); //("<illegal 0x04_2f_0d> (%08x)", op); return 4;}
int arcompact_handle04_2f_0e_dasm(DASM_OPS_32); //("<illegal 0x04_2f_0e> (%08x)", op); return 4;}
int arcompact_handle04_2f_0f_dasm(DASM_OPS_32); //("<illegal 0x04_2f_0f> (%08x)", op); return 4;}
int arcompact_handle04_2f_10_dasm(DASM_OPS_32); //("<illegal 0x04_2f_10> (%08x)", op); return 4;}
int arcompact_handle04_2f_11_dasm(DASM_OPS_32); //("<illegal 0x04_2f_11> (%08x)", op); return 4;}
int arcompact_handle04_2f_12_dasm(DASM_OPS_32); //("<illegal 0x04_2f_12> (%08x)", op); return 4;}
int arcompact_handle04_2f_13_dasm(DASM_OPS_32); //("<illegal 0x04_2f_13> (%08x)", op); return 4;}
int arcompact_handle04_2f_14_dasm(DASM_OPS_32); //("<illegal 0x04_2f_14> (%08x)", op); return 4;}
int arcompact_handle04_2f_15_dasm(DASM_OPS_32); //("<illegal 0x04_2f_15> (%08x)", op); return 4;}
int arcompact_handle04_2f_16_dasm(DASM_OPS_32); //("<illegal 0x04_2f_16> (%08x)", op); return 4;}
int arcompact_handle04_2f_17_dasm(DASM_OPS_32); //("<illegal 0x04_2f_17> (%08x)", op); return 4;}
int arcompact_handle04_2f_18_dasm(DASM_OPS_32); //("<illegal 0x04_2f_18> (%08x)", op); return 4;}
int arcompact_handle04_2f_19_dasm(DASM_OPS_32); //("<illegal 0x04_2f_19> (%08x)", op); return 4;}
int arcompact_handle04_2f_1a_dasm(DASM_OPS_32); //("<illegal 0x04_2f_1a> (%08x)", op); return 4;}
int arcompact_handle04_2f_1b_dasm(DASM_OPS_32); //("<illegal 0x04_2f_1b> (%08x)", op); return 4;}
int arcompact_handle04_2f_1c_dasm(DASM_OPS_32); //("<illegal 0x04_2f_1c> (%08x)", op); return 4;}
int arcompact_handle04_2f_1d_dasm(DASM_OPS_32); //("<illegal 0x04_2f_1d> (%08x)", op); return 4;}
int arcompact_handle04_2f_1e_dasm(DASM_OPS_32); //("<illegal 0x04_2f_1e> (%08x)", op); return 4;}
int arcompact_handle04_2f_1f_dasm(DASM_OPS_32); //("<illegal 0x04_2f_1f> (%08x)", op); return 4;}
int arcompact_handle04_2f_20_dasm(DASM_OPS_32); //("<illegal 0x04_2f_20> (%08x)", op); return 4;}
int arcompact_handle04_2f_21_dasm(DASM_OPS_32); //("<illegal 0x04_2f_21> (%08x)", op); return 4;}
int arcompact_handle04_2f_22_dasm(DASM_OPS_32); //("<illegal 0x04_2f_22> (%08x)", op); return 4;}
int arcompact_handle04_2f_23_dasm(DASM_OPS_32); //("<illegal 0x04_2f_23> (%08x)", op); return 4;}
int arcompact_handle04_2f_24_dasm(DASM_OPS_32); //("<illegal 0x04_2f_24> (%08x)", op); return 4;}
int arcompact_handle04_2f_25_dasm(DASM_OPS_32); //("<illegal 0x04_2f_25> (%08x)", op); return 4;}
int arcompact_handle04_2f_26_dasm(DASM_OPS_32); //("<illegal 0x04_2f_26> (%08x)", op); return 4;}
int arcompact_handle04_2f_27_dasm(DASM_OPS_32); //("<illegal 0x04_2f_27> (%08x)", op); return 4;}
int arcompact_handle04_2f_28_dasm(DASM_OPS_32); //("<illegal 0x04_2f_28> (%08x)", op); return 4;}
int arcompact_handle04_2f_29_dasm(DASM_OPS_32); //("<illegal 0x04_2f_29> (%08x)", op); return 4;}
int arcompact_handle04_2f_2a_dasm(DASM_OPS_32); //("<illegal 0x04_2f_2a> (%08x)", op); return 4;}
int arcompact_handle04_2f_2b_dasm(DASM_OPS_32); //("<illegal 0x04_2f_2b> (%08x)", op); return 4;}
int arcompact_handle04_2f_2c_dasm(DASM_OPS_32); //("<illegal 0x04_2f_2c> (%08x)", op); return 4;}
int arcompact_handle04_2f_2d_dasm(DASM_OPS_32); //("<illegal 0x04_2f_2d> (%08x)", op); return 4;}
int arcompact_handle04_2f_2e_dasm(DASM_OPS_32); //("<illegal 0x04_2f_2e> (%08x)", op); return 4;}
int arcompact_handle04_2f_2f_dasm(DASM_OPS_32); //("<illegal 0x04_2f_2f> (%08x)", op); return 4;}
int arcompact_handle04_2f_30_dasm(DASM_OPS_32); //("<illegal 0x04_2f_30> (%08x)", op); return 4;}
int arcompact_handle04_2f_31_dasm(DASM_OPS_32); //("<illegal 0x04_2f_31> (%08x)", op); return 4;}
int arcompact_handle04_2f_32_dasm(DASM_OPS_32); //("<illegal 0x04_2f_32> (%08x)", op); return 4;}
int arcompact_handle04_2f_33_dasm(DASM_OPS_32); //("<illegal 0x04_2f_33> (%08x)", op); return 4;}
int arcompact_handle04_2f_34_dasm(DASM_OPS_32); //("<illegal 0x04_2f_34> (%08x)", op); return 4;}
int arcompact_handle04_2f_35_dasm(DASM_OPS_32); //("<illegal 0x04_2f_35> (%08x)", op); return 4;}
int arcompact_handle04_2f_36_dasm(DASM_OPS_32); //("<illegal 0x04_2f_36> (%08x)", op); return 4;}
int arcompact_handle04_2f_37_dasm(DASM_OPS_32); //("<illegal 0x04_2f_37> (%08x)", op); return 4;}
int arcompact_handle04_2f_38_dasm(DASM_OPS_32); //("<illegal 0x04_2f_38> (%08x)", op); return 4;}
int arcompact_handle04_2f_39_dasm(DASM_OPS_32); //("<illegal 0x04_2f_39> (%08x)", op); return 4;}
int arcompact_handle04_2f_3a_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3a> (%08x)", op); return 4;}
int arcompact_handle04_2f_3b_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3b> (%08x)", op); return 4;}
int arcompact_handle04_2f_3c_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3c> (%08x)", op); return 4;}
int arcompact_handle04_2f_3d_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3d> (%08x)", op); return 4;}
int arcompact_handle04_2f_3e_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3e> (%08x)", op); return 4;}

int arcompact_handle04_2f_3f_00_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_00> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_06_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_06> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_07_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_07> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_08_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_08> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_09_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_09> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_0a_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_0a> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_0b_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_0b> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_0c_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_0c> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_0d_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_0d> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_0e_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_0e> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_0f_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_0f> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_10_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_10> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_11_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_11> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_12_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_12> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_13_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_13> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_14_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_14> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_15_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_15> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_16_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_16> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_17_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_17> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_18_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_18> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_19_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_19> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_1a_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_1a> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_1b_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_1b> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_1c_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_1c> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_1d_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_1d> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_1e_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_1e> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_1f_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_1f> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_20_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_20> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_21_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_21> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_22_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_22> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_23_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_23> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_24_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_24> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_25_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_25> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_26_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_26> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_27_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_27> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_28_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_28> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_29_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_29> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_2a_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_2a> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_2b_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_2b> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_2c_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_2c> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_2d_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_2d> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_2e_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_2e> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_2f_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_2f> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_30_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_30> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_31_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_31> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_32_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_32> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_33_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_33> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_34_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_34> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_35_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_35> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_36_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_36> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_37_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_37> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_38_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_38> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_39_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_39> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_3a_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_3a> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_3b_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_3b> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_3c_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_3c> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_3d_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_3d> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_3e_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_3e> (%08x)", op); return 4;}
int arcompact_handle04_2f_3f_3f_dasm(DASM_OPS_32); //("<illegal 0x04_2f_3f_3f> (%08x)", op); return 4;}

int arcompact_handle04_38_dasm(DASM_OPS_32); //("<illegal 0x04_38> (%08x)", op); return 4;}
int arcompact_handle04_39_dasm(DASM_OPS_32); //("<illegal 0x04_39> (%08x)", op); return 4;}
int arcompact_handle04_3a_dasm(DASM_OPS_32); //("<illegal 0x04_3a> (%08x)", op); return 4;}
int arcompact_handle04_3b_dasm(DASM_OPS_32); //("<illegal 0x04_3b> (%08x)", op); return 4;}
int arcompact_handle04_3c_dasm(DASM_OPS_32); //("<illegal 0x04_3c> (%08x)", op); return 4;}
int arcompact_handle04_3d_dasm(DASM_OPS_32); //("<illegal 0x04_3d> (%08x)", op); return 4;}
int arcompact_handle04_3e_dasm(DASM_OPS_32); //("<illegal 0x04_3e> (%08x)", op); return 4;}
int arcompact_handle04_3f_dasm(DASM_OPS_32); //("<illegal 0x04_3f> (%08x)", op); return 4;}

int arcompact_handle05_09_dasm(DASM_OPS_32); //("<illegal 0x05_09> (%08x)", op); return 4;}
int arcompact_handle05_0c_dasm(DASM_OPS_32); //("<illegal 0x05_0c> (%08x)", op); return 4;}
int arcompact_handle05_0d_dasm(DASM_OPS_32); //("<illegal 0x05_0d> (%08x)", op); return 4;}
int arcompact_handle05_0e_dasm(DASM_OPS_32); //("<illegal 0x05_0e> (%08x)", op); return 4;}
int arcompact_handle05_0f_dasm(DASM_OPS_32); //("<illegal 0x05_0f> (%08x)", op); return 4;}
int arcompact_handle05_10_dasm(DASM_OPS_32); //("<illegal 0x05_10> (%08x)", op); return 4;}
int arcompact_handle05_11_dasm(DASM_OPS_32); //("<illegal 0x05_11> (%08x)", op); return 4;}
int arcompact_handle05_12_dasm(DASM_OPS_32); //("<illegal 0x05_12> (%08x)", op); return 4;}
int arcompact_handle05_13_dasm(DASM_OPS_32); //("<illegal 0x05_13> (%08x)", op); return 4;}
int arcompact_handle05_14_dasm(DASM_OPS_32); //("<illegal 0x05_14> (%08x)", op); return 4;}
int arcompact_handle05_15_dasm(DASM_OPS_32); //("<illegal 0x05_15> (%08x)", op); return 4;}
int arcompact_handle05_16_dasm(DASM_OPS_32); //("<illegal 0x05_16> (%08x)", op); return 4;}
int arcompact_handle05_17_dasm(DASM_OPS_32); //("<illegal 0x05_17> (%08x)", op); return 4;}
int arcompact_handle05_18_dasm(DASM_OPS_32); //("<illegal 0x05_18> (%08x)", op); return 4;}
int arcompact_handle05_19_dasm(DASM_OPS_32); //("<illegal 0x05_19> (%08x)", op); return 4;}
int arcompact_handle05_1a_dasm(DASM_OPS_32); //("<illegal 0x05_1a> (%08x)", op); return 4;}
int arcompact_handle05_1b_dasm(DASM_OPS_32); //("<illegal 0x05_1b> (%08x)", op); return 4;}
int arcompact_handle05_1c_dasm(DASM_OPS_32); //("<illegal 0x05_1c> (%08x)", op); return 4;}
int arcompact_handle05_1d_dasm(DASM_OPS_32); //("<illegal 0x05_1d> (%08x)", op); return 4;}
int arcompact_handle05_1e_dasm(DASM_OPS_32); //("<illegal 0x05_1e> (%08x)", op); return 4;}
int arcompact_handle05_1f_dasm(DASM_OPS_32); //("<illegal 0x05_1f> (%08x)", op); return 4;}
int arcompact_handle05_20_dasm(DASM_OPS_32); //("<illegal 0x05_20> (%08x)", op); return 4;}
int arcompact_handle05_21_dasm(DASM_OPS_32); //("<illegal 0x05_21> (%08x)", op); return 4;}
int arcompact_handle05_22_dasm(DASM_OPS_32); //("<illegal 0x05_22> (%08x)", op); return 4;}
int arcompact_handle05_23_dasm(DASM_OPS_32); //("<illegal 0x05_23> (%08x)", op); return 4;}
int arcompact_handle05_24_dasm(DASM_OPS_32); //("<illegal 0x05_24> (%08x)", op); return 4;}
int arcompact_handle05_25_dasm(DASM_OPS_32); //("<illegal 0x05_25> (%08x)", op); return 4;}
int arcompact_handle05_26_dasm(DASM_OPS_32); //("<illegal 0x05_26> (%08x)", op); return 4;}
int arcompact_handle05_27_dasm(DASM_OPS_32); //("<illegal 0x05_27> (%08x)", op); return 4;}

int arcompact_handle05_2a_dasm(DASM_OPS_32); //("<illegal 0x05_2a> (%08x)", op); return 4;}
int arcompact_handle05_2b_dasm(DASM_OPS_32); //("<illegal 0x05_2b> (%08x)", op); return 4;}
int arcompact_handle05_2c_dasm(DASM_OPS_32); //("<illegal 0x05_2c> (%08x)", op); return 4;}
int arcompact_handle05_2d_dasm(DASM_OPS_32); //("<illegal 0x05_2d> (%08x)", op); return 4;}
int arcompact_handle05_2e_dasm(DASM_OPS_32); //("<illegal 0x05_2e> (%08x)", op); return 4;}

int arcompact_handle05_30_dasm(DASM_OPS_32); //("<illegal 0x05_30> (%08x)", op); return 4;}
int arcompact_handle05_31_dasm(DASM_OPS_32); //("<illegal 0x05_31> (%08x)", op); return 4;}
int arcompact_handle05_32_dasm(DASM_OPS_32); //("<illegal 0x05_32> (%08x)", op); return 4;}
int arcompact_handle05_33_dasm(DASM_OPS_32); //("<illegal 0x05_33> (%08x)", op); return 4;}
int arcompact_handle05_34_dasm(DASM_OPS_32); //("<illegal 0x05_34> (%08x)", op); return 4;}
int arcompact_handle05_35_dasm(DASM_OPS_32); //("<illegal 0x05_35> (%08x)", op); return 4;}
int arcompact_handle05_36_dasm(DASM_OPS_32); //("<illegal 0x05_36> (%08x)", op); return 4;}
int arcompact_handle05_37_dasm(DASM_OPS_32); //("<illegal 0x05_37> (%08x)", op); return 4;}
int arcompact_handle05_38_dasm(DASM_OPS_32); //("<illegal 0x05_38> (%08x)", op); return 4;}
int arcompact_handle05_39_dasm(DASM_OPS_32); //("<illegal 0x05_39> (%08x)", op); return 4;}
int arcompact_handle05_3a_dasm(DASM_OPS_32); //("<illegal 0x05_3a> (%08x)", op); return 4;}
int arcompact_handle05_3b_dasm(DASM_OPS_32); //("<illegal 0x05_3b> (%08x)", op); return 4;}
int arcompact_handle05_3c_dasm(DASM_OPS_32); //("<illegal 0x05_3c> (%08x)", op); return 4;}
int arcompact_handle05_3d_dasm(DASM_OPS_32); //("<illegal 0x05_3d> (%08x)", op); return 4;}
int arcompact_handle05_3e_dasm(DASM_OPS_32); //("<illegal 0x05_3e> (%08x)", op); return 4;}
int arcompact_handle05_3f_dasm(DASM_OPS_32); //("<illegal 0x05_3f> (%08x)", op); return 4;}

int arcompact_handle0f_00_04_dasm(DASM_OPS_16); //("<illegal 0x0f_00_00> (%08x)", op); return 2;}
int arcompact_handle0f_00_05_dasm(DASM_OPS_16); //("<illegal 0x0f_00_00> (%08x)", op); return 2;}
int arcompact_handle0f_00_07_02_dasm(DASM_OPS_16); //("<illegal 0x0f_00_07_02> (%08x)", op); return 2;}
int arcompact_handle0f_00_07_03_dasm(DASM_OPS_16); //("<illegal 0x0f_00_07_03> (%08x)", op); return 2;}
int arcompact_handle0f_01_dasm(DASM_OPS_16); //("<illegal 0x0f_01> (%08x)", op); return 2;}
int arcompact_handle0f_03_dasm(DASM_OPS_16); //("<illegal 0x0f_03> (%08x)", op); return 2;}
int arcompact_handle0f_08_dasm(DASM_OPS_16); //("<illegal 0x0f_08> (%08x)", op); return 2;}
int arcompact_handle0f_09_dasm(DASM_OPS_16); //("<illegal 0x0f_09> (%08x)", op); return 2;}
int arcompact_handle0f_0a_dasm(DASM_OPS_16); //("<illegal 0x0f_0a> (%08x)", op); return 2;}
int arcompact_handle0f_17_dasm(DASM_OPS_16); //("<illegal 0x0f_17> (%08x)", op); return 2;}

int arcompact_handle18_05_02_dasm(DASM_OPS_16); //("<illegal 0x18_05_02> (%04x)", op); return 2;}
int arcompact_handle18_05_03_dasm(DASM_OPS_16); //("<illegal 0x18_05_03> (%04x)", op); return 2;}
int arcompact_handle18_05_04_dasm(DASM_OPS_16); //("<illegal 0x18_05_04> (%04x)", op); return 2;}
int arcompact_handle18_05_05_dasm(DASM_OPS_16); //("<illegal 0x18_05_05> (%04x)", op); return 2;}
int arcompact_handle18_05_06_dasm(DASM_OPS_16); //("<illegal 0x18_05_06> (%04x)", op); return 2;}
int arcompact_handle18_05_07_dasm(DASM_OPS_16); //("<illegal 0x18_05_07> (%04x)", op); return 2;}
int arcompact_handle18_06_00_dasm(DASM_OPS_16); //("<illegal 0x18_06_00> (%04x)",  op); return 2;}
int arcompact_handle18_06_02_dasm(DASM_OPS_16); //("<illegal 0x18_06_02> (%04x)", op); return 2;}
int arcompact_handle18_06_03_dasm(DASM_OPS_16); //("<illegal 0x18_06_03> (%04x)", op); return 2;}
int arcompact_handle18_06_04_dasm(DASM_OPS_16); //("<illegal 0x18_06_04> (%04x)", op); return 2;}
int arcompact_handle18_06_05_dasm(DASM_OPS_16); //("<illegal 0x18_06_05> (%04x)", op); return 2;}
int arcompact_handle18_06_06_dasm(DASM_OPS_16); //("<illegal 0x18_06_06> (%04x)", op); return 2;}
int arcompact_handle18_06_07_dasm(DASM_OPS_16); //("<illegal 0x18_06_07> (%04x)", op); return 2;}
int arcompact_handle18_06_08_dasm(DASM_OPS_16); //("<illegal 0x18_06_08> (%04x)", op); return 2;}
int arcompact_handle18_06_09_dasm(DASM_OPS_16); //("<illegal 0x18_06_09> (%04x)", op); return 2;}
int arcompact_handle18_06_0a_dasm(DASM_OPS_16); //("<illegal 0x18_06_0a> (%04x)", op); return 2;}
int arcompact_handle18_06_0b_dasm(DASM_OPS_16); //("<illegal 0x18_06_0b> (%04x)", op); return 2;}
int arcompact_handle18_06_0c_dasm(DASM_OPS_16); //("<illegal 0x18_06_0c> (%04x)", op); return 2;}
int arcompact_handle18_06_0d_dasm(DASM_OPS_16); //("<illegal 0x18_06_0d> (%04x)", op); return 2;}
int arcompact_handle18_06_0e_dasm(DASM_OPS_16); //("<illegal 0x18_06_0e> (%04x)", op); return 2;}
int arcompact_handle18_06_0f_dasm(DASM_OPS_16); //("<illegal 0x18_06_0f> (%04x)", op); return 2;}
int arcompact_handle18_06_10_dasm(DASM_OPS_16); //("<illegal 0x18_06_10> (%04x)", op); return 2;}
int arcompact_handle18_06_12_dasm(DASM_OPS_16); //("<illegal 0x18_06_12> (%04x)",  op); return 2;}
int arcompact_handle18_06_13_dasm(DASM_OPS_16); //("<illegal 0x18_06_13> (%04x)",  op); return 2;}
int arcompact_handle18_06_14_dasm(DASM_OPS_16); //("<illegal 0x18_06_14> (%04x)",  op); return 2;}
int arcompact_handle18_06_15_dasm(DASM_OPS_16); //("<illegal 0x18_06_15> (%04x)",  op); return 2;}
int arcompact_handle18_06_16_dasm(DASM_OPS_16); //("<illegal 0x18_06_16> (%04x)",  op); return 2;}
int arcompact_handle18_06_17_dasm(DASM_OPS_16); //("<illegal 0x18_06_17> (%04x)",  op); return 2;}
int arcompact_handle18_06_18_dasm(DASM_OPS_16); //("<illegal 0x18_06_18> (%04x)",  op); return 2;}
int arcompact_handle18_06_19_dasm(DASM_OPS_16); //("<illegal 0x18_06_19> (%04x)",  op); return 2;}
int arcompact_handle18_06_1a_dasm(DASM_OPS_16); //("<illegal 0x18_06_1a> (%04x)",  op); return 2;}
int arcompact_handle18_06_1b_dasm(DASM_OPS_16); //("<illegal 0x18_06_1b> (%04x)",  op); return 2;}
int arcompact_handle18_06_1c_dasm(DASM_OPS_16); //("<illegal 0x18_06_1c> (%04x)",  op); return 2;}
int arcompact_handle18_06_1d_dasm(DASM_OPS_16); //("<illegal 0x18_06_1d> (%04x)",  op); return 2;}
int arcompact_handle18_06_1e_dasm(DASM_OPS_16); //("<illegal 0x18_06_1e> (%04x)",  op); return 2;}
int arcompact_handle18_06_1f_dasm(DASM_OPS_16); //("<illegal 0x18_06_1f> (%04x)",  op); return 2;}
int arcompact_handle18_07_00_dasm(DASM_OPS_16); //("<illegal 0x18_07_00> (%04x)",  op); return 2;}
int arcompact_handle18_07_02_dasm(DASM_OPS_16); //("<illegal 0x18_07_02> (%04x)", op); return 2;}
int arcompact_handle18_07_03_dasm(DASM_OPS_16); //("<illegal 0x18_07_03> (%04x)", op); return 2;}
int arcompact_handle18_07_04_dasm(DASM_OPS_16); //("<illegal 0x18_07_04> (%04x)", op); return 2;}
int arcompact_handle18_07_05_dasm(DASM_OPS_16); //("<illegal 0x18_07_05> (%04x)", op); return 2;}
int arcompact_handle18_07_06_dasm(DASM_OPS_16); //("<illegal 0x18_07_06> (%04x)", op); return 2;}
int arcompact_handle18_07_07_dasm(DASM_OPS_16); //("<illegal 0x18_07_07> (%04x)", op); return 2;}
int arcompact_handle18_07_08_dasm(DASM_OPS_16); //("<illegal 0x18_07_08> (%04x)", op); return 2;}
int arcompact_handle18_07_09_dasm(DASM_OPS_16); //("<illegal 0x18_07_09> (%04x)", op); return 2;}
int arcompact_handle18_07_0a_dasm(DASM_OPS_16); //("<illegal 0x18_07_0a> (%04x)", op); return 2;}
int arcompact_handle18_07_0b_dasm(DASM_OPS_16); //("<illegal 0x18_07_0b> (%04x)", op); return 2;}
int arcompact_handle18_07_0c_dasm(DASM_OPS_16); //("<illegal 0x18_07_0c> (%04x)", op); return 2;}
int arcompact_handle18_07_0d_dasm(DASM_OPS_16); //("<illegal 0x18_07_0d> (%04x)", op); return 2;}
int arcompact_handle18_07_0e_dasm(DASM_OPS_16); //("<illegal 0x18_07_0e> (%04x)", op); return 2;}
int arcompact_handle18_07_0f_dasm(DASM_OPS_16); //("<illegal 0x18_07_0f> (%04x)", op); return 2;}
int arcompact_handle18_07_10_dasm(DASM_OPS_16); //("<illegal 0x18_07_10> (%04x)", op); return 2;}
int arcompact_handle18_07_12_dasm(DASM_OPS_16); //("<illegal 0x18_07_12> (%04x)",  op); return 2;}
int arcompact_handle18_07_13_dasm(DASM_OPS_16); //("<illegal 0x18_07_13> (%04x)",  op); return 2;}
int arcompact_handle18_07_14_dasm(DASM_OPS_16); //("<illegal 0x18_07_14> (%04x)",  op); return 2;}
int arcompact_handle18_07_15_dasm(DASM_OPS_16); //("<illegal 0x18_07_15> (%04x)",  op); return 2;}
int arcompact_handle18_07_16_dasm(DASM_OPS_16); //("<illegal 0x18_07_16> (%04x)",  op); return 2;}
int arcompact_handle18_07_17_dasm(DASM_OPS_16); //("<illegal 0x18_07_17> (%04x)",  op); return 2;}
int arcompact_handle18_07_18_dasm(DASM_OPS_16); //("<illegal 0x18_07_18> (%04x)",  op); return 2;}
int arcompact_handle18_07_19_dasm(DASM_OPS_16); //("<illegal 0x18_07_19> (%04x)",  op); return 2;}
int arcompact_handle18_07_1a_dasm(DASM_OPS_16); //("<illegal 0x18_07_1a> (%04x)",  op); return 2;}
int arcompact_handle18_07_1b_dasm(DASM_OPS_16); //("<illegal 0x18_07_1b> (%04x)",  op); return 2;}
int arcompact_handle18_07_1c_dasm(DASM_OPS_16); //("<illegal 0x18_07_1c> (%04x)",  op); return 2;}
int arcompact_handle18_07_1d_dasm(DASM_OPS_16); //("<illegal 0x18_07_1d> (%04x)",  op); return 2;}
int arcompact_handle18_07_1e_dasm(DASM_OPS_16); //("<illegal 0x18_07_1e> (%04x)",  op); return 2;}
int arcompact_handle18_07_1f_dasm(DASM_OPS_16); //("<illegal 0x18_07_1f> (%04x)",  op); return 2;}
