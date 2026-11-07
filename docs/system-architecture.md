# System architecture

## Original block diagram

See [`../diagrams/original-block-diagram.png`](../diagrams/original-block-diagram.png) for the diagram used in the college presentation.

## Functional blocks

1. **Temperature sensor:** Supplies temperature information.
2. **Rainwater sensor:** Supplies rain-detection information.
3. **Wind sensor:** Supplies wind information.
4. **PSU:** Provides power to the electronics and actuator section.
5. **MCU (ESP32):** Receives sensor inputs and performs programmed control.
6. **Servo motor:** Converts control signals into mechanical movement.
7. **Folding dome system:** The protective structure moved by the servo mechanism.

## High-level flow

```text
Temperature sensor ─┐
Rain sensor ─────────┼──> ESP32 MCU ───> Servo motor(s) ───> Folding dome
Wind sensor ─────────┘          ▲
                                │
                         Power supply
```

The sensor-to-MCU and MCU-to-servo links represent intended data/control flow. PSU connections represent power distribution. The original drawing does not provide a detailed electrical netlist or pin mapping.

The return arrow between the servo motor block and MCU appears in the original diagram. Available project materials do not define its exact electrical meaning, so it is not described here as confirmed position feedback.

## Limits of available design information

The exact ESP32 GPIO assignments, sensor interface details, servo angles, threshold values, timing and control priority are unavailable. Do not infer these details from the conceptual block diagram.
