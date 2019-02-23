#myBF 3.61 with Custom features


I made some customisation in the code, and for better debug also changed the flight mode name to display each phase of the rescue mode, so I can look at OSD what is the current working phase and check heading and altitude and picture.

It helps a lot for understanding and tuning it.

[![FPV screen showing OSD](images/osdyt1.jpg)](https://youtu.be/Oj0iBXndD3c?t=108 "FPV screen showing OSD")

On the lower right above coordinates is the flight mode.
During manual or when I quickly turn off GPS rescue to not let it "land' by itself you can see AIR text.
Instead of RESC you will se the following flight mode short names:

IDLE: "REID"
INITIALIZE: "REIT"
ATTAIN_ALT: "REAA"
CROSSTRACK: "RECT"
APPROACH: "RELA"
LANDING: "RELD"
COMPLETE: "RECP"
ABORT: "REAB"

The visual beeper blinks the calculater altitudes for AA (attaining altitude phase) and CT (crosstrack) phases.

##  Some extra features to list:

* Enabling GPS rescue for F3 FC  (ex.:SPRACINGF3 target) by disabling some functionality
* calculating different safe crosstrack and attain altitude alts
* not climbing to max ever altitude during this flight
* having a fixed altitude max if above 200meters
* does not failsafe and disarm if switching to rescue mode to close to home
* OSD:visual beeper showing calculated altitued for stages
* OSD:custom flight mode names for rescue phases


Here comes original BF readme:





![Betaflight](https://raw.githubusercontent.com/wiki/betaflight/betaflight/images/betaflight/bf_logo.png)

Betaflight is flight controller software (firmware) used to fly multi-rotor craft and fixed wing craft.

This fork differs from Baseflight and Cleanflight in that it focuses on flight performance, leading-edge feature additions, and wide target support.

## Events

| Date  | Event |
| - | - |
| 22 July 2018 | Start of feature freeze / Release Candidate window for Betaflight 3.5 |
| 05 August 2018 | Planned [release](https://github.com/betaflight/betaflight/milestone/21) date for Betaflight 3.5 |
| 01 January 2019 | Planned [release](https://github.com/betaflight/betaflight/milestone/20) date for Betaflight 4.0 |

## Features

Betaflight has the following features:

* Multi-color RGB LED strip support (each LED can be a different color using variable length WS2811 Addressable RGB strips - use for Orientation Indicators, Low Battery Warning, Flight Mode Status, Initialization Troubleshooting, etc)
* DShot (150, 300, 600 and 1200), Multishot, and Oneshot (125 and 42) motor protocol support
* Blackbox flight recorder logging (to onboard flash or external microSD card where equipped)
* Support for targets that use the STM32 F7, F4, F3 and F1 processors
* PWM, PPM, and Serial (SBus, SumH, SumD, Spektrum 1024/2048, XBus, etc) RX connection with failsafe detection
* Multiple telemetry protocols (CSRF, FrSky, HoTT smart-port, MSP, etc)
* RSSI via ADC - Uses ADC to read PWM RSSI signals, tested with FrSky D4R-II, X8R, X4R-SB, & XSR
* OSD support & configuration without needing third-party OSD software/firmware/comm devices
* OLED Displays - Display information on: Battery voltage/current/mAh, profile, rate profile, mode, version, sensors, etc
* In-flight manual PID tuning and rate adjustment
* Rate profiles and in-flight selection of them
* Configurable serial ports for Serial RX, Telemetry, ESC telemetry, MSP, GPS, OSD, Sonar, etc - Use most devices on any port, softserial included
* VTX support for Unify Pro and IRC Tramp
* and MUCH, MUCH more.

## Installation & Documentation

See: https://github.com/betaflight/betaflight/wiki

## IRC Support and Developers Channel

There's a dedicated Slack chat channel here:

https://slack.betaflight.com/

Etiquette: Don't ask to ask and please wait around long enough for a reply - sometimes people are out flying, asleep or at work and can't answer immediately.

## Configuration Tool

To configure Betaflight you should use the Betaflight-configurator GUI tool (Windows/OSX/Linux) that can be found here:

https://chrome.google.com/webstore/detail/betaflight-configurator/kdaghagfopacdngbohiknlhcocjccjao

The source for it is here:

https://github.com/betaflight/betaflight-configurator

## Contributing

Contributions are welcome and encouraged.  You can contribute in many ways:

* Documentation updates and corrections.
* How-To guides - received help? Help others!
* Bug reporting & fixes.
* New feature ideas & suggestions.

The best place to start is the IRC channel on gitter (see above), drop in, say hi. Next place is the github issue tracker:

https://github.com/betaflight/betaflight/issues
https://github.com/betaflight/betaflight-configurator/issues

Before creating new issues please check to see if there is an existing one, search first otherwise you waste peoples time when they could be coding instead!

## Developers

Please refer to the development section in the `docs/development` folder.

TravisCI is used to run automatic builds

https://travis-ci.org/betaflight/betaflight

[![Build Status](https://travis-ci.org/betaflight/betaflight.svg?branch=master)](https://travis-ci.org/betaflight/betaflight)

## Betaflight Releases

https://github.com/betaflight/betaflight/releases

## Open Source / Contributors

Betaflight is software that is **open source** and is available free of charge without warranty to all users.

Betaflight is forked from Cleanflight, so thanks goes to all those whom have contributed to Cleanflight and its origins.

Origins for this fork (Thanks!):
* **Alexinparis** (for MultiWii),
* **timecop** (for Baseflight),
* **Dominic Clifton** (for Cleanflight), and
* **Sambas** (for the original STM32F4 port).

The Betaflight Configurator is forked from Cleanflight Configurator and its origins.

Origins for Betaflight Configurator:
* **Dominic Clifton** (for Cleanflight configurator), and
* **ctn** (for the original Configurator).

Big thanks to current and past contributors:
* Budden, Martin (martinbudden)
* Bardwell, Joshua (joshuabardwell)
* Blackman, Jason (blckmn)
* ctzsnooze
* Höglund, Anders (andershoglund)
* Ledvina, Petr (ledvinap) - **IO code awesomeness!**
* kc10kevin
* Keeble, Gary (MadmanK)
* Keller, Michael (mikeller) - **Configurator brilliance**
* Kravcov, Albert (skaman82) - **Configurator brilliance**
* MJ666
* Nathan (nathantsoi)
* ravnav
* sambas - **bringing us the F4**
* savaga
* Stålheim, Anton (KiteAnton)

And many many others who haven't been mentioned....
