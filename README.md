
# <b> Ampex 210 plus </b> - An 80s keyboard gets QMK and VIA support 

<!--![ampex-210-plus-qmk](https://github.com/vuckale/)-->

<!--*A short description of the keyboard/project*-->
<b> Ampex 210 plus </b> is a terminal keyboard, manufactured for [Ampex](https://en.wikipedia.org/wiki/Ampex) by [Hi-Tek](https://deskthority.net/wiki/Hi-Tek_Corporation). It uses [Hi-Tek Series 725](https://deskthority.net/wiki/Hi-Tek_Series_725) AKA <b> space invader</b> switches. This particular models uses tow eyed, linear switches.

I removed original MCU (40 pin 8-bit Mitsubishi M5L8048-186P) and replaced it with Teensy++ 2.0 (AT90USB1286). With some rewiring Teensy++ 2.0 was almost pin to pin compatible with existing pads. Flashing QMK firmware onto Teensy makes this keyboard programmable and replaces existing 4-pin RJ connector with USB mini. 

# Matrix Wiring
![matrix-wiring](https://github.com/vuckale/ampex-210-plus-qmk/blob/main/docs/wiring.png?raw=true)

&ast; Pins <b>D5</b> and <b>D6</b> were causing some permanent shorting when using this keyboard over USB 3.0. As marked above, those two pins had to be jumped to pins <b>F6</b> and <b>F7</b>. Every other pin is as marked, and Teensy only has to be shifted one pin to left in the exact orientation as pictured.

&ast; The pinout above does not include two <b> shift </b> keys. Due to design (or some other reason), this keyboard had both shift keys act as single key. In this firmware I rewired those two keys into separate rows and columns to act as two separate keys. 

![right-left-shift-wiring](https://github.com/vuckale/ampex-210-plus-qmk/blob/main/docs/left-right-shift-wiring.png?raw=true)
&ast; Additionaly, 4 trace connectors coming from 2 shift keys have to be cut. Not doing so will cause some delay in input. There is 4 in total and beginning and end is marked with red in the picture bellow.
![pcb-back-wiring](https://github.com/vuckale/ampex-210-plus-qmk/blob/main/docs/pcb-back-shift-wiring.png?raw=true)

&ast; I have soldered only the pins that I am using in this firmware. To achieve this I have cut pins that are not used. Soldering all the pins might produce a short or some other type of interference. 
![pins](https://github.com/vuckale/ampex-210-plus-qmk/blob/main/docs/pins.png?raw=true)

# Speaker Wiring
&ast; This PCB has a marking <b>SP1</b> for speaker. Two pins comming out on the back of the PCB have to be jumped to pins marked bellow.
<p align="center">
  <img src="https://github.com/vuckale/ampex-210-plus-qmk/blob/main/docs/speaker-wiring.png?raw=true" />
</p>
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
