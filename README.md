# dwm

## Intro

my dwm build on Debian 12

ROFI Themes came from this github
https://github.com/newmanls/rofi-themes-collection

DWMScripts came from this gitlab
https://gitlab.com/dwt1/dmscripts


## Minimum X11

```shell
apt install xserver-xorg-core x11-xserver-utils x11-xkb-utils x11-utils xinit
```

Depending on your Video Card you will need

```shell
xserver-xorg-video-XXX (video driver, XXX depends on your hardware)
xserver-xorg-input-XXX (input device driver, XXX depends on your hardware. evdev works well for most cases)
```

Need the following to install DWM
```shell
sudo apt install libxft-dev libx11-dev libxinerama-dev
```

## Downloads

Git clone suckless dwm and dwmblocks

```shell
mkdir build &&
cd build &&
git clone https://git.suckless.org/dwm &&
git clone https://github.com/torrinfail/dwmblocks.git
```

## Install

(1)Copy `config.def.h` and `compile.sh` from dwm folder to dwm and copy `blocks.def.h` and `compile.sh` to dwmblocks

(2)Copy dwmscripts to /usr/local/bin if your using dwmweather update to your city.

(3)If you want to use rofi themes copy to your `~/.local/share/rofi/themes` folder


If you want to use lightdm

```shell
sudo apt install lightdm lightdm-gtk-greeter
```

If your going to use rofi

```shell
sudo apt install rofi
```

Nitrogen for backgrounds

```shell
sudo apt install nitrogen
```

Used for themes you can download icons and themes from https://www.gnome-look.org/

```shell
sudo aptinstall lxappearance
```

Configure DWM as an X11 option `vim /usr/share/xsessions/dwm.desktop`

```shell
[Desktop Entry]
Encoding=UTF-8
Name=Dwm
Comment=the dynamic window manager
Exec=/usr/local/bin/startdwm.sh
Icon=dwm
Type=XSession
```

Create `startdwm.sh`

```shell
#!/bin/bash

nitrogen --restore &
dwmblocks &
exec /usr/local/bin/dwm
```
