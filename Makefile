# dwm - dynamic window manager
# See LICENSE file for copyright and license details.

include config.mk

SRC = drw.c dwm.c util.c
OBJ = ${SRC:.c=.o}

all: dwm

.c.o:
	${CC} -c ${CFLAGS} $<

${OBJ}: config.h config.mk

dwm: ${OBJ}
	${CC} -o $@ ${OBJ} ${LDFLAGS}

clean:
	rm -rf dwm ${OBJ} dwm-${VERSION}.tar.gz ${BUILD}

version:
	@echo ${VERSION}

dist: all
	tar --create --file=dwm-${VERSION}.tar --transform 's,^,bin/,' --mode='755' dwm
	tar --append --file=dwm-${VERSION}.tar --transform 's,^,share/man/man1/,' --mode='644' dwm.1
	tar --append --file=dwm-${VERSION}.tar --transform 's,^,share/licenses/dwm/,' --mode='644' LICENSE
	tar --append --file=dwm-${VERSION}.tar --transform 's,^,share/xsessions/,' --mode='644' dwm.desktop
	gzip dwm-${VERSION}.tar

test: all
	@echo "Ctrl+Shift to lock/unlock"
	@Xephyr -br -ac -noreset -screen 1024x768 :1 >/dev/null 2>&1 &
	@while ! xdpyinfo -display :1 >/dev/null 2>&1; do sleep 0.1; done
	@DISPLAY=:1 dwm
	@pkill Xephyr

.PHONY: all clean dist install uninstall test
