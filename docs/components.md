# Components and intended roles

The table reflects the project presentation and supplied circuit illustration.

| Component | Intended role |
|---|---|
| ESP32 microcontroller | Reads sensor inputs and runs the system's control logic. |
| DHT22 / AM2302 sensor | Measures ambient temperature and relative humidity. |
| LM393 rain sensor module | Detects rain/moisture at the sensor plate. |
| Anemometer | Measures wind speed. |
| 2 × SG92R servo motors | Move the foldable dome mechanism. The presentation describes control of both dome hemispheres. |
| Power Supply Unit (PSU) | Provides electrical power to the system. |
| 7805 voltage regulator | 5 V regulation is shown in the supplied circuit illustration; exact wiring must be verified. |

## Notes

- The presentation lists the anemometer, but the supplied circuit illustration does not clearly show its connection.
- The presentation identifies the rain sensor as LM393. The supplied circuit image depicts a raindrop sensor module.
- Confirm the exact ESP32 board variant before recreating connections.
- This component list explains intended roles; it is not a verified bill of materials or wiring guide.
