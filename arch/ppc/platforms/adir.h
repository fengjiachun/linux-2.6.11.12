/*
 * arch/ppc/platforms/adir.h
 *
 * Definitions for SBS Adirondack board support
 *
 * By Michael Sokolov <msokolov@ivan.Harhan.ORG>
 */

#ifndef __PPC_PLATFORMS_ADIR_H
#define __PPC_PLATFORMS_ADIR_H

/*
 * SBS Adirondack definitions
 */

/* PPC physical address space layout. We use the one set up by the firmware. */
#define	ADIR_PCI32_MEM_BASE	0x80000000
#define	ADIR_PCI32_MEM_SIZE	0x20000000
#define	ADIR_PCI64_MEM_BASE	0xA0000000
#define	ADIR_PCI64_MEM_SIZE	0x20000000
#define	ADIR_PCI32_IO_BASE	0xC0000000
#define	ADIR_PCI32_IO_SIZE	0x10000000
#define	ADIR_PCI64_IO_BASE	0xD0000000
#define	ADIR_PCI64_IO_SIZE	0x10000000
#define	ADIR_PCI64_PHB		0xFF400000
#define	ADIR_PCI32_PHB		0xFF500000

#define ADIR_PCI64_CONFIG_ADDR	(ADIR_PCI64_PHB + 0x000f8000)
#define ADIR_PCI64_CONFIG_DATA	(ADIR_PCI64_PHB + 0x000f8010)

#define ADIR_PCI32_CONFIG_ADDR	(ADIR_PCI32_PHB + 0x000f8000)
#define ADIR_PCI32_CONFIG_DATA	(ADIR_PCI32_PHB + 0x000f8010)

/* System memory as seen from PCI */
#define ADIR_PCI_SYS_MEM_BASE	0x80000000

/* Static virtual mapping of PCI I/O */
#define	ADIR_PCI32_VIRT_IO_BASE	0xFE000000
#define	ADIR_PCI32_VIRT_IO_SIZE	0x01000000
#define	ADIR_PCI64_VIRT_IO_BASE	0xFF000000
#define	ADIR_PCI64_VIRT_IO_SIZE	0x01000000

/* Registers */
#define	ADIR_NVRAM_RTC_ADDR	0x74
#define	ADIR_NVRAM_RTC_DATA	0x75

#define	ADIR_BOARD_ID_REG	(ADIR_PCI32_VIRT_IO_BASE + 0x08FFF0)
#define	ADIR_CPLD1REV_REG	(ADIR_PCI32_VIRT_IO_BASE + 0x08FFF1)
#define	ADIR_CPLD2REV_REG	(ADIR_PCI32_VIRT_IO_BASE + 0x08FFF2)
#define	ADIR_FLASHCTL_REG	(ADIR_PCI32_VIRT_IO_BASE + 0x08FFF3)
#define	ADIR_CPC710_STAT_REG	(ADIR_PCI32_VIRT_IO_BASE + 0x08FFF4)
#define	ADIR_CLOCK_REG		(ADIR_PCI32_VIRT_IO_BASE + 0x08FFF5)
#define	ADIR_GPIO_REG		(ADIR_PCI32_VIRT_IO_BASE + 0x08FFF8)
#define	ADIR_MISC_REG		(ADIR_PCI32_VIRT_IO_BASE + 0x08FFF9)
#define	ADIR_LED_REG		(ADIR_PCI32_VIRT_IO_BASE + 0x08FFFA)

#define	ADIR_CLOCK_REG_PD	0x10
#define	ADIR_CLOCK_REG_SPREAD	0x08
#define	ADIR_CLOCK_REG_SEL133	0x04
#define	ADIR_CLOCK_REG_SEL1	0x02
#define	ADIR_CLOCK_REG_SEL0	0x01

#define	ADIR_PROCA_INT_MASK	(ADIR_PCI32_VIRT_IO_BASE + 0x0EFFF0)
#define	ADIR_PROCB_INT_MASK	(ADIR_PCI32_VIRT_IO_BASE + 0x0EFFF2)
#define	ADIR_PROCA_INT_STAT	(ADIR_PCI32_VIRT_IO_BASE + 0x0EFFF4)
#define	ADIR_PROCB_INT_STAT	(ADIR_PCI32_VIRT_IO_BASE + 0x0EFFF6)

/* Linux IRQ numbers */
#define	ADIR_IRQ_NONE		-1
#define	ADIR_IRQ_SERIAL2	3
#define	ADIR_IRQ_SERIAL1	4
#define	ADIR_IRQ_FDC		6
#define	ADIR_IRQ_PARALLEL	7
#define	ADIR_IRQ_VIA_AUDIO	10
#define	ADIR_IRQ_VIA_USB	11
#define	ADIR_IRQ_IDE0		14
#define	ADIR_IRQ_IDE1		15
#define	ADIR_IRQ_PCI0_INTA	16
#define	ADIR_IRQ_PCI0_INTB	17
#define	ADIR_IRQ_PCI0_INTC	18
#define	ADIR_IRQ_PCI0_INTD	19
#define	ADIR_IRQ_PCI1_INTA	20
#define	ADIR_IRQ_PCI1_INTB	21
#define	ADIR_IRQ_PCI1_INTC	22
#define	ADIR_IRQ_PCI1_INTD	23
#define	ADIR_IRQ_MBSCSI		24	/* motherboard SCSI */
#define	ADIR_IRQ_MBETH1		25	/* motherboard Ethernet 1 */
#define	ADIR_IRQ_MBETH0		26	/* motherboard Ethernet 0 */
#define	ADIR_IRQ_CPC710_INT1	27
#define	ADIR_IRQ_CPC710_INT2	28
#define	ADIR_IRQ_VT82C686_NMI	29
#define	ADIR_IRQ_VT82C686_INTR	30
#define	ADIR_IRQ_INTERPROC	31

#endif /* __PPC_PLATFORMS_ADIR_H */