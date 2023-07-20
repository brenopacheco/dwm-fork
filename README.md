# DWM 6.4 e81f17d fork

1. TODO: when bar is visible, but polybar is not present, an additional gap is
added. remove this gap

2. only launch polybar if it has not yet launched
3. launch sxhkd if it has not yet launched
4. remove all keypress handling code


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

## Polybar configuration

Communicates via IPC on socket /tmp/dwm.sock

- [ ] Custom module for:
  + [ ] Tags
  + [ ] Mode (tiled, floating, monocle)

## EWW configuration

https://www.reddit.com/r/unixporn/comments/yai8jv/dwm_eww_i_love_them/

## SXHKD configuration

Communicates via IPC on socket /tmp/dwm.sock

```
mod         + q            kill window
mod + shift + q            quit dwm
mod + shift + r            restart dwm

mod         + t            toggle tiling mode
mod         + f            toggle floating mode
mod         + m            toggle monocle mode
mod         + spc          toggle window float
mod         + 0            toggle window full screen

mod         + n            focus next window
mod         + p            focus previous window
mod         + tab          focus other monitor

mod         + i            increase master stack size
mod         + o            decrease master stack size
mod         + h            increase master width
mod         + l            decrease master width
mod         + b            toggle top bar

mod         + bsp          swap master
mod + shift + tab          move window to next monitor
mod         + {1-9}        switch to tag {1-9}
mod + shift + {1-9}        move window to tag {1-9}
mod + ctrl  + {1-9}        toggle tag {1-9}

mod         + ret          launch terminal
mod         + '            run launcher (wofi/rofi)
mod         + s            run password manager (passmenu)
mod         + w            open browser (maybe remove and customize rofi)
mod         + e            open   tmux session
mod         + a            attach tmux session

available keys:

- mod+{r,d}
- mod+shift+{w,e,t,a,s,d,f,i,o,p,h,j,k,l,n,m,b}
```

## Picom configuration

## Rofi configuration

