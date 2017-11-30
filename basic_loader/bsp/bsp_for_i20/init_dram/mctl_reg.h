#ifndef   _MCTL_REG_H   
#define   _MCTL_REG_H

#define MCTL_COM_BASE			0x01c62000
#define MCTL_CTL_BASE			0x01c63000
#define MC_PROTECT          	(MCTL_COM_BASE + 0x800)

/* Common Register */
#define MC_WORK_MODE			(MCTL_COM_BASE + 0x00)
#define MC_R1_WORK_MODE			(MCTL_COM_BASE + 0x00)
#define MC_DBGCR          	  	(MCTL_COM_BASE + 0x08)

#define MC_MASTER_CFG0(x)       (MCTL_COM_BASE + 0x10+0x8*x)
#define MC_MASTER_CFG1(x)       (MCTL_COM_BASE + 0x14+0x8*x)
#define MC_BWCR          	  	(MCTL_COM_BASE + 0x90)
#define MC_MAER                 (MCTL_COM_BASE + 0x94)
#define MC_MAPR                 (MCTL_COM_BASE + 0x98)
#define MC_MCGCR                (MCTL_COM_BASE + 0x9c)
#define MC_CPU_BWCR             (MCTL_COM_BASE + 0xa0)
#define MC_GPU_BWCR             (MCTL_COM_BASE + 0xa4)
#define MC_VE_BWCR              (MCTL_COM_BASE + 0xa8)
#define MC_DISP_BWCR            (MCTL_COM_BASE + 0xac)
#define MC_OTHER_BWCR           (MCTL_COM_BASE + 0xb0)
#define MC_TOTAL_BWCR           (MCTL_COM_BASE + 0xb4)

#define MC_SWONR				(MCTL_COM_BASE + 0xc0)
#define MC_SWOFFR				(MCTL_COM_BASE + 0xc4)

#define MC_CCCR					(MCTL_COM_BASE + 0xd0)

#define MC_MDFSCR				(MCTL_COM_BASE + 0x100)
#define MC_MDFSMER				(MCTL_COM_BASE + 0x104)
#define MC_MDFSMRMR				(MCTL_COM_BASE + 0x108)
#define MC_MDFSTR				(MCTL_COM_BASE + 0x10c)

//Controller register
#define PIR           		(MCTL_CTL_BASE + 0x00000000)
#define PWRCTL         		(MCTL_CTL_BASE + 0x00000004)
#define MRCTRL0        		(MCTL_CTL_BASE + 0x00000008)
#define MC_CLKEN			(MCTL_CTL_BASE + 0x0000000c)
#define PGSR0        		(MCTL_CTL_BASE + 0x00000010)
#define PGSR1        		(MCTL_CTL_BASE + 0x00000014)
#define STATR       		(MCTL_CTL_BASE + 0x00000018)

#define LP3MR11       		(MCTL_CTL_BASE + 0x0000002c)
#define DRAM_MR0      		(MCTL_CTL_BASE + 0x00000030)
#define DRAM_MR1       		(MCTL_CTL_BASE + 0x00000034)
#define DRAM_MR2       		(MCTL_CTL_BASE + 0x00000038)
#define DRAM_MR3       		(MCTL_CTL_BASE + 0x0000003c)

