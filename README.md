# Adjustable LED Brightness

Control the brightness of an LED using two push buttons and PWM on an Arduino Nano. One button increases the brightness while the other decreases it. The project also uses gamma correction to create smoother brightness transitions that look more natural to the human eye.

## Features

* Adjustable LED brightness
* Smooth perceptual dimming
* Dual button control
* PWM LED control
* Beginner friendly

## Components

* Arduino Nano
* LED
* 220Ω resistor
* 2 push buttons
* Breadboard
* Jumper wires

## Pin Connections

| Component       | Arduino Pin          |
| --------------- | -------------------- |
| LED Cathode (-) | D10                  |
| LED Anode (+)   | 220Ω resistor → 3.3V |
| Button 1        | D9 and D7            |
| Button 2        | D6 and D4            |

## How It Works

The Arduino reads the two push buttons:

* Button 1 increases brightness
* Button 2 decreases brightness

PWM (Pulse Width Modulation) is used to control the LED brightness. Gamma correction is applied in software so the fading appears smoother and more natural to human vision.

## Instructions

1. Connect the Arduino Nano to the breadboard.
2. Connect the LED cathode (-) to D10.
3. Connect the LED anode (+) to a 220Ω resistor.
4. Connect the other side of the resistor to 3.3V.
5. Connect Button 1 between D9 and D7.
6. Connect Button 2 between D6 and D4.
7. Upload the code to the Arduino Nano.
8. Press the buttons to control brightness.

## Applications

* LED dimmers
* Smart lighting systems
* DIY electronics learning
* PWM control projects
* User input projects
