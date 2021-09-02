# BottleBoard

BottleBoard is an Arduino based shelf with (in my case) 10 slots for bottles or glasses, which will be illuminated from the bottom to let them shine.

The 10 lights are on 5050 / WS2812B PCBs with 8 LEDs each, daisy chained 
to construct one "line" of WS2812Bs.

You can configure the color and brightness of each slot individually using the
K40 encoder and change the overall brightness of all slots at once.
    
## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. 

### Prerequisites

You will need a running copy of the Arduino IDE. 

### Installing and Compiling

Download or clone the repository to your system.

```
https://github.com/timbocgn/way2bottleboard.git
```

Use the IDEs Library manager to install the following dependencies:

- Adafruit Neopixel (Version 1.85)
- RotaryEncoder by Matthias Hertel (Version 1.5.2)

### Monitor your device

There are several debugging logs in the code. Just uncomment the #ifdef DEBUG in the beginning to enable them all. Use the Serial Monitor of the IDE to watch the logs.

### Tweak your device

There are some defines to adapt the code to your needs:

```
// ---- hardware definitons

#define PIXEL_PIN       5 

#define ENCODER_PIN1    2
#define ENCODER_PIN2    3
#define BUTTON_PIN      4

// ---- hardware definitons

#define RL_LED_PER_ROTARY 8
#define RL_NUM_ROTARIES 10
```

The first group defines the actual hardware pins. Connect DIN of your LED strip to PIXEL_PIN, the encoder wires (SD and CLK) to the encoder pins. If the encoder "rotates" in thw wrong direction, switch the two pins. The decoder has also a pin for the switch, which has to be connected to BUTTON_PIN.

The second group defines the layout of the LEDs. I use 10 rotary PCB with 8 LEDs on it, so RL_LED_PER_ROTARY is the number of LEDs per PCB and RL_NUM_ROTARIES is the number of PCBs or slots on your BottleBoard.

## How to use

### Bootstrap

- When starting the device for the first time, all LEDs are configured white with maximum intensity

### Configuration

- To enter the configuration mode, press the encoder button for 2 seconds
- The first slot begins to flash in the selected color. With the encoder, you can select now which slot to configure
- When pressing the encoder button, you get to the configuration of the color. Cycle through the predefined colors and press the button...
- ...to enter the brightness configuration for the slot. 
- When you press the button again, you will end up in the selection stage and can select the next slot.
- To exit the configuration mode, long press the button at any time

### Normal operations

When not being in config mode, rotating the encoder changes the brightness of all LEDs at the same time. Of course this is also saved as a configuration.

### On- and Off

You can switch the device on and off at any time by switching the power. The configuration will be restored on restart.

### Hardware 

You will need:

- KY-040 Rotary Encoder
- 470 Ohm resitor
- Arduino Nano
- Some 5050 / WS2812B LEDs

## Authors

* **Tim Hagemann** - *Initial work* - https://github.com/timbocgn

## License

This project is licensed under the MIT License.

## Acknowledgments

* To the authors of the used libraries. Both work like a charm and make project like this true fun.
* To my son, who asked me to build the BottleBoard ;-)
