/*	sys/ioc_pci.h - pci ioctl() command codes.
 *							Author: Jorn van Engelen
 *								15 March 2011
 *
 */

#ifndef _S_I_PCI_H
#define _S_I_PCI_H

#include <minix/ioctl.h>
#include <sys/types.h>

struct pioc_cfgreg {
  u32_t reg;
  u32_t val;
};

struct pioc_bdf_cfgreg {
  u8_t bus;
  u8_t device;
  u8_t function;
  struct pioc_cfgreg cfgreg;
};

#define PIOCBDFCFGREAD	_IORW('P', 1, struct pioc_bdf_cfgreg)
#define PIOCBDFCFGWRITE	_IORW('P', 2, struct pioc_bdf_cfgreg)

#endif /* _S_I_PCI_H */
