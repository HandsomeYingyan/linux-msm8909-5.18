/* SPDX-License-Identifier: (GPL-2.0-only OR BSD-2-Clause) */
/*
 * Copyright (c) 2022, The Linux Foundation. All rights reserved.
 */

#ifndef _DT_BINDINGS_CLK_QCOM_GCC_8909_H
#define _DT_BINDINGS_CLK_QCOM_GCC_8909_H

/* PLLs */
#define GPLL0_EARLY			0
#define GPLL0				1
#define GPLL1				2
#define GPLL1_VOTE			3
#define GPLL2_EARLY			4
#define GPLL2				5

/* RCGs */
#define APSS_AHB_CLK_SRC		6
#define BLSP1_QUP1_I2C_APPS_CLK_SRC	7
#define BLSP1_QUP1_SPI_APPS_CLK_SRC	8
#define BLSP1_QUP2_I2C_APPS_CLK_SRC	9
#define BLSP1_QUP2_SPI_APPS_CLK_SRC	10
#define BLSP1_QUP3_I2C_APPS_CLK_SRC	11
#define BLSP1_QUP3_SPI_APPS_CLK_SRC	12
#define BLSP1_QUP4_I2C_APPS_CLK_SRC	13
#define BLSP1_QUP4_SPI_APPS_CLK_SRC	14
#define BLSP1_QUP5_I2C_APPS_CLK_SRC	15
#define BLSP1_QUP5_SPI_APPS_CLK_SRC	16
#define BLSP1_QUP6_I2C_APPS_CLK_SRC	17
#define BLSP1_QUP6_SPI_APPS_CLK_SRC	18
#define BLSP1_UART1_APPS_CLK_SRC	19
#define BLSP1_UART2_APPS_CLK_SRC	20
#define BYTE0_CLK_SRC			21
#define CAMSS_GP0_CLK_SRC		22
#define CAMSS_GP1_CLK_SRC		23
#define CAMSS_TOP_AHB_CLK_SRC		24
#define CRYPTO_CLK_SRC			25
#define CSI0_CLK_SRC			26
#define CSI0PHYTIMER_CLK_SRC		27
#define CSI1_CLK_SRC			28
#define ESC0_CLK_SRC			29
#define GFX3D_CLK_SRC			30
#define GP1_CLK_SRC			31
#define GP2_CLK_SRC			32
#define GP3_CLK_SRC			33
#define MCLK0_CLK_SRC			34
#define MCLK1_CLK_SRC			35
#define MDP_CLK_SRC			36
#define PCLK0_CLK_SRC			37
#define PDM2_CLK_SRC			38
#define SDCC1_APPS_CLK_SRC		39
#define SDCC2_APPS_CLK_SRC		40
#define USB_HS_SYSTEM_CLK_SRC		41
#define VCODEC0_CLK_SRC			42
#define VFE0_CLK_SRC			43
#define VSYNC_CLK_SRC			44

/* Voteable Clocks */
#define GCC_APSS_TCU_CLK		45
#define GCC_BLSP1_AHB_CLK		46
#define GCC_BOOT_ROM_AHB_CLK		47
#define GCC_CRYPTO_AHB_CLK		48
#define GCC_CRYPTO_AXI_CLK		49
#define GCC_CRYPTO_CLK			50
#define GCC_GFX_TBU_CLK			51
#define GCC_GFX_TCU_CLK			52
#define GCC_GTCU_AHB_CLK		53
#define GCC_MDP_TBU_CLK			54
#define GCC_PRNG_AHB_CLK		55
#define GCC_SMMU_CFG_CLK		56
#define GCC_VENUS_TBU_CLK		57
#define GCC_VFE_TBU_CLK			58

