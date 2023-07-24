# DWM 6.4 e81f17d fork

1. TODO: when bar is visible, but polybar is not present, an additional gap is added. remove this gap
3. add sticky and systray
4. add polybar subscribe
6. add rofi conf
7. test eww conf

## Patches
- [-] [selfrestart](https://dwm.suckless.org/patches/selfrestart/dwm-r1615-selfrestart.diff)
- [x] [restartsig](https://dwm.suckless.org/patches/restartsig/dwm-restartsig-20180523-6.2.diff)
- [x] [ewmhtags](https://dwm.suckless.org/patches/ewmhtags/dwm-ewmhtags-6.2.diff)
- [x] [pertag](https://dwm.suckless.org/patches/pertag/dwm-pertag-20200914-61bb8b2.diff)
- [x] [barpadding](https://dwm.suckless.org/patches/barpadding/dwm-barpadding-20211020-a786211.diff)
- [x] [fullgaps](https://dwm.suckless.org/patches/fullgaps/dwm-fullgaps-6.4.diff)
- [x] [actualfullscreen](https://dwm.suckless.org/patches/actualfullscreen/dwm-actualfullscreen-20211013-cb3f58a.diff)
- [x] [alwayscenter](https://dwm.suckless.org/patches/alwayscenter/dwm-alwayscenter-20200625-f04cac6.diff)
- [x] [anyabar](https://dwm.suckless.org/patches/anybar/dwm-anybar-20200810-bb2e722.diff)
- [x] [ipc](https://dwm.suckless.org/patches/ipc/dwm-ipc-20201106-f04cac6.diff)
- [x] [rose-pine](https://raw.githubusercontent.com/motolla/dwm-rose/main/colors/rose-pine.h)
- [x] [clientmonoclesymbol](https://dwm.suckless.org/patches/clientmonoclesymbol/)
- [x] [sticky](https://dwm.suckless.org/patches/sticky/dwm-sticky-6.4.diff)
- [x] [focusonactive](https://dwm.suckless.org/patches/focusonnetactive/dwm-focusonnetactive-6.2.diff)
- [ ] [systray](https://dwm.suckless.org/patches/systray/dwm-systray-6.4.diff)

## Polybar configuration

Communicates via IPC on socket /tmp/dwm.sock

- [ ] Custom module for:
  + [ ] Tags
  + [ ] Mode (tiled, floating, monocle)

## EWW configuration

https://www.reddit.com/r/unixporn/comments/yai8jv/dwm_eww_i_love_them/
