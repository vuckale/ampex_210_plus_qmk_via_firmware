# <b> Ampex 210 plus </b> - An 80s keyboard gets QMK and VIA support 

<!--![ampex-210-plus-qmk](https://github.com/vuckale/)-->

<!--*A short description of the keyboard/project*-->
<b> Ampex 210 plus </b> is a terminal keyboard, manufactured for [Ampex](https://en.wikipedia.org/wiki/Ampex) by [Hi-Tek](https://deskthority.net/wiki/Hi-Tek_Corporation). It uses [Hi-Tek Series 725](https://deskthority.net/wiki/Hi-Tek_Series_725) AKA <b> sapce invader</b> switches. This particular models uses tow eyed, linear switches.

I removed original MCU (40 pin 8-bit Mitsubishi M5L8048-186P) and replaced it with Teensy++ 2.0 (AT90USB1286). With some rewiring Teensy++ 2.0 was almost pin to pin compatible with existing pads. Flashing QMK firmware onto Teensy makes this keyboard programmable and replaces existing 4-pin RJ connector with USB mini. 

# Matrix Wiring
![compaq-mx-11800](https://github.com/vuckale/ampex-210-plus-qmk/blob/main/docs/wiring.png?raw=true)
&ast; Pins <b>D5</b> and <b>D6</b> were causing some delay in input when using this keyboard over USB 3.0. As marked above, those two pins had to be jumped to pins <b>F6</b> and <b>F7</b>. Every other pin is as marked, and Teensy only has to be shifted one pin to left in the exact orientation as pictured.
&ast; This wiring does not include two <b> shift </b> keys. Due to design (or some other reason), this keyboard had both shift keys act as single key. In this firmware I rewired those two keys into separate rows and columns to act as two separate keys. 
![compaq-mx-11800](https://github.com/vuckale/ampex-210-plus-qmk/blob/main/docs/left-right-shift-wiring.png?raw=true)
Additionaly, 4 wire connectors had to be cut to reduce interfierence and delay in input as shown in the picture bellow. 2 of them, right next to right shift, 1 in the middle and one above of left shift.
![compaq-mx-11800](https://github.com/vuckale/ampex-210-plus-qmk/blob/main/docs/pcb-back-shift-wiring.png?raw=true)

# Speaker Wiring
This PCB has a marking <b>SP1</b> for speaker.
![compaq-mx-11800](https://github.com/vuckale/ampex-210-plus-qmk/blob/main/docs/speaker-wiring.png?raw=true)
![compaq-mx-11800](https://github.com/vuckale/ampex-210-plus-qmk/blob/main/docs/speaker?raw=true)

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