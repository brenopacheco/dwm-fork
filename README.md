# DWM 6.4 e81f17d fork

format: see https://gitlab.com/SamDenton/dwm/-/blob/master/config.def.h

## Patches
- [x] [selfrestart](https://dwm.suckless.org/patches/selfrestart/dwm-r1615-selfrestart.diff)
- [x] [ewmhtags](https://dwm.suckless.org/patches/ewmhtags/dwm-ewmhtags-6.2.diff)
- [x] [pertag](https://dwm.suckless.org/patches/pertag/dwm-pertag-20200914-61bb8b2.diff)
- [ ] [barpadding](https://dwm.suckless.org/patches/barpadding/dwm-barpadding-20211020-a786211.diff)
- [ ] [fullgaps](https://dwm.suckless.org/patches/fullgaps/dwm-fullgaps-6.4.diff)
- [ ] [actualfullscreen](https://dwm.suckless.org/patches/actualfullscreen/dwm-actualfullscreen-20211013-cb3f58a.diff)
- [ ] [alwayscenter](https://dwm.suckless.org/patches/alwayscenter/dwm-alwayscenter-20200625-f04cac6.diff)
- [ ] [anyabar](https://dwm.suckless.org/patches/anybar/dwm-anybar-20200810-bb2e722.diff)
- [ ] [ipc](https://dwm.suckless.org/patches/ipc/dwm-ipc-20201106-f04cac6.diff)

# Colors

rose-pine: https://github.com/motolla/dwm-rose/blob/main/colors/rose-pine.h

## Polybar configuration

Communicates via IPC on socket /tmp/dwm.sock

- [ ] Custom module for:
  + [ ] Tags
  + [ ] Mode (tiled, floating, monocle)

## EWW configuration

https://www.reddit.com/r/unixporn/comments/yai8jv/dwm_eww_i_love_them/

## SXHKD configuration

Communicates via IPC on socket /tmp/dwm.sock

- [ ] modes:
```
mod + u:            toggle floating mode
mod + t:            toggle tiling mode (*new)
mod + m:            toggle monocle mode
mod + f:            toggle window floating 
```

- [ ] navigation:
```
mod + {1-9}:        switch to tag/tab {1-9}
mod + tab:          focus other monitor
mod + n/p:          focus next/prev window in tag/tab
```

- [ ] moving windows / layout:
```
mod + shift + {1-9}:  move window to tag/tab
mod + shift + tab:    move window to other monitor
mod + right button:   move window (make it float)
mod + left button:    resize window
mod + backspace:      swap master
mod + q:              kill/close window
mod + b:              toggle bars
```

- [ ] applications:
```
mod + enter:          terminal
mod + shift + q:      quit window manager (close session)
mod + ':              run launcher (wofi/rofi)
mod + s:              run password manager (passmenu)
mod + w:              open browser (maybe remove and customize rofi)
```

+ misc (not necessary)
```
mod + shift + n/p:    move window up/down the stack
mod + h/l:            increase/decrease master width
mod + j/k:            increase/decrease window height
mod + i:              increase master stack size
mod + o:              decrease master stack size
```

## Picom configuration

## Rofi configuration

