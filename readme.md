# Quantum Mechanical Keyboard Firmware

## How to use:

#### Setup qmk for the first time:
`./util/qmk_install.sh`

#### To build:
`make massdrop/ctrl:clutcha`

Output: massdrop_ctrl_clutcha.hex

Firmware loader:
https://github.com/Massdrop/mdloader

#### To flash firmware to board:
`./mdloader_mac --first --download FILE_NAME --restart`

Hold down Fn + B for few seconds, to get the controller into DFU mode, so you can flash the firmware.

---

## This is a fork of the massdrop fork of qmk
This fork has specific modifications for the Massdrop ALT.
Added glitter/cloud effect, customized my personal keymap, and added funcitonality for a 'game mode' led map. The 'game mode' for leds keeps the key layout the same but can change RGB layouts with a keycode.

[![Current Version](https://img.shields.io/github/tag/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/tags)
[![Build Status](https://travis-ci.org/qmk/qmk_firmware.svg?branch=master)](https://travis-ci.org/qmk/qmk_firmware)
[![Discord](https://img.shields.io/discord/440868230475677696.svg)](https://discord.gg/Uq7gcHh)
[![Docs Status](https://img.shields.io/badge/docs-ready-orange.svg)](https://docs.qmk.fm)
[![GitHub contributors](https://img.shields.io/github/contributors/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/pulse/monthly)
[![GitHub forks](https://img.shields.io/github/forks/qmk/qmk_firmware.svg?style=social&label=Fork)](https://github.com/qmk/qmk_firmware/)

This is a keyboard firmware based on the [tmk\_keyboard firmware](http://github.com/tmk/tmk_keyboard) with some useful features for Atmel AVR and ARM controllers, and more specifically, the [Massdrop ALT](https://www.massdrop.com/buy/massdrop-alt-mechanical-keyboard).

## Documentation

* [See the official documentation on docs.qmk.fm](https://docs.qmk.fm)

The docs are hosted on [Gitbook](https://www.gitbook.com/book/qmk/firmware/details) and [GitHub](/docs/) (they are synced). You can request changes by making a fork and [pull request](https://github.com/qmk/qmk_firmware/pulls), or by clicking the "suggest an edit" link on any page of the docs.

## Supported Keyboards

* [ALT](/keyboards/massdrop/alt/)

The project also includes community support for [lots of other keyboards](/keyboards/).

## Maintainers

QMK is developed and maintained by Jack Humbert of OLKB with contributions from the community, and of course, [Hasu](https://github.com/tmk). The OLKB product firmwares are maintained by [Jack Humbert](https://github.com/jackhumbert), the Ergodox EZ by [Erez Zukerman](https://github.com/ezuk), the Clueboard by [Zach White](https://github.com/skullydazed), and the Atreus by [Phil Hagelberg](https://github.com/technomancy).

## Official website

[http://qmk.fm](http://qmk.fm) is the official website of QMK, where you can find links to this page, the documentation, and the keyboards supported by QMK.
