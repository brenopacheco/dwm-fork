# DWM 6.4 e81f17d fork

TODO:
- remove the bar altogether, including font, draw funs, spawn fn, etc.
- remove keymap logic after SXHKD is configured (keep quit so we don't get stuck)


format: see https://gitlab.com/SamDenton/dwm/-/blob/master/config.def.h

## Patches
- [x] [selfrestart](https://dwm.suckless.org/patches/selfrestart/dwm-r1615-selfrestart.diff)
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

mod         + bsp          swap master
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

