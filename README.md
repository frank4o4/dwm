# dwm
my dwm build on Debian 12

Minimum X11

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

If you want to use lightdm

```shell
apt install lightdm lightdm-gtk-greeter
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