#define PTR0        		(MCTL_CTL_BASE + 0x00000044)
#define PTR1        		(MCTL_CTL_BASE + 0x00000048)
#define PTR2           		(MCTL_CTL_BASE + 0x0000004c)
#define PTR3           		(MCTL_CTL_BASE + 0x00000050)
#define PTR4           		(MCTL_CTL_BASE + 0x00000054)
#define DRAMTMG0       		(MCTL_CTL_BASE + 0x00000058)
#define DRAMTMG1       		(MCTL_CTL_BASE + 0x0000005c)
#define DRAMTMG2       		(MCTL_CTL_BASE + 0x00000060)
#define DRAMTMG3       		(MCTL_CTL_BASE + 0x00000064)
#define DRAMTMG4       		(MCTL_CTL_BASE + 0x00000068)
#define DRAMTMG5       		(MCTL_CTL_BASE + 0x0000006c)
#define DRAMTMG6       		(MCTL_CTL_BASE + 0x00000070)
#define DRAMTMG7       		(MCTL_CTL_BASE + 0x00000074)
#define DRAMTMG8       		(MCTL_CTL_BASE + 0x00000078)
#define ODTCFG        		(MCTL_CTL_BASE + 0x0000007c)
#define PITMG0        		(MCTL_CTL_BASE + 0x00000080)
#define PITMG1        		(MCTL_CTL_BASE + 0x00000084)
#define LPTMPR        		(MCTL_CTL_BASE + 0x00000088)
#define RFSHCTL0       		(MCTL_CTL_BASE + 0x0000008c)
#define RFSHTMG        		(MCTL_CTL_BASE + 0x00000090)
#define RFSHCTL1       		(MCTL_CTL_BASE + 0x00000094)
#define PWRTMG        		(MCTL_CTL_BASE + 0x00000098)

#define DQSGMR				(MCTL_CTL_BASE + 0x000000bc)
#define DTCR           		(MCTL_CTL_BASE + 0x000000c0)
#define DTAR0          		(MCTL_CTL_BASE + 0x000000c4)
#define DTAR1           	(MCTL_CTL_BASE + 0x000000c8)
#define DTAR2           	(MCTL_CTL_BASE + 0x000000cc)
#define DTAR3         		(MCTL_CTL_BASE + 0x000000d0)
#define DTDR0      			(MCTL_CTL_BASE + 0x000000d4)
#define DTDR1       		(MCTL_CTL_BASE + 0x000000d8)
#define DTMR0      			(MCTL_CTL_BASE + 0x000000dc)
#define DTMR1       		(MCTL_CTL_BASE + 0x000000e0)
#define DTBMR       		(MCTL_CTL_BASE + 0x000000e4)
#define CATR0       		(MCTL_CTL_BASE + 0x000000e8)
#define CATR1       		(MCTL_CTL_BASE + 0x000000ec)
#define DTEDR0       		(MCTL_CTL_BASE + 0x000000f0)
#define DTEDR1       		(MCTL_CTL_BASE + 0x000000f4)

#define PGCR0       		(MCTL_CTL_BASE + 0x00000100)
#define PGCR1       		(MCTL_CTL_BASE + 0x00000104)
#define PGCR2         		(MCTL_CTL_BASE + 0x00000108)
#define PGCR3         		(MCTL_CTL_BASE + 0x0000010c)
#define IOVCR0         		(MCTL_CTL_BASE + 0x00000110)
#define IOVCR1         		(MCTL_CTL_BASE + 0x00000114)
#define DQSDR         		(MCTL_CTL_BASE + 0x00000118)
#define DXCCR         		(MCTL_CTL_BASE + 0x0000011c)
#define ODTMAP         		(MCTL_CTL_BASE + 0x00000120)
#define ZQCTL0         		(MCTL_CTL_BASE + 0x00000124)
#define ZQCTL1         		(MCTL_CTL_BASE + 0x00000128)
#define ZQCR         		(MCTL_CTL_BASE + 0x00000140)
#define ZQnSR       		(MCTL_CTL_BASE + 0x00000144)
#define ZQnDR(x)       		(MCTL_CTL_BASE + 0x00000148 +0x4 * x)	/* x from 0 to 2 */

