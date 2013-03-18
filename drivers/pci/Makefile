# Makefile for PCI support
PROG=	pci
SRCS=	main.c pci.c pci_table.c

DPADD+=	${LIBSYS} ${LIBTIMERS}
LDADD+=	-lsys -ltimers

MAN=

BINDIR?= /usr/sbin

INCSDIR= /usr/include/dev/pci

.include <minix.service.mk>
