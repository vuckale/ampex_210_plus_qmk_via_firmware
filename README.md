
# <b> Ampex 210 plus </b> - An 80s keyboard gets QMK and VIA support 

![ampex-210-plus-qmk-via-firmware](https://github.com/vuckale/ampex-210-plus-qmk-via-firmware/blob/main/overview.png?raw=true)

<!--*A short description of the keyboard/project*-->
<b> Ampex 210 plus </b> is a terminal keyboard, manufactured for [Ampex](https://en.wikipedia.org/wiki/Ampex) by [Hi-Tek](https://deskthority.net/wiki/Hi-Tek_Corporation). It uses [Hi-Tek Series 725](https://deskthority.net/wiki/Hi-Tek_Series_725) AKA <b> space invader</b> switches. This particular models uses tow eyed, linear switches.

I removed original MCU (40 pin 8-bit Mitsubishi M5L8048-186P) and replaced it with Teensy++ 2.0 (AT90USB1286). With some rewiring Teensy++ 2.0 was almost pin to pin compatible with existing pads. Flashing QMK firmware onto Teensy makes this keyboard programmable and replaces existing 4-pin RJ connector with USB mini.

# Features

* USB mini B
* 4 programmable layers
* 16 macro keys
* bootmagic on esc key
* speaker
* VIA

![VIA](https://github.com/vuckale/ampex-210-plus-qmk-via-firmware/blob/main/docs/VIA.png?raw=true)

# Wiring
&ast; Pins <b>D5</b> and <b>D6</b> were causing some permanent shorting when using this keyboard over USB 3.0. As marked bellow, those two pins had to be jumped to pins <b>F6</b> and <b>F7</b>. Every other pin is as marked, and Teensy only has to be shifted one pin to left in the exact orientation as pictured. Pins on PCB marked with red are unused.
![matrix-wiring](https://github.com/vuckale/ampex-210-plus-qmk-via-firmware/blob/main/docs/wiring.png?raw=true)

&ast; The pinout above does not include two <b> shift </b> and <b> ctrl </b> keys. Due to design (or some other reason), this keyboard had both shift keys act as single key. Ctrl key was routed through some other components that I didn't want to desolder. In this firmware I rewired those keys into separate rows and columns only because that was the easiest and cleanest way to reach controller pins i.e. you can rewire it to some other free row-column combinations. 
![right-left-shift-wiring](https://github.com/vuckale/ampex-210-plus-qmk-via-firmware/blob/main/docs/custom-wiring.png?raw=true)

&ast; Additionaly, 6 trace connectors coming from 2 shift keys and ctrl key have to be cut. Not doing so will cause some delay in input. The trace connectors that have to be removed are marked on the picture bellow.
![pcb-back-wiring](https://github.com/vuckale/ampex-210-plus-qmk-via-firmware/blob/main/docs/pcb-back-custom-wiring.png?raw=true)

&ast; I have soldered only the pins that I am using in this firmware. To achieve this I have cut pins that are not used. Soldering all the pins might produce a short or some other type of interference. 
![pins](https://github.com/vuckale/ampex-210-plus-qmk-via-firmware/blob/main/docs/pins.png?raw=true)

# Key Matrix
&ast; Rows and colums colored in green are extra rows and columns I mentioned in Wiring section.
![key-matrix](https://github.com/vuckale/ampex-210-plus-qmk-via-firmware/blob/main/docs/matrix.png?raw=true)
# Speaker Wiring
&ast; This PCB has a marking <b>SP1</b> for speaker. Two pins comming out on the back of the PCB have to be jumped to pins marked bellow.
<p align="center">
  <img src="https://github.com/vuckale/ampex-210-plus-qmk-via-firmware/blob/main/docs/speaker-wiring.png?raw=true" />
</p>

# 3D-Print ready stabilizers
&ast; If you happen to break stabilizers you can get the files to 3D-print them [here](https://github.com/vuckale/ampex-210-plus-qmk-via-firmware/blob/main/stabilizers_stl/) 
![stabilizers](https://github.com/vuckale/ampex-210-plus-qmk-via-firmware/blob/main/stabilizers_stl/ampex_210_plus_stabilizer_stl.gif?raw=true)

# More pictures
&ast; Flat
![flat](https://github.com/vuckale/ampex-210-plus-qmk-via-firmware/blob/main/docs/flat.png?raw=true)

&ast; 11° angle
![11](https://github.com/vuckale/ampex-210-plus-qmk-via-firmware/blob/main/docs/11.png?raw=true)

&ast; Logo
![closeup](https://github.com/vuckale/ampex-210-plus-qmk-via-firmware/blob/main/docs/closeup.png?raw=true)

&ast; [Operation Manual](https://archive.org/details/bitsavers_ampextermiperatingManualApr84_11028631/mode/2up)
![closeup](https://github.com/vuckale/ampex-210-plus-qmk-via-firmware/blob/main/docs/handbook-overview-terminal.png?raw=true)

<!--* Keyboard Maintainer: [vuckale](https://github.com/yourusername)
* Hardware Supported: Teensy++ 2.0 USB based microcontroller
* Hardware Availability: *Links to where you can find this hardware*-->

<!--Make example for this keyboard (after setting up your build environment):

    make compaq-mx-11800:default

Flashing example for this keyboard:i

    make compaq-mx-11800:default:flash

or for VIA support:
    
    make compaq-mx-11800:via:flash

<!--See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).-->
