# Dome Guard — Automated Foldable Dome System for Plants

> An academic IoT and embedded-systems group project exploring an automated foldable protective dome for plants using environmental sensing and servo actuation.

## Project overview

**Dome Guard** was a 2025 group micro-project at **Kottayam Institute of Technology & Science**, affiliated with **APJ Abdul Kalam Technological University (KTU)**.

The project explored a compact foldable shelter to help protect plants from changing weather conditions such as rainfall, temperature variation and strong winds. The intended system uses environmental sensors, an **ESP32** microcontroller and **two SG92R servo motors** to move the folding dome.

The team completed a physical prototype and presented it at college. The original firmware and physical prototype are no longer available to the repository maintainer. This repository is therefore a **project case study and documentation archive**; it does not claim to contain the original source code or a reproducible hardware build.

## Problem statement

Plants in small gardens and cultivation spaces can be exposed to rainfall, temperature changes and wind. Manual covering can require regular attention. Dome Guard explored an automated protective structure that responds to environmental sensor inputs and moves a foldable cover using servo motors.

## Objectives

- Design and develop an automated foldable dome concept for plant protection.
- Monitor selected environmental conditions using sensors.
- Use an ESP32 microcontroller as the control unit.
- Operate the folding mechanism using servo motors.
- Explore a compact, cost-conscious solution for small gardens and similar growing spaces.
- Develop, document and present a physical prototype as a team.

## System architecture

The original college-presentation diagram is in [`diagrams/original-block-diagram.png`](diagrams/original-block-diagram.png). The simplified conceptual flow is:

```text
Temperature sensor ─┐
Rain sensor ─────────┼──> ESP32 MCU ───> Servo motor(s) ───> Folding dome
Wind sensor ─────────┘          ▲
                                │
                         Power supply
```

The presentation shows temperature, rain and wind sensors feeding the MCU. The MCU controls the servo motor block, which drives the folding dome. The PSU supplies the controller and actuator section.

The original block diagram also shows a connection from the servo motor block back to the MCU. The available materials do not explain whether this represents position feedback or another conceptual connection, so this repository does not assign it a specific function.

## Components and intended roles

| Component | Intended role |
|---|---|
| ESP32 microcontroller | Reads sensor inputs and runs the system's control logic. |
| DHT22 / AM2302 sensor | Measures ambient temperature and relative humidity. |
| LM393 rain sensor module | Detects rain or moisture at the sensor plate. |
| Anemometer | Measures wind speed. |
| 2 × SG92R servo motors | Move the foldable dome mechanism; the presentation describes control of both dome hemispheres. |
| Power Supply Unit (PSU) | Provides electrical power to the system. |
| 7805 voltage regulator | 5 V regulation is shown in the supplied circuit illustration; exact wiring must be verified. |

See [`docs/components.md`](docs/components.md) for details.

**Component-list clarification:** The presentation identifies an anemometer and the block diagram includes a wind sensor, but the supplied circuit illustration does not clearly show the anemometer connection. The presentation identifies the rain sensor as LM393, while the circuit image depicts a raindrop sensor module. These descriptions are retained from the available project materials, not treated as a verified pin-level design.

## Intended operating sequence

1. Environmental sensors monitor temperature, humidity, rainfall and wind.
2. Sensor signals are provided to the ESP32.
3. The programmed controller evaluates sensor information against configured conditions.
4. The ESP32 sends control signals to the servo motor mechanism.
5. The servo motors move the folding dome to its intended protective position.

The exact firmware, thresholds, decision priority, servo angles, timing and fail-safe behavior are not available. They are not invented or presented as verified implementation details here.

## My contribution and team work

### My contribution
I primarily worked on the **programming aspect** of the project, including the ESP32-based automation concept and the control logic intended to connect sensor readings with servo operation. The original source code is no longer available to me, so this repository does not claim to reproduce the original firmware.

### Team contributions
- My teammates handled electronic connections and hardware integration.
- My teammates worked on physical prototype construction.
- The team conducted research and prepared project documentation.
- The team completed the prototype and presented the project at college.

This was a collaborative group project. The repository distinguishes my programming contribution from the hardware tasks handled by teammates.

## Development tools and technologies

- ESP32 microcontroller
- Embedded / microcontroller programming
- Environmental sensors
- Servo motor actuation
- Electronic circuit connections
- Arduino IDE was identified in earlier project discussions, but the original sketch is not available here.

## Project outcome

The group completed a physical prototype and presented it at college. The project provided practical group experience in embedded programming, sensor-based automation concepts, microcontroller and actuator integration, hardware/software collaboration, technical research, documentation and presentation.

No measured performance figures, sensor accuracy results, wind-resistance limits, dome deployment times, long-term reliability results or crop-yield improvements are claimed because verified test data is not available in this repository.

## Design considerations and limitations

This is a project record, not a validated construction guide. Read [`docs/limitations-and-rebuild-notes.md`](docs/limitations-and-rebuild-notes.md) before attempting to recreate the circuit.

- Original firmware is unavailable.
- The physical prototype is no longer available to the repository maintainer.
- The original circuit image is a historical illustration, not a verified wiring schematic.
- The anemometer appears in the presentation and block diagram, but its wiring is not shown in the supplied circuit illustration.
- A 7805 is a 5 V regulator. The input/output labels and connections in the supplied drawing must be checked.
- Servo supply capacity, voltage compatibility and common ground must be verified before a new build.
- Exact sensor thresholds and automatic open/close rules are unavailable.

## Future improvements

- Smartphone-based monitoring and remote control.
- Solar-powered operation.
- Improved environmental sensing and calibration.
- More robust dome materials and mechanical linkages.
- Improved servo mounting and movement reliability.
- Integration with irrigation systems.
- Testing under controlled rain, temperature and wind conditions.

These are future-development ideas, not claims about features already implemented.

## Repository structure

```text
dome-guard/
├── README.md
├── .gitignore
├── LICENSE-NOTE.md
├── docs/
│   ├── project-overview.md
│   ├── system-architecture.md
│   ├── components.md
│   ├── contributions.md
│   ├── methodology-and-testing.md
│   ├── limitations-and-rebuild-notes.md
│   └── project-sources.md
├── diagrams/
│   └── original-block-diagram.png
├── hardware/
│   └── original-circuit-illustration.png
├── media/
│   └── README.md
└── references/
    └── README.md
```

## Academic information

- **Project:** Dome Guard — Automated Foldable Dome System for Plants
- **Institution:** Kottayam Institute of Technology & Science
- **University:** APJ Abdul Kalam Technological University (KTU)
- **Year:** 2025
- **Type:** Group micro-project

## Acknowledgement

Dome Guard was developed as a collaborative student project. Credit for hardware connections, prototype construction, research and presentation belongs to the project team. Individual contribution details are provided above.
