all:
	rm -rf ./src ./pkg dwm-fork-*
	cd .. && tar --exclude=build -czpf  build/bundle.tar.gz .
	makepkg
	rm bundle.tar.gz

install: all
	makepkg -i --noconfirm
