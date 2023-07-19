# dwm - dynamic window manager
# See LICENSE file for copyright and license details.

VERSION = 6.4

PREFIX = /usr/local
MANPREFIX = ${PREFIX}/share/man

CFLAGS = -std=c99 -pedantic -Wall -Wno-deprecated-declarations -Os \
         -D_DEFAULT_SOURCE \
		 $(shell pkg-config --cflags freetype2) \
		 $(shell pkg-config --cflags x11) \
		 $(shell pkg-config --cflags yajl)
LDFLAGS  = $(shell pkg-config --libs x11) \
		   $(shell pkg-config --libs xinerama) \
		   $(shell pkg-config --libs fontconfig) \
		   $(shell pkg-config --libs xft) \
		   $(shell pkg-config --libs yajl)

CC = cc

SRC = drw.c dwm.c util.c
OBJ = ${SRC:.c=.o}

all: options dwm dwm-msg

options:
	@echo dwm build options:
	@echo "CFLAGS   = ${CFLAGS}"
	@echo "LDFLAGS  = ${LDFLAGS}"
	@echo "CC       = ${CC}"

.c.o:
	${CC} -c ${CFLAGS} $<

dwm: ${OBJ}
	${CC} -o $@ ${OBJ} ${LDFLAGS}

dwm-msg: dwm-msg.o
	${CC} -o $@ $< ${LDFLAGS}

clean:
	rm -f dwm dwm-msg ${OBJ} dwm-${VERSION}.tar.gz

dist: clean
	mkdir -p dwm-${VERSION}
	cp -R LICENSE Makefile README \
		dwm.1 drw.h util.h ${SRC} dwm.png transient.c dwm-${VERSION}
	tar -cf dwm-${VERSION}.tar dwm-${VERSION}
	gzip dwm-${VERSION}.tar
	rm -rf dwm-${VERSION}

install: all
	mkdir -p ${DESTDIR}${PREFIX}/bin
	cp -f dwm dwm-msg ${DESTDIR}${PREFIX}/bin
	chmod 755 ${DESTDIR}${PREFIX}/bin/dwm
	chmod 755 ${DESTDIR}${PREFIX}/bin/dwm-msg
	mkdir -p ${DESTDIR}${MANPREFIX}/man1
	sed "s/VERSION/${VERSION}/g" < dwm.1 > ${DESTDIR}${MANPREFIX}/man1/dwm.1
	chmod 644 ${DESTDIR}${MANPREFIX}/man1/dwm.1

uninstall:
	rm -f ${DESTDIR}${PREFIX}/bin/dwm\
		${DESTDIR}${MANPREFIX}/man1/dwm.1

commands:
	bear -- make clean all

.PHONY: all options clean dist install uninstall commands