/* Branches */
#define GCC_BIMC_GFX_CLK		59
#define GCC_BIMC_GPU_CLK		60
#define GCC_BLSP1_QUP1_I2C_APPS_CLK	61
#define GCC_BLSP1_QUP1_SPI_APPS_CLK	62
#define GCC_BLSP1_QUP2_I2C_APPS_CLK	63
#define GCC_BLSP1_QUP2_SPI_APPS_CLK	64
#define GCC_BLSP1_QUP3_I2C_APPS_CLK	65
#define GCC_BLSP1_QUP3_SPI_APPS_CLK	66
#define GCC_BLSP1_QUP4_I2C_APPS_CLK	67
#define GCC_BLSP1_QUP4_SPI_APPS_CLK	68
#define GCC_BLSP1_QUP5_I2C_APPS_CLK	69
#define GCC_BLSP1_QUP5_SPI_APPS_CLK	70
#define GCC_BLSP1_QUP6_I2C_APPS_CLK	71
#define GCC_BLSP1_QUP6_SPI_APPS_CLK	72
#define GCC_BLSP1_UART1_APPS_CLK	73
#define GCC_BLSP1_UART2_APPS_CLK	74
#define GCC_CAMSS_AHB_CLK		75
#define GCC_CAMSS_CSI0_AHB_CLK		76
#define GCC_CAMSS_CSI0_CLK		77
#define GCC_CAMSS_CSI0PHY_CLK		78
#define GCC_CAMSS_CSI0PHYTIMER_CLK	79
#define GCC_CAMSS_CSI0PIX_CLK		80
#define GCC_CAMSS_CSI0RDI_CLK		81
#define GCC_CAMSS_CSI1_AHB_CLK		82
#define GCC_CAMSS_CSI1_CLK		83
#define GCC_CAMSS_CSI1PHY_CLK		84
#define GCC_CAMSS_CSI1PIX_CLK		85
#define GCC_CAMSS_CSI1RDI_CLK		86
#define GCC_CAMSS_CSI_VFE0_CLK		87
#define GCC_CAMSS_GP0_CLK		88
#define GCC_CAMSS_GP1_CLK		89
#define GCC_CAMSS_ISPIF_AHB_CLK		90
#define GCC_CAMSS_MCLK0_CLK		91
#define GCC_CAMSS_MCLK1_CLK		92
#define GCC_CAMSS_TOP_AHB_CLK		93
#define GCC_CAMSS_VFE0_CLK		94
#define GCC_CAMSS_VFE_AHB_CLK		95
#define GCC_CAMSS_VFE_AXI_CLK		96
#define GCC_GP1_CLK			97
#define GCC_GP2_CLK			98
#define GCC_GP3_CLK			99
#define GCC_MDSS_AHB_CLK		100
#define GCC_MDSS_AXI_CLK		101
#define GCC_MDSS_BYTE0_CLK		102
#define GCC_MDSS_ESC0_CLK		103
#define GCC_MDSS_MDP_CLK		104
#define GCC_MDSS_PCLK0_CLK		105
#define GCC_MDSS_VSYNC_CLK		106
#define GCC_MSS_CFG_AHB_CLK		107
#define GCC_MSS_Q6_BIMC_AXI_CLK		108
#define GCC_OXILI_AHB_CLK		109
#define GCC_OXILI_GFX3D_CLK		110
#define GCC_PDM2_CLK			111
#define GCC_PDM_AHB_CLK			112
#define GCC_SDCC1_AHB_CLK		113
#define GCC_SDCC1_APPS_CLK		114
#define GCC_SDCC2_AHB_CLK		115
#define GCC_SDCC2_APPS_CLK		116
#define GCC_USB2A_PHY_SLEEP_CLK		117
#define GCC_USB_HS_AHB_CLK		118
#define GCC_USB_HS_PHY_CFG_AHB_CLK	119
#define GCC_USB_HS_SYSTEM_CLK		120
#define GCC_VENUS0_AHB_CLK		121
#define GCC_VENUS0_AXI_CLK		122
#define GCC_VENUS0_CORE0_VCODEC0_CLK	123
#define GCC_VENUS0_VCODEC0_CLK		124

/* Indexes for GDSCs */
#define MDSS_GDSC			1
#define OXILI_GDSC			2
#define VENUS_GDSC			3
#define VENUS_CORE0_GDSC		4
#define VFE_GDSC			5

#endif
