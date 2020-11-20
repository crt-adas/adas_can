
// this file were genereted by coderdbc.com web service
// any questions - mailto:coderdbc@gmail.com

#pragma once


#ifdef __cplusplus
extern "C" {
#endif

#include "j1939v8_5.h"

// @dbccodeconf.h file should be placed in inc folder. If the user wants
// to allocate big DBC struct inside the driver - appropriate define (__DEF_xxxxx__)
// should be placed in this file

typedef struct
{
  AT1DPFSSC_t AT1DPFSSC;          // TX [Vector__XXX].RX [Vector__XXX ].
  AT2DPFSSC_t AT2DPFSSC;          // TX [Vector__XXX].RX [Vector__XXX ].
  CN_t CN;                        // TX [Vector__XXX].RX [Vector__XXX ].
  A2SCRSI1_t A2SCRSI1;            // TX [Vector__XXX].RX [Vector__XXX ].
  A2SCRDSR2_t A2SCRDSR2;          // TX [Vector__XXX].RX [Vector__XXX ].
  WAND_t WAND;                    // TX [Vector__XXX].RX [Vector__XXX ].
  LDISP_t LDISP;                  // TX [Vector__XXX].RX [Vector__XXX ].
  MSI2_t MSI2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ACCS_t ACCS;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ETC12_t ETC12;                  // TX [Vector__XXX].RX [Vector__XXX ].
  HRW_t HRW;                      // TX [Vector__XXX].RX [Vector__XXX ].
  TSC1_t TSC1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  TC1_t TC1;                      // TX [Vector__XXX].RX [Vector__XXX ].
  XBR_t XBR;                      // TX [Vector__XXX].RX [Vector__XXX ].
  AUXIO5_t AUXIO5;                // TX [Vector__XXX].RX [Vector__XXX ].
  SRASI_t SRASI;                  // TX [Vector__XXX].RX [Vector__XXX ].
  CCVS2_t CCVS2;                  // TX [Vector__XXX].RX [Vector__XXX ].
  AEBS2_t AEBS2;                  // TX [Vector__XXX].RX [Vector__XXX ].
  TC2_t TC2;                      // TX [Vector__XXX].RX [Vector__XXX ].
  TC3_t TC3;                      // TX [Vector__XXX].RX [Vector__XXX ].
  EIC_t EIC;                      // TX [Vector__XXX].RX [Vector__XXX ].
  ALTC_t ALTC;                    // TX [Vector__XXX].RX [Vector__XXX ].
  NM_t NM;                        // TX [Vector__XXX].RX [Vector__XXX ].
  JLCM_t JLCM;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ASC6_t ASC6;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ASC2_t ASC2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ETC1_t ETC1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EEC2_t EEC2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EEC1_t EEC1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EGF1_t EGF1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ETC8_t ETC8;                    // TX [Vector__XXX].RX [Vector__XXX ].
  LOI_t LOI;                      // TX [Vector__XXX].RX [Vector__XXX ].
  SSI_t SSI;                      // TX [Vector__XXX].RX [Vector__XXX ].
  BI_t BI;                        // TX [Vector__XXX].RX [Vector__XXX ].
  RGTACRP_t RGTACRP;              // TX [Vector__XXX].RX [Vector__XXX ].
  CCS_t CCS;                      // TX [Vector__XXX].RX [Vector__XXX ].
  KL1_t KL1;                      // TX [Vector__XXX].RX [Vector__XXX ].
  KL2_t KL2;                      // TX [Vector__XXX].RX [Vector__XXX ].
  KL3_t KL3;                      // TX [Vector__XXX].RX [Vector__XXX ].
  RGAAC_t RGAAC;                  // TX [Vector__XXX].RX [Vector__XXX ].
  GC2_t GC2;                      // TX [Vector__XXX].RX [Vector__XXX ].
  A1SCRDSI1_t A1SCRDSI1;          // TX [Vector__XXX].RX [Vector__XXX ].
  A1SCRDSR1_t A1SCRDSR1;          // TX [Vector__XXX].RX [Vector__XXX ].
  A1SCRAI_t A1SCRAI;              // TX [Vector__XXX].RX [Vector__XXX ].
  A2SCRDSI1_t A2SCRDSI1;          // TX [Vector__XXX].RX [Vector__XXX ].
  A2SCRDSR1_t A2SCRDSR1;          // TX [Vector__XXX].RX [Vector__XXX ].
  A2SCRAI_t A2SCRAI;              // TX [Vector__XXX].RX [Vector__XXX ].
  SSI2_t SSI2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ARI_t ARI;                      // TX [Vector__XXX].RX [Vector__XXX ].
  AEBS1_t AEBS1;                  // TX [Vector__XXX].RX [Vector__XXX ].
  WS_t WS;                        // TX [Vector__XXX].RX [Vector__XXX ].
  ETBA1_t ETBA1;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ETFR_t ETFR;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EASI_t EASI;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ECCI1_t ECCI1;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ECCI2_t ECCI2;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ECCI3_t ECCI3;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ECCI4_t ECCI4;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ECCI5_t ECCI5;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ECCI6_t ECCI6;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ECCI7_t ECCI7;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ECCI8_t ECCI8;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ECCI9_t ECCI9;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ECCI10_t ECCI10;                // TX [Vector__XXX].RX [Vector__XXX ].
  ECCI11_t ECCI11;                // TX [Vector__XXX].RX [Vector__XXX ].
  ECCI12_t ECCI12;                // TX [Vector__XXX].RX [Vector__XXX ].
  ECCI13_t ECCI13;                // TX [Vector__XXX].RX [Vector__XXX ].
  ECCI14_t ECCI14;                // TX [Vector__XXX].RX [Vector__XXX ].
  ECCI15_t ECCI15;                // TX [Vector__XXX].RX [Vector__XXX ].
  ECCI16_t ECCI16;                // TX [Vector__XXX].RX [Vector__XXX ].
  ECCI17_t ECCI17;                // TX [Vector__XXX].RX [Vector__XXX ].
  ECCI18_t ECCI18;                // TX [Vector__XXX].RX [Vector__XXX ].
  ECCI19_t ECCI19;                // TX [Vector__XXX].RX [Vector__XXX ].
  ECCI20_t ECCI20;                // TX [Vector__XXX].RX [Vector__XXX ].
  GFI5_t GFI5;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EGFVDC1_t EGFVDC1;              // TX [Vector__XXX].RX [Vector__XXX ].
  EGFVDC2_t EGFVDC2;              // TX [Vector__XXX].RX [Vector__XXX ].
  EGFVDC3_t EGFVDC3;              // TX [Vector__XXX].RX [Vector__XXX ].
  EGFVDC4_t EGFVDC4;              // TX [Vector__XXX].RX [Vector__XXX ].
  EGFVDC5_t EGFVDC5;              // TX [Vector__XXX].RX [Vector__XXX ].
  EGFVSOAC1_t EGFVSOAC1;          // TX [Vector__XXX].RX [Vector__XXX ].
  EGFVSOAC2_t EGFVSOAC2;          // TX [Vector__XXX].RX [Vector__XXX ].
  EGFVSOAC3_t EGFVSOAC3;          // TX [Vector__XXX].RX [Vector__XXX ].
  EGFVSOAC4_t EGFVSOAC4;          // TX [Vector__XXX].RX [Vector__XXX ].
  EGFVSOAC5_t EGFVSOAC5;          // TX [Vector__XXX].RX [Vector__XXX ].
  FPAC_t FPAC;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ECCR_t ECCR;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ECBA1_t ECBA1;                  // TX [Vector__XXX].RX [Vector__XXX ].
  EEC18_t EEC18;                  // TX [Vector__XXX].RX [Vector__XXX ].
  PCC1_t PCC1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ITO1_t ITO1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ITO2_t ITO2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ITO3_t ITO3;                    // TX [Vector__XXX].RX [Vector__XXX ].
  TFAC2_t TFAC2;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ASC7_t ASC7;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ELS_t ELS;                      // TX [Vector__XXX].RX [Vector__XXX ].
  ECPMSI_t ECPMSI;                // TX [Vector__XXX].RX [Vector__XXX ].
  ETC9_t ETC9;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AT2OGC2_t AT2OGC2;              // TX [Vector__XXX].RX [Vector__XXX ].
  AT2OGC1_t AT2OGC1;              // TX [Vector__XXX].RX [Vector__XXX ].
  AT2IGC2_t AT2IGC2;              // TX [Vector__XXX].RX [Vector__XXX ].
  AT2IGC1_t AT2IGC1;              // TX [Vector__XXX].RX [Vector__XXX ].
  AT1OGC2_t AT1OGC2;              // TX [Vector__XXX].RX [Vector__XXX ].
  AT1OGC1_t AT1OGC1;              // TX [Vector__XXX].RX [Vector__XXX ].
  AT1IGC2_t AT1IGC2;              // TX [Vector__XXX].RX [Vector__XXX ].
  AT1IGC1_t AT1IGC1;              // TX [Vector__XXX].RX [Vector__XXX ].
  EJM10_t EJM10;                  // TX [Vector__XXX].RX [Vector__XXX ].
  BJM10_t BJM10;                  // TX [Vector__XXX].RX [Vector__XXX ].
  EJM9_t EJM9;                    // TX [Vector__XXX].RX [Vector__XXX ].
  BJM9_t BJM9;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EJM8_t EJM8;                    // TX [Vector__XXX].RX [Vector__XXX ].
  BJM8_t BJM8;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EJM7_t EJM7;                    // TX [Vector__XXX].RX [Vector__XXX ].
  BJM7_t BJM7;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EJM6_t EJM6;                    // TX [Vector__XXX].RX [Vector__XXX ].
  BJM6_t BJM6;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EJM5_t EJM5;                    // TX [Vector__XXX].RX [Vector__XXX ].
  BJM5_t BJM5;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EJM4_t EJM4;                    // TX [Vector__XXX].RX [Vector__XXX ].
  BJM4_t BJM4;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EOI_t EOI;                      // TX [Vector__XXX].RX [Vector__XXX ].
  GC1_t GC1;                      // TX [Vector__XXX].RX [Vector__XXX ].
  VREP_t VREP;                    // TX [Vector__XXX].RX [].
  OEL_t OEL;                      // TX [Vector__XXX].RX [Vector__XXX ].
  BJM1_t BJM1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EJM1_t EJM1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  BJM2_t BJM2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EJM2_t EJM2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  BJM3_t BJM3;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EJM3_t EJM3;                    // TX [Vector__XXX].RX [Vector__XXX ].
  HBS_t HBS;                      // TX [Vector__XXX].RX [Vector__XXX ].
  BUSC_t BUSC;                    // TX [Vector__XXX].RX [Vector__XXX ].
  BGSC_t BGSC;                    // TX [Vector__XXX].RX [Vector__XXX ].
  BPCAC_t BPCAC;                  // TX [Vector__XXX].RX [Vector__XXX ].
  BPBAC_t BPBAC;                  // TX [Vector__XXX].RX [Vector__XXX ].
  BPAAC_t BPAAC;                  // TX [Vector__XXX].RX [Vector__XXX ].
  BAAC_t BAAC;                    // TX [Vector__XXX].RX [Vector__XXX ].
  UTACE_t UTACE;                  // TX [Vector__XXX].RX [Vector__XXX ].
  UPCACR_t UPCACR;                // TX [Vector__XXX].RX [Vector__XXX ].
  UPCACP_t UPCACP;                // TX [Vector__XXX].RX [Vector__XXX ].
  UPCAC_t UPCAC;                  // TX [Vector__XXX].RX [Vector__XXX ].
  UPBACR_t UPBACR;                // TX [Vector__XXX].RX [Vector__XXX ].
  UPBACP_t UPBACP;                // TX [Vector__XXX].RX [Vector__XXX ].
  UPBAC_t UPBAC;                  // TX [Vector__XXX].RX [Vector__XXX ].
  UPACCR_t UPACCR;                // TX [Vector__XXX].RX [Vector__XXX ].
  UPAACP_t UPAACP;                // TX [Vector__XXX].RX [Vector__XXX ].
  UPAAC_t UPAAC;                  // TX [Vector__XXX].RX [Vector__XXX ].
  UTACR_t UTACR;                  // TX [Vector__XXX].RX [Vector__XXX ].
  UTACP_t UTACP;                  // TX [Vector__XXX].RX [Vector__XXX ].
  UAAC_t UAAC;                    // TX [Vector__XXX].RX [Vector__XXX ].
  GTACE_t GTACE;                  // TX [Vector__XXX].RX [Vector__XXX ].
  GPCACR_t GPCACR;                // TX [Vector__XXX].RX [Vector__XXX ].
  GPCACP_t GPCACP;                // TX [Vector__XXX].RX [Vector__XXX ].
  GPCAC_t GPCAC;                  // TX [Vector__XXX].RX [Vector__XXX ].
  GPBACRP_t GPBACRP;              // TX [Vector__XXX].RX [Vector__XXX ].
  GPBACP_t GPBACP;                // TX [Vector__XXX].RX [Vector__XXX ].
  GPBAC_t GPBAC;                  // TX [Vector__XXX].RX [Vector__XXX ].
  GPAACR_t GPAACR;                // TX [Vector__XXX].RX [Vector__XXX ].
  GPAACP_t GPAACP;                // TX [Vector__XXX].RX [Vector__XXX ].
  GPAAC_t GPAAC;                  // TX [Vector__XXX].RX [Vector__XXX ].
  GTACR_t GTACR;                  // TX [Vector__XXX].RX [Vector__XXX ].
  GTACP_t GTACP;                  // TX [Vector__XXX].RX [Vector__XXX ].
  GAAC_t GAAC;                    // TX [Vector__XXX].RX [Vector__XXX ].
  LCMD_t LCMD;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ASC5_t ASC5;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ASC1_t ASC1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  TCO1_t TCO1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  LTP_t LTP;                      // TX [Vector__XXX].RX [Vector__XXX ].
  LBC_t LBC;                      // TX [Vector__XXX].RX [Vector__XXX ].
  LMP_t LMP;                      // TX [Vector__XXX].RX [Vector__XXX ].
  LSP_t LSP;                      // TX [Vector__XXX].RX [Vector__XXX ].
  LVD_t LVD;                      // TX [Vector__XXX].RX [Vector__XXX ].
  FLI1_t FLI1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  TFAC_t TFAC;                    // TX [Vector__XXX].RX [Vector__XXX ].
  A1SCRAI2_t A1SCRAI2;            // TX [Vector__XXX].RX [Vector__XXX ].
  A2SCRAI2_t A2SCRAI2;            // TX [Vector__XXX].RX [Vector__XXX ].
  ENGSC_t ENGSC;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ESA_t ESA;                      // TX [Vector__XXX].RX [Vector__XXX ].
  AF3_t AF3;                      // TX [Vector__XXX].RX [Vector__XXX ].
  EBCC_t EBCC;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EEC9_t EEC9;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ACCVC_t ACCVC;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ECCVC_t ECCVC;                  // TX [Vector__XXX].RX [Vector__XXX ].
  GFI3_t GFI3;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EEC6_t EEC6;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ACC1_t ACC1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  LVDD_t LVDD;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ECCAI1_t ECCAI1;                // TX [Vector__XXX].RX [Vector__XXX ].
  ECCAI2_t ECCAI2;                // TX [Vector__XXX].RX [Vector__XXX ].
  ECCAI3_t ECCAI3;                // TX [Vector__XXX].RX [Vector__XXX ].
  ECCAI4_t ECCAI4;                // TX [Vector__XXX].RX [Vector__XXX ].
  ECCAI5_t ECCAI5;                // TX [Vector__XXX].RX [Vector__XXX ].
  ECCAI6_t ECCAI6;                // TX [Vector__XXX].RX [Vector__XXX ].
  ECCAI7_t ECCAI7;                // TX [Vector__XXX].RX [Vector__XXX ].
  ECCAI8_t ECCAI8;                // TX [Vector__XXX].RX [Vector__XXX ].
  ECCAI9_t ECCAI9;                // TX [Vector__XXX].RX [Vector__XXX ].
  ECCAI10_t ECCAI10;              // TX [Vector__XXX].RX [Vector__XXX ].
  ECCAI11_t ECCAI11;              // TX [Vector__XXX].RX [Vector__XXX ].
  ECCAI12_t ECCAI12;              // TX [Vector__XXX].RX [Vector__XXX ].
  ECCAI13_t ECCAI13;              // TX [Vector__XXX].RX [Vector__XXX ].
  ECCAI14_t ECCAI14;              // TX [Vector__XXX].RX [Vector__XXX ].
  ECCAI15_t ECCAI15;              // TX [Vector__XXX].RX [Vector__XXX ].
  ECCAI16_t ECCAI16;              // TX [Vector__XXX].RX [Vector__XXX ].
  ECCAI17_t ECCAI17;              // TX [Vector__XXX].RX [Vector__XXX ].
  ECCAI18_t ECCAI18;              // TX [Vector__XXX].RX [Vector__XXX ].
  ECCAI19_t ECCAI19;              // TX [Vector__XXX].RX [Vector__XXX ].
  ECCAI20_t ECCAI20;              // TX [Vector__XXX].RX [Vector__XXX ].
  CDC_t CDC;                      // TX [Vector__XXX].RX [Vector__XXX ].
  DLS_t DLS;                      // TX [Vector__XXX].RX [Vector__XXX ].
  VEP6_t VEP6;                    // TX [Vector__XXX].RX [].
  PLT2_t PLT2;                    // TX [Vector__XXX].RX [].
  PLT1_t PLT1;                    // TX [Vector__XXX].RX [].
  AFT1PSI3_t AFT1PSI3;            // TX [Vector__XXX].RX [Vector__XXX ].
  EFIMRPI3_t EFIMRPI3;            // TX [Vector__XXX].RX [Vector__XXX ].
  EFIMRPI2_t EFIMRPI2;            // TX [Vector__XXX].RX [Vector__XXX ].
  GFSVI_t GFSVI;                  // TX [Vector__XXX].RX [Vector__XXX ].
  EOMDI2_t EOMDI2;                // TX [Vector__XXX].RX [Vector__XXX ].
  EOMDI1_t EOMDI1;                // TX [Vector__XXX].RX [Vector__XXX ].
  GFSP2_t GFSP2;                  // TX [Vector__XXX].RX [Vector__XXX ].
  GFSP1_t GFSP1;                  // TX [Vector__XXX].RX [Vector__XXX ].
  EFIMRPI1_t EFIMRPI1;            // TX [Vector__XXX].RX [Vector__XXX ].
  VSL_t VSL;                      // TX [Vector__XXX].RX [Vector__XXX ].
  ETAPC_t ETAPC;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ETAP_t ETAP;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ETC10_t ETC10;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ETC11_t ETC11;                  // TX [Vector__XXX].RX [Vector__XXX ].
  LLRE_t LLRE;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EFL_P11_t EFL_P11;              // TX [Vector__XXX].RX [Vector__XXX ].
  EMAP_t EMAP;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EFL_P10_t EFL_P10;              // TX [Vector__XXX].RX [Vector__XXX ].
  OCSI_t OCSI;                    // TX [Vector__XXX].RX [Vector__XXX ].
  BDS_t BDS;                      // TX [Vector__XXX].RX [Vector__XXX ].
  A1SCREGT1_t A1SCREGT1;          // TX [Vector__XXX].RX [Vector__XXX ].
  EAI_t EAI;                      // TX [Vector__XXX].RX [Vector__XXX ].
  GCVW_t GCVW;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AGW_t AGW;                      // TX [Vector__XXX].RX [Vector__XXX ].
  EGRBV_t EGRBV;                  // TX [Vector__XXX].RX [Vector__XXX ].
  EBS11_t EBS11;                  // TX [Vector__XXX].RX [Vector__XXX ].
  EBS21_t EBS21;                  // TX [Vector__XXX].RX [Vector__XXX ].
  CAM11_t CAM11;                  // TX [Vector__XXX].RX [].
  CAM21_t CAM21;                  // TX [Vector__XXX].RX [].
  GPV4_t GPV4;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EEC16_t EEC16;                  // TX [Vector__XXX].RX [Vector__XXX ].
  TSIC_t TSIC;                    // TX [Vector__XXX].RX [Vector__XXX ].
  HSC1_t HSC1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AFTSC_t AFTSC;                  // TX [Vector__XXX].RX [Vector__XXX ].
  TCCI_t TCCI;                    // TX [Vector__XXX].RX [Vector__XXX ].
  PCIC_t PCIC;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AFT1PSC_t AFT1PSC;              // TX [Vector__XXX].RX [Vector__XXX ].
  CM2_t CM2;                      // TX [Vector__XXX].RX [Vector__XXX ].
  SPOC_t SPOC;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ESR_t ESR;                      // TX [Vector__XXX].RX [Vector__XXX ].
  RBR_t RBR;                      // TX [Vector__XXX].RX [Vector__XXX ].
  RGE24_t RGE24;                  // TX [Vector__XXX].RX [].
  RGE12_t RGE12;                  // TX [Vector__XXX].RX [].
  CCP_DTO_t CCP_DTO;              // TX [Vector__XXX].RX [].
  CCP_CRO_t CCP_CRO;              // TX [Vector__XXX].RX [].
  SCCCM_t SCCCM;                  // TX [Vector__XXX].RX [].
  SCMCC_t SCMCC;                  // TX [Vector__XXX].RX [].
  ECC_t ECC;                      // TX [Vector__XXX].RX [Vector__XXX ].
  SFC_t SFC;                      // TX [Vector__XXX].RX [Vector__XXX ].
  VLS1_t VLS1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  HCDI1_t HCDI1;                  // TX [Vector__XXX].RX [Vector__XXX ].
  LVDSOM_t LVDSOM;                // TX [Vector__XXX].RX [Vector__XXX ].
  NCS_t NCS;                      // TX [Vector__XXX].RX [Vector__XXX ].
  NC1_t NC1;                      // TX [Vector__XXX].RX [Vector__XXX ].
  GPM18_t GPM18;                  // TX [Vector__XXX].RX [].
  PMI_t PMI;                      // TX [Vector__XXX].RX [Vector__XXX ].
  AUXIO7_t AUXIO7;                // TX [Vector__XXX].RX [Vector__XXX ].
  AUXIO6_t AUXIO6;                // TX [Vector__XXX].RX [Vector__XXX ].
  DM29_t DM29;                    // TX [Vector__XXX].RX [Vector__XXX ].
  DM34_t DM34;                    // TX [Vector__XXX].RX [Vector__XXX ].
  DM32_t DM32;                    // TX [Vector__XXX].RX [Vector__XXX ].
  DM31_t DM31;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AUXIO4_t AUXIO4;                // TX [Vector__XXX].RX [Vector__XXX ].
  AUXIO3_t AUXIO3;                // TX [Vector__XXX].RX [Vector__XXX ].
  AUXIO2_t AUXIO2;                // TX [Vector__XXX].RX [Vector__XXX ].
  DISP1_t DISP1;                  // TX [Vector__XXX].RX [Vector__XXX ].
  FLIC_t FLIC;                    // TX [Vector__XXX].RX [Vector__XXX ].
  CFS_t CFS;                      // TX [Vector__XXX].RX [].
  FSC_t FSC;                      // TX [Vector__XXX].RX [].
  GMS_t GMS;                      // TX [Vector__XXX].RX [].
  GSC_t GSC;                      // TX [Vector__XXX].RX [].
  TPRS_t TPRS;                    // TX [Vector__XXX].RX [Vector__XXX ].
  PLM_t PLM;                      // TX [Vector__XXX].RX [].
  CIM_t CIM;                      // TX [Vector__XXX].RX [].
  PCM1_t PCM1;                    // TX [Vector__XXX].RX [].
  PCM2_t PCM2;                    // TX [Vector__XXX].RX [].
  PCM3_t PCM3;                    // TX [Vector__XXX].RX [].
  PCM4_t PCM4;                    // TX [Vector__XXX].RX [].
  PCM5_t PCM5;                    // TX [Vector__XXX].RX [].
  PCM6_t PCM6;                    // TX [Vector__XXX].RX [].
  PCM7_t PCM7;                    // TX [Vector__XXX].RX [].
  PCM8_t PCM8;                    // TX [Vector__XXX].RX [].
  PCM9_t PCM9;                    // TX [Vector__XXX].RX [].
  PCM10_t PCM10;                  // TX [Vector__XXX].RX [].
  PCM11_t PCM11;                  // TX [Vector__XXX].RX [].
  PCM12_t PCM12;                  // TX [Vector__XXX].RX [].
  PCM13_t PCM13;                  // TX [Vector__XXX].RX [].
  PCM14_t PCM14;                  // TX [Vector__XXX].RX [].
  PCM15_t PCM15;                  // TX [Vector__XXX].RX [].
  PCM16_t PCM16;                  // TX [Vector__XXX].RX [].
  DM21_t DM21;                    // TX [Vector__XXX].RX [Vector__XXX ].
  DM22_t DM22;                    // TX [Vector__XXX].RX [Vector__XXX ].
  GPV3_t GPV3;                    // TX [Vector__XXX].RX [Vector__XXX ].
  GPV2_t GPV2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  GPV1_t GPV1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ETPDT_t ETPDT;                  // TX [Vector__XXX].RX [].
  ETPCM_t ETPCM;                  // TX [Vector__XXX].RX [].
  RQST2_t RQST2;                  // TX [Vector__XXX].RX [Vector__XXX ].
  XFER_t XFER;                    // TX [Vector__XXX].RX [Vector__XXX ].
  PD_t PD;                        // TX [Vector__XXX].RX [Vector__XXX ].
  REQRR_t REQRR;                  // TX [Vector__XXX].RX [Vector__XXX ].
  KWP4_t KWP4;                    // TX [Vector__XXX].RX [].
  KWP3_t KWP3;                    // TX [Vector__XXX].RX [].
  CTL_t CTL;                      // TX [Vector__XXX].RX [Vector__XXX ].
  CL_t CL;                        // TX [Vector__XXX].RX [Vector__XXX ].
  DM18_t DM18;                    // TX [Vector__XXX].RX [Vector__XXX ].
  TDA_t TDA;                      // TX [Vector__XXX].RX [Vector__XXX ].
  DM17_t DM17;                    // TX [Vector__XXX].RX [Vector__XXX ].
  DM16_t DM16;                    // TX [Vector__XXX].RX [Vector__XXX ].
  DM15_t DM15;                    // TX [Vector__XXX].RX [Vector__XXX ].
  DM14_t DM14;                    // TX [Vector__XXX].RX [Vector__XXX ].
  KWP2_t KWP2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  KWP1_t KWP1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  DM13_t DM13;                    // TX [Vector__XXX].RX [Vector__XXX ].
  CM1_t CM1;                      // TX [Vector__XXX].RX [Vector__XXX ].
  GPM21_t GPM21;                  // TX [Vector__XXX].RX [Vector__XXX ].
  GPM11_t GPM11;                  // TX [Vector__XXX].RX [Vector__XXX ].
  DM07_t DM07;                    // TX [Vector__XXX].RX [Vector__XXX ].
  RGE11_t RGE11;                  // TX [Vector__XXX].RX [Vector__XXX ].
  RGE21_t RGE21;                  // TX [Vector__XXX].RX [Vector__XXX ].
  VT12_t VT12;                    // TX [Vector__XXX].RX [].
  VT21_t VT21;                    // TX [Vector__XXX].RX [].
  ACKM_t ACKM;                    // TX [Vector__XXX].RX [Vector__XXX ].
  RQST_t RQST;                    // TX [Vector__XXX].RX [Vector__XXX ].
  TPDT_t TPDT;                    // TX [Vector__XXX].RX [Vector__XXX ].
  TPCMxx_t TPCMxx;                // TX [Vector__XXX].RX [Vector__XXX ].
  Nxx_t Nxx;                      // TX [Vector__XXX].RX [Vector__XXX ].
  AC_t AC;                        // TX [Vector__XXX].RX [Vector__XXX ].
  PropA_t PropA;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ERC1_t ERC1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EBC1_t EBC1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ETC2_t ETC2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EAC1_t EAC1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  HPG_t HPG;                      // TX [Vector__XXX].RX [Vector__XXX ].
  VDC2_t VDC2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ESC1_t ESC1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AT1IG1_t AT1IG1;                // TX [Vector__XXX].RX [Vector__XXX ].
  AT1OG1_t AT1OG1;                // TX [Vector__XXX].RX [Vector__XXX ].
  AT2IG1_t AT2IG1;                // TX [Vector__XXX].RX [Vector__XXX ].
  AT2OG1_t AT2OG1;                // TX [Vector__XXX].RX [Vector__XXX ].
  FWSS1_t FWSS1;                  // TX [Vector__XXX].RX [Vector__XXX ].
  GPM17_t GPM17;                  // TX [Vector__XXX].RX [].
  SAS_t SAS;                      // TX [Vector__XXX].RX [Vector__XXX ].
  EBS26_t EBS26;                  // TX [Vector__XXX].RX [].
  EBS25_t EBS25;                  // TX [Vector__XXX].RX [].
  ESSI_t ESSI;                    // TX [Vector__XXX].RX [Vector__XXX ].
  MSS_t MSS;                      // TX [Vector__XXX].RX [Vector__XXX ].
  ETCC_t ETCC;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AT1IG3_t AT1IG3;                // TX [Vector__XXX].RX [Vector__XXX ].
  AT1OG3_t AT1OG3;                // TX [Vector__XXX].RX [Vector__XXX ].
  AT2IS2_t AT2IS2;                // TX [Vector__XXX].RX [Vector__XXX ].
  AT2OS2_t AT2OS2;                // TX [Vector__XXX].RX [Vector__XXX ].
  ADASIS1_t ADASIS1;              // TX [Vector__XXX].RX [].
  ADASIS2_t ADASIS2;              // TX [Vector__XXX].RX [].
  ADASIS3_t ADASIS3;              // TX [Vector__XXX].RX [].
  TGFI_t TGFI;                    // TX [Vector__XXX].RX [Vector__XXX ].
  VEP3_t VEP3;                    // TX [Vector__XXX].RX [Vector__XXX ].
  PLST2_t PLST2;                  // TX [Vector__XXX].RX [Vector__XXX ].
  PLST1_t PLST1;                  // TX [Vector__XXX].RX [Vector__XXX ].
  LFC2_t LFC2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  A2DEFT1_t A2DEFT1;              // TX [Vector__XXX].RX [Vector__XXX ].
  AT1T1I2_t AT1T1I2;              // TX [Vector__XXX].RX [Vector__XXX ].
  A1DEFI2_t A1DEFI2;              // TX [Vector__XXX].RX [Vector__XXX ].
  FLI3_t FLI3;                    // TX [Vector__XXX].RX [Vector__XXX ].
  OII_t OII;                      // TX [Vector__XXX].RX [Vector__XXX ].
  CCVS4_t CCVS4;                  // TX [Vector__XXX].RX [Vector__XXX ].
  BCLC_t BCLC;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AF5_t AF5;                      // TX [Vector__XXX].RX [Vector__XXX ].
  ETCC3_t ETCC3;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ASI_t ASI;                      // TX [Vector__XXX].RX [Vector__XXX ].
  AT2P1I_t AT2P1I;                // TX [Vector__XXX].RX [Vector__XXX ].
  EEBT3_t EEBT3;                  // TX [Vector__XXX].RX [Vector__XXX ].
  EEBT2_t EEBT2;                  // TX [Vector__XXX].RX [Vector__XXX ].
  EEBT1_t EEBT1;                  // TX [Vector__XXX].RX [Vector__XXX ].
  HEDPI_t HEDPI;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ETCC2_t ETCC2;                  // TX [Vector__XXX].RX [Vector__XXX ].
  EHF2PC_t EHF2PC;                // TX [Vector__XXX].RX [Vector__XXX ].
  AF4_t AF4;                      // TX [Vector__XXX].RX [Vector__XXX ].
  TIRE2_t TIRE2;                  // TX [Vector__XXX].RX [Vector__XXX ].
  TCSI_t TCSI;                    // TX [Vector__XXX].RX [Vector__XXX ].
  TWSSI_t TWSSI;                  // TX [Vector__XXX].RX [Vector__XXX ].
  TSIS_t TSIS;                    // TX [Vector__XXX].RX [Vector__XXX ].
  MTI_t MTI;                      // TX [Vector__XXX].RX [Vector__XXX ].
  AT2HI2_t AT2HI2;                // TX [Vector__XXX].RX [Vector__XXX ].
  AT1HI2_t AT1HI2;                // TX [Vector__XXX].RX [Vector__XXX ].
  SCRSC_t SCRSC;                  // TX [Vector__XXX].RX [Vector__XXX ].
  EEC17_t EEC17;                  // TX [Vector__XXX].RX [Vector__XXX ].
  SCROII3_t SCROII3;              // TX [Vector__XXX].RX [Vector__XXX ].
  A2SCRDSI3_t A2SCRDSI3;          // TX [Vector__XXX].RX [Vector__XXX ].
  A1SCRDSI3_t A1SCRDSI3;          // TX [Vector__XXX].RX [Vector__XXX ].
  PWSI_t PWSI;                    // TX [Vector__XXX].RX [Vector__XXX ].
  PLSS_t PLSS;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EGLI_t EGLI;                    // TX [Vector__XXX].RX [Vector__XXX ].
  SCROII2_t SCROII2;              // TX [Vector__XXX].RX [Vector__XXX ].
  SCROII1_t SCROII1;              // TX [Vector__XXX].RX [Vector__XXX ].
  TCI7_t TCI7;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AFT1PSI2_t AFT1PSI2;            // TX [Vector__XXX].RX [Vector__XXX ].
  AFT1PSI1_t AFT1PSI1;            // TX [Vector__XXX].RX [Vector__XXX ].
  PII_t PII;                      // TX [Vector__XXX].RX [Vector__XXX ].
  CFF_t CFF;                      // TX [Vector__XXX].RX [].
  EEN_t EEN;                      // TX [Vector__XXX].RX [Vector__XXX ].
  AFR_t AFR;                      // TX [Vector__XXX].RX [Vector__XXX ].
  GFP2_t GFP2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ASAI_t ASAI;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EI2_t EI2;                      // TX [Vector__XXX].RX [Vector__XXX ].
  ESC2_t ESC2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AUI_t AUI;                      // TX [Vector__XXX].RX [Vector__XXX ].
  JS3LS_t JS3LS;                  // TX [Vector__XXX].RX [Vector__XXX ].
  JS2LS_t JS2LS;                  // TX [Vector__XXX].RX [Vector__XXX ].
  JS1LS_t JS1LS;                  // TX [Vector__XXX].RX [Vector__XXX ].
  DD2_t DD2;                      // TX [Vector__XXX].RX [Vector__XXX ].
  ICMSTS_t ICMSTS;                // TX [Vector__XXX].RX [Vector__XXX ].
  SPOS_t SPOS;                    // TX [Vector__XXX].RX [Vector__XXX ].
  FPOS_t FPOS;                    // TX [Vector__XXX].RX [Vector__XXX ].
  VEP5_t VEP5;                    // TX [Vector__XXX].RX [Vector__XXX ].
  VEP4_t VEP4;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AT2S2_t AT2S2;                  // TX [Vector__XXX].RX [Vector__XXX ].
  AT1S2_t AT1S2;                  // TX [Vector__XXX].RX [Vector__XXX ].
  A2ECMI_t A2ECMI;                // TX [Vector__XXX].RX [Vector__XXX ].
  A1ECMI_t A1ECMI;                // TX [Vector__XXX].RX [Vector__XXX ].
  A2SCRSI2_t A2SCRSI2;            // TX [Vector__XXX].RX [Vector__XXX ].
  A1SCRSI2_t A1SCRSI2;            // TX [Vector__XXX].RX [Vector__XXX ].
  TRF3_t TRF3;                    // TX [Vector__XXX].RX [Vector__XXX ].
  HSS_t HSS;                      // TX [Vector__XXX].RX [Vector__XXX ].
  GFI4_t GFI4;                    // TX [Vector__XXX].RX [Vector__XXX ].
  A2SCREGT2_t A2SCREGT2;          // TX [Vector__XXX].RX [Vector__XXX ].
  A1SCREGT2_t A1SCREGT2;          // TX [Vector__XXX].RX [Vector__XXX ].
  DM57_t DM57;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EEC13_t EEC13;                  // TX [Vector__XXX].RX [Vector__XXX ].
  EF_TVI2_t EF_TVI2;              // TX [Vector__XXX].RX [Vector__XXX ].
  EEGR2A_t EEGR2A;                // TX [Vector__XXX].RX [Vector__XXX ].
  EEGR1A_t EEGR1A;                // TX [Vector__XXX].RX [Vector__XXX ].
  EEC12_t EEC12;                  // TX [Vector__XXX].RX [Vector__XXX ].
  DSS_t DSS;                      // TX [Vector__XXX].RX [].
  DSC_t DSC;                      // TX [Vector__XXX].RX [].
  NSSR_t NSSR;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EPSI_t EPSI;                    // TX [Vector__XXX].RX [Vector__XXX ].
  XCP_ID_t XCP_ID;                // TX [Vector__XXX].RX [].
  AT1P1I_t AT1P1I;                // TX [Vector__XXX].RX [Vector__XXX ].
  AT1DPF2S5_t AT1DPF2S5;          // TX [Vector__XXX].RX [Vector__XXX ].
  AT1DPF2S4_t AT1DPF2S4;          // TX [Vector__XXX].RX [Vector__XXX ].
  AT1DPF2S3_t AT1DPF2S3;          // TX [Vector__XXX].RX [Vector__XXX ].
  AT1DPF1S5_t AT1DPF1S5;          // TX [Vector__XXX].RX [Vector__XXX ].
  AT1DPF1S4_t AT1DPF1S4;          // TX [Vector__XXX].RX [Vector__XXX ].
  AT1DPF1S3_t AT1DPF1S3;          // TX [Vector__XXX].RX [Vector__XXX ].
  CCVS3_t CCVS3;                  // TX [Vector__XXX].RX [Vector__XXX ].
  AT2AC3_t AT2AC3;                // TX [Vector__XXX].RX [Vector__XXX ].
  AT1AC3_t AT1AC3;                // TX [Vector__XXX].RX [Vector__XXX ].
  EFL_P12_t EFL_P12;              // TX [Vector__XXX].RX [Vector__XXX ].
  DPFC2_t DPFC2;                  // TX [Vector__XXX].RX [Vector__XXX ].
  LFE2_t LFE2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  SFS_t SFS;                      // TX [Vector__XXX].RX [Vector__XXX ].
  EFP_t EFP;                      // TX [Vector__XXX].RX [Vector__XXX ].
  HOP_t HOP;                      // TX [Vector__XXX].RX [Vector__XXX ].
  VLS2_t VLS2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EC3_t EC3;                      // TX [Vector__XXX].RX [Vector__XXX ].
  IVAC_t IVAC;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ARMSWIMC_t ARMSWIMC;            // TX [Vector__XXX].RX [Vector__XXX ].
  AFT2NAI_t AFT2NAI;              // TX [Vector__XXX].RX [Vector__XXX ].
  AFT1NAI_t AFT1NAI;              // TX [Vector__XXX].RX [Vector__XXX ].
  AT2WUDOC_t AT2WUDOC;            // TX [Vector__XXX].RX [Vector__XXX ].
  EFS2_t EFS2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ETWAI_t ETWAI;                  // TX [Vector__XXX].RX [Vector__XXX ].
  EFTVI1_t EFTVI1;                // TX [Vector__XXX].RX [Vector__XXX ].
  ETCBI_t ETCBI;                  // TX [Vector__XXX].RX [Vector__XXX ].
  CAC2_t CAC2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  CAC2P_t CAC2P;                  // TX [Vector__XXX].RX [Vector__XXX ].
  CAC1_t CAC1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  CAC1P_t CAC1P;                  // TX [Vector__XXX].RX [Vector__XXX ].
  DPF2S2_t DPF2S2;                // TX [Vector__XXX].RX [Vector__XXX ].
  DPF1S2_t DPF1S2;                // TX [Vector__XXX].RX [Vector__XXX ].
  ET5_t ET5;                      // TX [Vector__XXX].RX [Vector__XXX ].
  LVDS_t LVDS;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AISO_t AISO;                    // TX [Vector__XXX].RX [Vector__XXX ].
  IOS_t IOS;                      // TX [Vector__XXX].RX [Vector__XXX ].
  DLCD2_t DLCD2;                  // TX [Vector__XXX].RX [Vector__XXX ].
  DLCD1_t DLCD1;                  // TX [Vector__XXX].RX [Vector__XXX ].
  DLCC2_t DLCC2;                  // TX [Vector__XXX].RX [Vector__XXX ].
  DLCC1_t DLCC1;                  // TX [Vector__XXX].RX [Vector__XXX ].
  HRLFC_t HRLFC;                  // TX [Vector__XXX].RX [Vector__XXX ].
  MSI1_t MSI1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  MSCI_t MSCI;                    // TX [Vector__XXX].RX [Vector__XXX ].
  BCH2_t BCH2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  BCH1_t BCH1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AT1WUDOC_t AT1WUDOC;            // TX [Vector__XXX].RX [Vector__XXX ].
  DPF2S_t DPF2S;                  // TX [Vector__XXX].RX [Vector__XXX ].
  DPF1S_t DPF1S;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ATDT2_t ATDT2;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ATDT1_t ATDT1;                  // TX [Vector__XXX].RX [Vector__XXX ].
  A2DOC_t A2DOC;                  // TX [Vector__XXX].RX [Vector__XXX ].
  A1DOC_t A1DOC;                  // TX [Vector__XXX].RX [Vector__XXX ].
  A2GOC_t A2GOC;                  // TX [Vector__XXX].RX [Vector__XXX ].
  A1GOC_t A1GOC;                  // TX [Vector__XXX].RX [Vector__XXX ].
  FD2_t FD2;                      // TX [Vector__XXX].RX [Vector__XXX ].
  TBD_t TBD;                      // TX [Vector__XXX].RX [].
  A2DEFSI_t A2DEFSI;              // TX [Vector__XXX].RX [Vector__XXX ].
  A2SCRRT2I_t A2SCRRT2I;          // TX [Vector__XXX].RX [Vector__XXX ].
  A2DEFT1I1_t A2DEFT1I1;          // TX [Vector__XXX].RX [Vector__XXX ].
  A2DEFI1_t A2DEFI1;              // TX [Vector__XXX].RX [Vector__XXX ].
  A2SCREGT1_t A2SCREGT1;          // TX [Vector__XXX].RX [Vector__XXX ].
  A2SCREGP_t A2SCREGP;            // TX [Vector__XXX].RX [Vector__XXX ].
  A2SCRDSI2_t A2SCRDSI2;          // TX [Vector__XXX].RX [Vector__XXX ].
  A1DEFSI_t A1DEFSI;              // TX [Vector__XXX].RX [Vector__XXX ].
  A1SCRRT2I_t A1SCRRT2I;          // TX [Vector__XXX].RX [Vector__XXX ].
  A1SCREGP_t A1SCREGP;            // TX [Vector__XXX].RX [Vector__XXX ].
  A1SCRDSR2_t A1SCRDSR2;          // TX [Vector__XXX].RX [Vector__XXX ].
  A1SCRDSI2_t A1SCRDSI2;          // TX [Vector__XXX].RX [Vector__XXX ].
  ICC_t ICC;                      // TX [Vector__XXX].RX [Vector__XXX ].
  MSSC_t MSSC;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AT2FC2_t AT2FC2;                // TX [Vector__XXX].RX [Vector__XXX ].
  AT2TWC_t AT2TWC;                // TX [Vector__XXX].RX [Vector__XXX ].
  AT1TWC_t AT1TWC;                // TX [Vector__XXX].RX [Vector__XXX ].
  O2FT2_t O2FT2;                  // TX [Vector__XXX].RX [Vector__XXX ].
  O2FT1_t O2FT1;                  // TX [Vector__XXX].RX [Vector__XXX ].
  GPM211_t GPM211;                // TX [Vector__XXX].RX [].
  GPM210_t GPM210;                // TX [Vector__XXX].RX [].
  GPM29_t GPM29;                  // TX [Vector__XXX].RX [].
  GPM28_t GPM28;                  // TX [Vector__XXX].RX [].
  GPM27_t GPM27;                  // TX [Vector__XXX].RX [].
  GPM26_t GPM26;                  // TX [Vector__XXX].RX [].
  GPM19_t GPM19;                  // TX [Vector__XXX].RX [].
  DM40_t DM40;                    // TX [Vector__XXX].RX [Vector__XXX ].
  DM39_t DM39;                    // TX [Vector__XXX].RX [Vector__XXX ].
  DM38_t DM38;                    // TX [Vector__XXX].RX [Vector__XXX ].
  DM37_t DM37;                    // TX [Vector__XXX].RX [Vector__XXX ].
  DM36_t DM36;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AT1FC2_t AT1FC2;                // TX [Vector__XXX].RX [Vector__XXX ].
  ET4_t ET4;                      // TX [Vector__XXX].RX [Vector__XXX ].
  ZNVW_t ZNVW;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AAGW_t AAGW;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AT2AC2_t AT2AC2;                // TX [Vector__XXX].RX [Vector__XXX ].
  AT1AC2_t AT1AC2;                // TX [Vector__XXX].RX [Vector__XXX ].
  A1SCRSI1_t A1SCRSI1;            // TX [Vector__XXX].RX [Vector__XXX ].
  EEC8_t EEC8;                    // TX [Vector__XXX].RX [Vector__XXX ].
  DRC_t DRC;                      // TX [Vector__XXX].RX [Vector__XXX ].
  BSA_t BSA;                      // TX [Vector__XXX].RX [Vector__XXX ].
  ESV6_t ESV6;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ESV5_t ESV5;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ESV4_t ESV4;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ESV3_t ESV3;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ESV2_t ESV2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ESV1_t ESV1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AT2S1_t AT2S1;                  // TX [Vector__XXX].RX [Vector__XXX ].
  AT1S1_t AT1S1;                  // TX [Vector__XXX].RX [Vector__XXX ].
  DPFC1_t DPFC1;                  // TX [Vector__XXX].RX [Vector__XXX ].
  FMS1_t FMS1;                    // TX [Vector__XXX].RX [].
  AFSS_t AFSS;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EC2_t EC2;                      // TX [Vector__XXX].RX [Vector__XXX ].
  TCI_t TCI;                      // TX [Vector__XXX].RX [Vector__XXX ].
  EFL_P9_t EFL_P9;                // TX [Vector__XXX].RX [Vector__XXX ].
  EFL_P8_t EFL_P8;                // TX [Vector__XXX].RX [Vector__XXX ].
  EFL_P7_t EFL_P7;                // TX [Vector__XXX].RX [Vector__XXX ].
  EFL_P6_t EFL_P6;                // TX [Vector__XXX].RX [Vector__XXX ].
  EFL_P5_t EFL_P5;                // TX [Vector__XXX].RX [Vector__XXX ].
  VDS2_t VDS2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AT2GP_t AT2GP;                  // TX [Vector__XXX].RX [Vector__XXX ].
  AT1GP_t AT1GP;                  // TX [Vector__XXX].RX [Vector__XXX ].
  UTACER_t UTACER;                // TX [Vector__XXX].RX [Vector__XXX ].
  GTACER_t GTACER;                // TX [Vector__XXX].RX [Vector__XXX ].
  GTACPP_t GTACPP;                // TX [Vector__XXX].RX [Vector__XXX ].
  ACS_t ACS;                      // TX [Vector__XXX].RX [Vector__XXX ].
  EEC7_t EEC7;                    // TX [Vector__XXX].RX [Vector__XXX ].
  TRF2_t TRF2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  LFI2_t LFI2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  LFI3_t LFI3;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AT1HI1_t AT1HI1;                // TX [Vector__XXX].RX [Vector__XXX ].
  AT2HI1_t AT2HI1;                // TX [Vector__XXX].RX [Vector__XXX ].
  EBS24_t EBS24;                  // TX [Vector__XXX].RX [].
  A1DEFI1_t A1DEFI1;              // TX [Vector__XXX].RX [Vector__XXX ].
  SEP2_t SEP2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  SEP1_t SEP1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AT2AC1_t AT2AC1;                // TX [Vector__XXX].RX [Vector__XXX ].
  AT1AC1_t AT1AC1;                // TX [Vector__XXX].RX [Vector__XXX ].
  AT2FC1_t AT2FC1;                // TX [Vector__XXX].RX [Vector__XXX ].
  AT1FC1_t AT1FC1;                // TX [Vector__XXX].RX [Vector__XXX ].
  PTODE_t PTODE;                  // TX [Vector__XXX].RX [Vector__XXX ].
  DC2_t DC2;                      // TX [Vector__XXX].RX [Vector__XXX ].
  WCM2_t WCM2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  WCM1_t WCM1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EFL_P4_t EFL_P4;                // TX [Vector__XXX].RX [Vector__XXX ].
  RCMS_t RCMS;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EFI_t EFI;                      // TX [Vector__XXX].RX [Vector__XXX ].
  FWSS2_t FWSS2;                  // TX [Vector__XXX].RX [Vector__XXX ].
  AT2IMG_t AT2IMG;                // TX [Vector__XXX].RX [Vector__XXX ].
  AT2OG2_t AT2OG2;                // TX [Vector__XXX].RX [Vector__XXX ].
  AT2IG2_t AT2IG2;                // TX [Vector__XXX].RX [Vector__XXX ].
  AT1IMG_t AT1IMG;                // TX [Vector__XXX].RX [Vector__XXX ].
  AT1OG2_t AT1OG2;                // TX [Vector__XXX].RX [Vector__XXX ].
  AT1IG2_t AT1IG2;                // TX [Vector__XXX].RX [Vector__XXX ].
  DM26_t DM26;                    // TX [Vector__XXX].RX [Vector__XXX ].
  TPRI_t TPRI;                    // TX [Vector__XXX].RX [Vector__XXX ].
  TR6_t TR6;                      // TX [Vector__XXX].RX [Vector__XXX ].
  TR5_t TR5;                      // TX [Vector__XXX].RX [Vector__XXX ].
  TR3_t TR3;                      // TX [Vector__XXX].RX [Vector__XXX ].
  TR1_t TR1;                      // TX [Vector__XXX].RX [Vector__XXX ].
  TR2_t TR2;                      // TX [Vector__XXX].RX [Vector__XXX ].
  TR7_t TR7;                      // TX [Vector__XXX].RX [Vector__XXX ].
  EFL_P3_t EFL_P3;                // TX [Vector__XXX].RX [Vector__XXX ].
  EEC14_t EEC14;                  // TX [Vector__XXX].RX [Vector__XXX ].
  EEC15_t EEC15;                  // TX [Vector__XXX].RX [Vector__XXX ].
  EBC5_t EBC5;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ECUID_t ECUID;                  // TX [Vector__XXX].RX [Vector__XXX ].
  CSA_t CSA;                      // TX [Vector__XXX].RX [Vector__XXX ].
  OHCSS_t OHCSS;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ISCS_t ISCS;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ISC_t ISC;                      // TX [Vector__XXX].RX [Vector__XXX ].
  OHECS_t OHECS;                  // TX [Vector__XXX].RX [Vector__XXX ].
  OWW_t OWW;                      // TX [Vector__XXX].RX [Vector__XXX ].
  WSMM_t WSMM;                    // TX [Vector__XXX].RX [Vector__XXX ].
  WSM_t WSM;                      // TX [Vector__XXX].RX [Vector__XXX ].
  IC2_t IC2;                      // TX [Vector__XXX].RX [Vector__XXX ].
  EP_t EP;                        // TX [Vector__XXX].RX [Vector__XXX ].
  TCI6_t TCI6;                    // TX [Vector__XXX].RX [Vector__XXX ].
  CM3_t CM3;                      // TX [Vector__XXX].RX [Vector__XXX ].
  EEC5_t EEC5;                    // TX [Vector__XXX].RX [Vector__XXX ].
  MCI_t MCI;                      // TX [Vector__XXX].RX [Vector__XXX ].
  MAM11_t MAM11;                  // TX [Vector__XXX].RX [].
  MAM21_t MAM21;                  // TX [Vector__XXX].RX [].
  AMB2_t AMB2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  CACI_t CACI;                    // TX [Vector__XXX].RX [Vector__XXX ].
  SPR_t SPR;                      // TX [Vector__XXX].RX [Vector__XXX ].
  EOAC_t EOAC;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EPD_t EPD;                      // TX [Vector__XXX].RX [Vector__XXX ].
  MVS_t MVS;                      // TX [Vector__XXX].RX [Vector__XXX ].
  ET_t ET;                        // TX [Vector__XXX].RX [Vector__XXX ].
  RTF_t RTF;                      // TX [Vector__XXX].RX [Vector__XXX ].
  TFR_t TFR;                      // TX [Vector__XXX].RX [Vector__XXX ].
  IRCR_t IRCR;                    // TX [Vector__XXX].RX [].
  IRC_t IRC;                      // TX [Vector__XXX].RX [].
  WSMEM_t WSMEM;                  // TX [Vector__XXX].RX [Vector__XXX ].
  WSMSTR_t WSMSTR;                // TX [Vector__XXX].RX [Vector__XXX ].
  RESRR_t RESRR;                  // TX [Vector__XXX].RX [Vector__XXX ].
  LC_t LC;                        // TX [Vector__XXX].RX [Vector__XXX ].
  AV00EF_t AV00EF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV01EF_t AV01EF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV02EF_t AV02EF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV03EF_t AV03EF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV04EF_t AV04EF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV05EF_t AV05EF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV06EF_t AV06EF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV07EF_t AV07EF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV08EF_t AV08EF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV09EF_t AV09EF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV10EF_t AV10EF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV11EF_t AV11EF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV12EF_t AV12EF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV13EF_t AV13EF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV14EF_t AV14EF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV15EF_t AV15EF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV00MF_t AV00MF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV01MF_t AV01MF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV02MF_t AV02MF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV03MF_t AV03MF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV04MF_t AV04MF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV05MF_t AV05MF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV06MF_t AV06MF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV07MF_t AV07MF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV08MF_t AV08MF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV09MF_t AV09MF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV10MF_t AV10MF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV11MF_t AV11MF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV12MF_t AV12MF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV13MF_t AV13MF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV14MF_t AV14MF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV15MF_t AV15MF;                // TX [Vector__XXX].RX [Vector__XXX ].
  AV00C_t AV00C;                  // TX [Vector__XXX].RX [Vector__XXX ].
  AV01C_t AV01C;                  // TX [Vector__XXX].RX [Vector__XXX ].
  AV02C_t AV02C;                  // TX [Vector__XXX].RX [Vector__XXX ].
  AV03C_t AV03C;                  // TX [Vector__XXX].RX [Vector__XXX ].
  AV04C_t AV04C;                  // TX [Vector__XXX].RX [Vector__XXX ].
  AV05C_t AV05C;                  // TX [Vector__XXX].RX [Vector__XXX ].
  AV06C_t AV06C;                  // TX [Vector__XXX].RX [Vector__XXX ].
  AV07C_t AV07C;                  // TX [Vector__XXX].RX [Vector__XXX ].
  AV08C_t AV08C;                  // TX [Vector__XXX].RX [Vector__XXX ].
  AV09C_t AV09C;                  // TX [Vector__XXX].RX [Vector__XXX ].
  AV10C_t AV10C;                  // TX [Vector__XXX].RX [Vector__XXX ].
  AV11C_t AV11C;                  // TX [Vector__XXX].RX [Vector__XXX ].
  AV12C_t AV12C;                  // TX [Vector__XXX].RX [Vector__XXX ].
  AV13C_t AV13C;                  // TX [Vector__XXX].RX [Vector__XXX ].
  AV14C_t AV14C;                  // TX [Vector__XXX].RX [Vector__XXX ].
  AV15C_t AV15C;                  // TX [Vector__XXX].RX [Vector__XXX ].
  LD_t LD;                        // TX [Vector__XXX].RX [Vector__XXX ].
  HPTOC_t HPTOC;                  // TX [Vector__XXX].RX [Vector__XXX ].
  RPTO_t RPTO;                    // TX [Vector__XXX].RX [Vector__XXX ].
  FPTO_t FPTO;                    // TX [Vector__XXX].RX [Vector__XXX ].
  RHS_t RHS;                      // TX [Vector__XXX].RX [Vector__XXX ].
  FHS_t FHS;                      // TX [Vector__XXX].RX [Vector__XXX ].
  MP_t MP;                        // TX [Vector__XXX].RX [Vector__XXX ].
  WBSD_t WBSD;                    // TX [Vector__XXX].RX [Vector__XXX ].
  GBSD_t GBSD;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ETC7_t ETC7;                    // TX [Vector__XXX].RX [Vector__XXX ].
  TCFG2_t TCFG2;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ML_t ML;                        // TX [Vector__XXX].RX [Vector__XXX ].
  DC1_t DC1;                      // TX [Vector__XXX].RX [Vector__XXX ].
  VDC1_t VDC1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  BT1_t BT1;                      // TX [Vector__XXX].RX [Vector__XXX ].
  ACC2_t ACC2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  RTC1_t RTC1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ECT1_t ECT1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  GFD_t GFD;                      // TX [Vector__XXX].RX [Vector__XXX ].
  AT1T1I1_t AT1T1I1;              // TX [Vector__XXX].RX [Vector__XXX ].
  ASC4_t ASC4;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ASC3_t ASC3;                    // TX [Vector__XXX].RX [Vector__XXX ].
  FLI2_t FLI2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  RGE22_t RGE22;                  // TX [Vector__XXX].RX [Vector__XXX ].
  GPM12_t GPM12;                  // TX [Vector__XXX].RX [Vector__XXX ].
  RGE23_t RGE23;                  // TX [Vector__XXX].RX [Vector__XXX ].
  GPM13_t GPM13;                  // TX [Vector__XXX].RX [Vector__XXX ].
  GPM23_t GPM23;                  // TX [Vector__XXX].RX [Vector__XXX ].
  GPM14_t GPM14;                  // TX [Vector__XXX].RX [Vector__XXX ].
  GPM24_t GPM24;                  // TX [Vector__XXX].RX [Vector__XXX ].
  GPM15_t GPM15;                  // TX [Vector__XXX].RX [Vector__XXX ].
  GPM25_t GPM25;                  // TX [Vector__XXX].RX [Vector__XXX ].
  GPM16_t GPM16;                  // TX [Vector__XXX].RX [Vector__XXX ].
  BM_t BM;                        // TX [Vector__XXX].RX [Vector__XXX ].
  CCC_t CCC;                      // TX [Vector__XXX].RX [Vector__XXX ].
  VF_t VF;                        // TX [Vector__XXX].RX [Vector__XXX ].
  ET3_t ET3;                      // TX [Vector__XXX].RX [Vector__XXX ].
  EFS_t EFS;                      // TX [Vector__XXX].RX [Vector__XXX ].
  DI_t DI;                        // TX [Vector__XXX].RX [Vector__XXX ].
  HTR_t HTR;                      // TX [Vector__XXX].RX [Vector__XXX ].
  CVW_t CVW;                      // TX [Vector__XXX].RX [Vector__XXX ].
  VEP2_t VEP2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  SP2_t SP2;                      // TX [Vector__XXX].RX [Vector__XXX ].
  ETH_t ETH;                      // TX [Vector__XXX].RX [Vector__XXX ].
  EAC_t EAC;                      // TX [Vector__XXX].RX [Vector__XXX ].
  TCW_t TCW;                      // TX [Vector__XXX].RX [Vector__XXX ].
  TCI5_t TCI5;                    // TX [Vector__XXX].RX [Vector__XXX ].
  TCI4_t TCI4;                    // TX [Vector__XXX].RX [Vector__XXX ].
  TCI3_t TCI3;                    // TX [Vector__XXX].RX [Vector__XXX ].
  TCI2_t TCI2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  MBT3_t MBT3;                    // TX [Vector__XXX].RX [Vector__XXX ].
  MBT2_t MBT2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  MBT1_t MBT1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EPT4_t EPT4;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ET2_t ET2;                      // TX [Vector__XXX].RX [Vector__XXX ].
  IMT1_t IMT1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EBC3_t EBC3;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AIR1_t AIR1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  FD1_t FD1;                      // TX [Vector__XXX].RX [Vector__XXX ].
  EBC2_t EBC2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  SERV_t SERV;                    // TX [Vector__XXX].RX [Vector__XXX ].
  VDHR_t VDHR;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EBS22_t EBS22;                  // TX [Vector__XXX].RX [Vector__XXX ].
  EBS23_t EBS23;                  // TX [Vector__XXX].RX [Vector__XXX ].
  GPM22_t GPM22;                  // TX [Vector__XXX].RX [Vector__XXX ].
  EBS12_t EBS12;                  // TX [Vector__XXX].RX [Vector__XXX ].
  DM05_t DM05;                    // TX [Vector__XXX].RX [Vector__XXX ].
  DM08_t DM08;                    // TX [Vector__XXX].RX [Vector__XXX ].
  DM09_t DM09;                    // TX [Vector__XXX].RX [].
  DM10_t DM10;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AS_t AS;                        // TX [Vector__XXX].RX [Vector__XXX ].
  HSI1_t HSI1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AUXIO1_t AUXIO1;                // TX [Vector__XXX].RX [Vector__XXX ].
  SOFT_t SOFT;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EFL_P2_t EFL_P2;                // TX [Vector__XXX].RX [Vector__XXX ].
//  IO_t IO;                        // TX [Vector__XXX].RX [Vector__XXX ].
  TC_t TC;                        // TX [Vector__XXX].RX [Vector__XXX ].
  AIR2_t AIR2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EEC3_t EEC3;                    // TX [Vector__XXX].RX [Vector__XXX ].
  VD_t VD;                        // TX [Vector__XXX].RX [Vector__XXX ].
  TCFG_t TCFG;                    // TX [Vector__XXX].RX [Vector__XXX ].
  SHUTDN_t SHUTDN;                // TX [Vector__XXX].RX [Vector__XXX ].
  HOURS_t HOURS;                  // TX [Vector__XXX].RX [Vector__XXX ].
  TD_t TD;                        // TX [Vector__XXX].RX [Vector__XXX ].
  VH_t VH;                        // TX [Vector__XXX].RX [Vector__XXX ].
  VDS_t VDS;                      // TX [Vector__XXX].RX [Vector__XXX ].
  LFC1_t LFC1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  VW_t VW;                        // TX [Vector__XXX].RX [Vector__XXX ].
  CI_t CI;                        // TX [Vector__XXX].RX [Vector__XXX ].
  VI_t VI;                        // TX [Vector__XXX].RX [Vector__XXX ].
  CCSS_t CCSS;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ET1_t ET1;                      // TX [Vector__XXX].RX [Vector__XXX ].
  EFL_P1_t EFL_P1;                // TX [Vector__XXX].RX [Vector__XXX ].
  PTO_t PTO;                      // TX [Vector__XXX].RX [Vector__XXX ].
  CCVS1_t CCVS1;                  // TX [Vector__XXX].RX [Vector__XXX ].
  LFE1_t LFE1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  VP_t VP;                        // TX [Vector__XXX].RX [Vector__XXX ].
  TIRE1_t TIRE1;                  // TX [Vector__XXX].RX [Vector__XXX ].
  AMB_t AMB;                      // TX [Vector__XXX].RX [Vector__XXX ].
  IC1_t IC1;                      // TX [Vector__XXX].RX [Vector__XXX ].
  VEP1_t VEP1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  TRF1_t TRF1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AI_t AI;                        // TX [Vector__XXX].RX [Vector__XXX ].
  B_t B;                          // TX [Vector__XXX].RX [Vector__XXX ].
  RF_t RF;                        // TX [Vector__XXX].RX [Vector__XXX ].
  DD1_t DD1;                      // TX [Vector__XXX].RX [Vector__XXX ].
  AF1_t AF1;                      // TX [Vector__XXX].RX [Vector__XXX ].
  AWPP_t AWPP;                    // TX [Vector__XXX].RX [Vector__XXX ].
  OI_t OI;                        // TX [Vector__XXX].RX [Vector__XXX ].
  Hubner_t Hubner;                // TX [Vector__XXX].RX [Vector__XXX ].
  PropA2_t PropA2;                // TX [Vector__XXX].RX [Vector__XXX ].
  ATS_t ATS;                      // TX [Vector__XXX].RX [Vector__XXX ].
  ATR_t ATR;                      // TX [Vector__XXX].RX [Vector__XXX ].
  RESET_t RESET;                  // TX [Vector__XXX].RX [Vector__XXX ].
  EEC19_t EEC19;                  // TX [Vector__XXX].RX [Vector__XXX ].
  FSAS_t FSAS;                    // TX [Vector__XXX].RX [Vector__XXX ].
  SCROII4_t SCROII4;              // TX [Vector__XXX].RX [Vector__XXX ].
  BWLN_t BWLN;                    // TX [Vector__XXX].RX [Vector__XXX ].
  MFEH_t MFEH;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ESMR3_t ESMR3;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ESMR2_t ESMR2;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ESMR1_t ESMR1;                  // TX [Vector__XXX].RX [Vector__XXX ].
  ESVMAX6_t ESVMAX6;              // TX [Vector__XXX].RX [Vector__XXX ].
  ESVMAX5_t ESVMAX5;              // TX [Vector__XXX].RX [Vector__XXX ].
  ESVMAX4_t ESVMAX4;              // TX [Vector__XXX].RX [Vector__XXX ].
  ESVMAX3_t ESVMAX3;              // TX [Vector__XXX].RX [Vector__XXX ].
  ESVMAX2_t ESVMAX2;              // TX [Vector__XXX].RX [Vector__XXX ].
  ESVMAX1_t ESVMAX1;              // TX [Vector__XXX].RX [Vector__XXX ].
  ESVMIN6_t ESVMIN6;              // TX [Vector__XXX].RX [Vector__XXX ].
  ESVMIN5_t ESVMIN5;              // TX [Vector__XXX].RX [Vector__XXX ].
  ESVMIN4_t ESVMIN4;              // TX [Vector__XXX].RX [Vector__XXX ].
  ESVMIN3_t ESVMIN3;              // TX [Vector__XXX].RX [Vector__XXX ].
  ESVMIN2_t ESVMIN2;              // TX [Vector__XXX].RX [Vector__XXX ].
  ESVMIN1_t ESVMIN1;              // TX [Vector__XXX].RX [Vector__XXX ].
  EICMH_t EICMH;                  // TX [Vector__XXX].RX [Vector__XXX ].
  EEC11_t EEC11;                  // TX [Vector__XXX].RX [Vector__XXX ].
  EMAC_t EMAC;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EEC10_t EEC10;                  // TX [Vector__XXX].RX [Vector__XXX ].
  EOM_t EOM;                      // TX [Vector__XXX].RX [Vector__XXX ].
  CSI_t CSI;                      // TX [Vector__XXX].RX [Vector__XXX ].
  ILI_t ILI;                      // TX [Vector__XXX].RX [Vector__XXX ].
  TML_t TML;                      // TX [Vector__XXX].RX [Vector__XXX ].
  AGCW_t AGCW;                    // TX [Vector__XXX].RX [Vector__XXX ].
  J2012_t J2012;                  // TX [Vector__XXX].RX [Vector__XXX ].
  VROM_t VROM;                    // TX [Vector__XXX].RX [Vector__XXX ].
  CMI_t CMI;                      // TX [Vector__XXX].RX [Vector__XXX ].
  FMS_t FMS;                      // TX [Vector__XXX].RX [Vector__XXX ].
  FWD_t FWD;                      // TX [Vector__XXX].RX [Vector__XXX ].
  TAVG_t TAVG;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AP_t AP;                        // TX [Vector__XXX].RX [Vector__XXX ].
  TP1_t TP1;                      // TX [Vector__XXX].RX [Vector__XXX ].
  TP2_t TP2;                      // TX [Vector__XXX].RX [Vector__XXX ].
  TP3_t TP3;                      // TX [Vector__XXX].RX [Vector__XXX ].
  CT1_t CT1;                      // TX [Vector__XXX].RX [Vector__XXX ].
  CT2_t CT2;                      // TX [Vector__XXX].RX [Vector__XXX ].
  CT3_t CT3;                      // TX [Vector__XXX].RX [Vector__XXX ].
  CT4_t CT4;                      // TX [Vector__XXX].RX [Vector__XXX ].
  CT5_t CT5;                      // TX [Vector__XXX].RX [Vector__XXX ].
  CT6_t CT6;                      // TX [Vector__XXX].RX [Vector__XXX ].
  GFI2_t GFI2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  IT1_t IT1;                      // TX [Vector__XXX].RX [Vector__XXX ].
  IT2_t IT2;                      // TX [Vector__XXX].RX [Vector__XXX ].
  IT3_t IT3;                      // TX [Vector__XXX].RX [Vector__XXX ].
  IT4_t IT4;                      // TX [Vector__XXX].RX [Vector__XXX ].
  IT5_t IT5;                      // TX [Vector__XXX].RX [Vector__XXX ].
  IT6_t IT6;                      // TX [Vector__XXX].RX [Vector__XXX ].
  ISO1_t ISO1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ISO2_t ISO2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ISO3_t ISO3;                    // TX [Vector__XXX].RX [Vector__XXX ].
  GFP_t GFP;                      // TX [Vector__XXX].RX [Vector__XXX ].
  AAI_t AAI;                      // TX [Vector__XXX].RX [Vector__XXX ].
  S2_t S2;                        // TX [Vector__XXX].RX [Vector__XXX ].
  FL_t FL;                        // TX [Vector__XXX].RX [Vector__XXX ].
  EI1_t EI1;                      // TX [Vector__XXX].RX [Vector__XXX ].
  EES_t EES;                      // TX [Vector__XXX].RX [Vector__XXX ].
  RBI_t RBI;                      // TX [Vector__XXX].RX [Vector__XXX ].
  TCI1_t TCI1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EPT5_t EPT5;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EPT3_t EPT3;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EPT2_t EPT2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EPT1_t EPT1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  IMT2_t IMT2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  AT_t AT;                        // TX [Vector__XXX].RX [Vector__XXX ].
  ACTL_t ACTL;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EO1_t EO1;                      // TX [Vector__XXX].RX [Vector__XXX ].
  AF2_t AF2;                      // TX [Vector__XXX].RX [Vector__XXX ].
  ETC6_t ETC6;                    // TX [Vector__XXX].RX [Vector__XXX ].
  EBC4_t EBC4;                    // TX [Vector__XXX].RX [Vector__XXX ].
  GFC_t GFC;                      // TX [Vector__XXX].RX [Vector__XXX ].
  EH_t EH;                        // TX [Vector__XXX].RX [Vector__XXX ].
  GFI1_t GFI1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  LFI1_t LFI1;                    // TX [Vector__XXX].RX [Vector__XXX ].
  TSI_t TSI;                      // TX [Vector__XXX].RX [Vector__XXX ].
  TVI_t TVI;                      // TX [Vector__XXX].RX [Vector__XXX ].
  EEC4_t EEC4;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ERC2_t ERC2;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ETC5_t ETC5;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ETC4_t ETC4;                    // TX [Vector__XXX].RX [Vector__XXX ].
  ETC3_t ETC3;                    // TX [Vector__XXX].RX [Vector__XXX ].
} j1939v8_5_rx_t;

// There is no any message detected with tx direction.

uint32_t j1939v8_5_Receive(j1939v8_5_rx_t* _m, const uint8_t* _d, uint32_t _id);


// define @__DEF_J1939V8_5__ in the @dbccodeconf.h file for allocation in utility source code.
#ifdef __DEF_J1939V8_5__

extern j1939v8_5_rx_t j1939v8_5_rx;

#endif


#ifdef __cplusplus
}
#endif

