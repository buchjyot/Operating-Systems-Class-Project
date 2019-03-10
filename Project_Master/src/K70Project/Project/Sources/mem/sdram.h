/**
 * sdram.h
 * SDRAM initialization routines
 * 
 * ARM-based K70F120M microcontroller board
 *   for educational purposes only
 * CSCI E-92 Spring 2017, Professor James L. Frankel, Harvard Extension School
 *
 * Written by James L. Frankel (frankel@seas.harvard.edu)
 *
 * Copyright � 2017, 2015, 2014, 2012 James L. Frankel.  All rights reserved.
 */

#ifndef _SDRAM_H
#define _SDRAM_H

#define SIM_MCR_DDRCFG_LPDDR_HALF_STRENGTH 0
#define SIM_MCR_DDRCFG_LPDDR_FULL_STRENGTH 1
#define SIM_MCR_DDRCFG_DDR2_HALF_STRENGTH 2
#define SIM_MCR_DDRCFG_DDR1 3
#define SIM_MCR_DDRCFG_DDR2_FULL_STRENGTH 6

#define MCM_CR_DDRSIZE_ADDRESS_TRANSLATION_DISABLED 0
#define MCM_CR_DDRSIZE_128_MBYTES 1
#define MCM_CR_DDRSIZE_256_MBYTES 2
#define MCM_CR_DDRSIZE_512_MBYTES 3

#define DDR_PAD_CTRL_PAD_ODT_CS0_ODT_DISABLED 0
#define DDR_PAD_CTRL_PAD_ODT_CS0_75_OHMS 1
#define DDR_PAD_CTRL_PAD_ODT_CS0_150_OHMS 2
#define DDR_PAD_CTRL_PAD_ODT_CS0_50_OHMS 3

#define DDR_PAD_CTRL_SPARE_DLY_CTRL_NO_BUFFER 0
#define DDR_PAD_CTRL_SPARE_DLY_CTRL_4_BUFFERS 1
#define DDR_PAD_CTRL_SPARE_DLY_CTRL_7_BUFFERS 2
#define DDR_PAD_CTRL_SPARE_DLY_CTRL_10_BUFFERS 3

#define DDR_CR00_DDRCLS_DDR 0
#define DDR_CR00_DDRCLS_LPDDR 1
#define DDR_CR00_DDRCLS_DDR2 4

#define DDR_CR09_BSTLEN_2_WORDS 1
#define DDR_CR09_BSTLEN_4_WORDS 2
#define DDR_CR09_BSTLEN_8_WORDS 3

#define DDR_CR30_INTSTAT_SINGLE_OUTSIDE_SHIFT 8
#define DDR_CR30_INTSTAT_SINGLE_OUTSIDE_MASK (1<<DDR_CR30_INTSTAT_SINGLE_OUTSIDE_SHIFT) 
#define DDR_CR30_INTSTAT_MULTIPLE_OUTSIDE_SHIFT 9
#define DDR_CR30_INTSTAT_MULTIPLE_OUTSIDE_MASK (1<<DDR_CR30_INTSTAT_MULTIPLE_OUTSIDE_SHIFT) 
#define DDR_CR30_INTSTAT_DRAM_INIT_COMPLETE_SHIFT 10
#define DDR_CR30_INTSTAT_DRAM_INIT_COMPLETE_MASK (1<<DDR_CR30_INTSTAT_DRAM_INIT_COMPLETE_SHIFT) 
#define DDR_CR30_INTSTAT_DDR2_AND_MOBILE_EN_SHIFT 11
#define DDR_CR30_INTSTAT_DDR2_AND_MOBILE_EN_MASK (1<<DDR_CR30_INTSTAT_DDR2_AND_MOBILE_EN_SHIFT) 
#define DDR_CR30_INTSTAT_CAS_3_ERROR_SHIFT 12
#define DDR_CR30_INTSTAT_CAS_3_ERROR_MASK (1<<DDR_CR30_INTSTAT_CAS_3_ERROR_SHIFT) 
#define DDR_CR30_INTSTAT_WRITE_FINISH_SHIFT 13
#define DDR_CR30_INTSTAT_WRITE_FINISH_MASK (1<<DDR_CR30_INTSTAT_WRITE_FINISH_SHIFT) 
#define DDR_CR30_INTSTAT_DFI_INT_COMPLETE_CHANGE_SHIFT 14
#define DDR_CR30_INTSTAT_DFI_INT_COMPLETE_CHANGE_MASK (1<<DDR_CR30_INTSTAT_DFI_INT_COMPLETE_CHANGE_SHIFT) 
#define DDR_CR30_INTSTAT_DLL_RESYNC_FINISH_SHIFT 15
#define DDR_CR30_INTSTAT_DLL_RESYNC_FINISH_MASK (1<<DDR_CR30_INTSTAT_DLL_RESYNC_FINISH_SHIFT) 
#define DDR_CR30_INTSTAT_ANY_SHIFT 16
#define DDR_CR30_INTSTAT_ANY_MASK (1<<DDR_CR30_INTSTAT_ANY_SHIFT) 

/* Size (in bytes) of off-chip SDRAM */
#define SDRAM_SIZE (128*1024*1024)

/* First byte location in off-chip SDRAM */
#define SDRAM_START 0x80000000

/* Last byte location in off-chip SDRAM */
#define SDRAM_END (SDRAM_START+SDRAM_SIZE-1)

/* Function prototypes */
void sdramInit(void);

#endif /* ifndef _SDRAM_H */