#define SCHED         		(MCTL_CTL_BASE + 0x000001c0)
#define PERFHPR0      		(MCTL_CTL_BASE + 0x000001c4)
#define PERFHPR1       		(MCTL_CTL_BASE + 0x000001c8)
#define PERFLPR0       		(MCTL_CTL_BASE + 0x000001cc)
#define PERFLPR1       		(MCTL_CTL_BASE + 0x000001d0)
#define PERFWR0       		(MCTL_CTL_BASE + 0x000001d4)
#define PERFWR1       		(MCTL_CTL_BASE + 0x000001d8)
#define ACMDLR       		(MCTL_CTL_BASE + 0x00000200)
#define ACLCDLR       		(MCTL_CTL_BASE + 0x00000204)
#define CAIOCR0       		(MCTL_CTL_BASE + 0x00000208)
#define CAIOCR(x)      		(MCTL_CTL_BASE + 0x00000210 + 0x4 * (x))	/* x from 0 to 30 */
#define DXMDLR0             (MCTL_CTL_BASE + 0x00000300)
#define DXnMDLR(x)			(MCTL_CTL_BASE + 0x00000300 + 0x80 * x)		/* x from 0 to 1 */
#define DXnLCDLR0(x)		(MCTL_CTL_BASE + 0x00000304 + 0x80 * x)
#define DXnLCDLR1(x)		(MCTL_CTL_BASE + 0x00000308 + 0x80 * x)
#define DXnLCDLR2(x)		(MCTL_CTL_BASE + 0x0000030c + 0x80 * x)
#define DATX0IOCR(x)		(MCTL_CTL_BASE + 0x00000310 + 0x4 * x)
#define DATX1IOCR(x)		(MCTL_CTL_BASE + 0x00000390 + 0x4 * x)
#define DATX2IOCR(x)		(MCTL_CTL_BASE + 0x00000410 + 0x4 * x)
#define DATX3IOCR(x)		(MCTL_CTL_BASE + 0x00000490 + 0x4 * x)

#define DXnBDLR6(x)			(MCTL_CTL_BASE + 0x0000033c + 0x80 * x)
#define DXnGTR(x)			(MCTL_CTL_BASE + 0x00000340 + 0x80 * x)
#define DXnGCR0(x)			(MCTL_CTL_BASE + 0x00000344 + 0x80 * x)
#define DXnGSR0(x)			(MCTL_CTL_BASE + 0x00000348 + 0x80 * x)
#define DXnGSR1(x)			(MCTL_CTL_BASE + 0x0000034c + 0x80 * x)
#define DXnGSR2(x)			(MCTL_CTL_BASE + 0x00000350 + 0x80 * x)

#define BISTRR              (MCTL_CTL_BASE + 0x00000800)
#define BISTWCR             (MCTL_CTL_BASE + 0x00000804)
#define BISTLSR				(MCTL_CTL_BASE + 0x00000814)
#define BISTGSR             (MCTL_CTL_BASE + 0x00000828)
#define BISTWER				(MCTL_CTL_BASE + 0x0000082c)
#define BISTBER0			(MCTL_CTL_BASE + 0x00000830)
#define BISTBER1			(MCTL_CTL_BASE + 0x00000834)
#define BISTBER2			(MCTL_CTL_BASE + 0x00000838)
#define BISTBER3			(MCTL_CTL_BASE + 0x0000083c)
#define BISTWCSR			(MCTL_CTL_BASE + 0x00000840)
#define BISTFWR0 			(MCTL_CTL_BASE + 0x00000844)
#define BISTFWR1 			(MCTL_CTL_BASE + 0x00000848)
#define BISTFWR2			(MCTL_CTL_BASE + 0x0000084c)
#define MX_UPD0  			(MCTL_CTL_BASE + 0x00000880)
#define MX_UPD2  			(MCTL_CTL_BASE + 0x00000888)


#define _CCM_BASE				 		0x01c20000
#define _CCM_PLL_DDR_REG				(_CCM_BASE+0x20)
#define _CCM_DRAMCLK_CFG_REG			(_CCM_BASE+0xf4)
#define MBUS_RESET_REG          		(_CCM_BASE+0xfc)
#define MBUS_CLK_CTL_REG        		(_CCM_BASE+0x15c)
#define BUS_CLK_GATE_REG0				(_CCM_BASE+0x060)
#define PLL_DDR_PATTERN_CTL_REG        (_CCM_BASE+0x290)
#define BUS_RST_REG0					(_CCM_BASE+0x2c0)

#define _RCM_BASE				0x01F01400
#define VDD_SYS_PWROFF_GATING   (_RCM_BASE+0x110)

#define mctl_write_w(v, addr)	(*((volatile unsigned long  *)(addr)) = (unsigned long)(v))
#define mctl_read_w(addr)		(*((volatile unsigned long  *)(addr)))

#endif  //_MCTL_REG_H
