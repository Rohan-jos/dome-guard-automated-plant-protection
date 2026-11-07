# Firmware

This folder contains two recovered Arduino sketches from the project work.
They are separate sketches/examples, not one combined program.

## 1. `dht22_wifi_webserver/`

Reads a DHT22 sensor connected to ESP32 GPIO 26 and serves temperature and
humidity readings on a simple web page over Wi-Fi.

Before use, replace the placeholder Wi-Fi network name and password in the
source with your own credentials. Do not commit real Wi-Fi credentials to a
public repository.

Libraries used: ESP32 Arduino core libraries (`WiFi`, `WebServer`, `ESPmDNS`)
and the Adafruit `DHT` sensor library.

## 2. `rain_servo_control/`

Reads a digital rain-sensor output on GPIO 33 and commands two servos on GPIO
14 and GPIO 27. It uses `ESP32Servo.h`.

The sketch assumes LOW means rain detected. During rain, it commands servo A
to 0 degrees and servo B to 180 degrees; otherwise both are commanded to
90 degrees.

## Important

These sketches are documented separately because each contains its own
`setup()` and `loop()`. They cannot simply be placed together as separate
`.ino` files in one Arduino sketch folder and compiled as a single program.
A combined integrated firmware would need to be deliberately developed and
tested.

The project owner recovered these sketches after the prototype was no longer
available. They are preserved as recovered source; do not claim that every
feature was re-tested on the original hardware.
