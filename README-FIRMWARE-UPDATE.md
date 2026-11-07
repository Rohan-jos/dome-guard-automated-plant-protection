# Firmware source update

The project owner recovered two additional source sketches:

- **DHT22 Wi-Fi web server:** reads a DHT22 on GPIO 26 and displays temperature
  and humidity on a local web page served by the ESP32.
- **Rain-triggered servo control:** reads the rain module on GPIO 33 and
  controls two servos on GPIO 14 and GPIO 27 using `ESP32Servo`.

These are separate sketches. They each define their own `setup()` and `loop()`
and should be built independently unless intentionally integrated.

The original pasted Wi-Fi password was masked. The repository version uses
placeholders so that real network credentials are not published.

The pasted `Sweep/readme.md` is documentation for a generic Arduino Servo
library example, not project-specific firmware, so it is not included as
project code.

The uploaded `.bin`, `.elf`, `.o`, `.d`, cache, and build-configuration files
are build artifacts or local environment metadata. They are not required for
a source-code GitHub repository and may contain local paths.
