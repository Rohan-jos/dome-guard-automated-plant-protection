# Limitations and rebuild notes

This repository is a project case study and documentation archive. It is not a validated construction guide.

## Availability

- The team completed and presented a physical prototype.
- The original firmware is no longer available to the repository maintainer.
- The physical prototype is no longer available to the repository maintainer.
- The repository contains the original block diagram and circuit illustration, plus written project documentation.

## Circuit caution

The supplied circuit illustration is a historical project image, not a verified, build-ready schematic. Before using it to recreate hardware, verify:

- The exact ESP32 board and its pin labels.
- The 7805 regulator's input, ground and output connections.
- The voltage required by each sensor and the controller.
- Servo motor supply voltage and current capacity.
- Common ground between the controller, sensors and servo supply.
- Whether any sensor output requires voltage-level adaptation.
- The actual anemometer interface and wiring.

A 7805 is a 5 V regulator. The labels and connections in the supplied drawing should be checked rather than copied blindly.

## Missing implementation details

The available materials do not establish the original firmware, GPIO pin mapping, sensor thresholds, decision priorities, servo angle values, timing, error handling or fail-safe behavior. No measured reliability, wind tolerance or deployment times are claimed.

## If the project is rebuilt

Recover the exact component models and mechanical arrangement. Create a verified schematic and pin map, then test each sensor and servo independently before integrating the system. Document measured results and distinguish new work from the original 2025 project.
