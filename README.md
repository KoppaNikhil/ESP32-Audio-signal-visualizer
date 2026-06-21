# ESP32 Audio Signal Visualizer

## Project Overview

This project implements a real-time audio signal visualizer using an ESP32 microcontroller and a MAX4466 microphone module.

The microphone captures surrounding sound signals and converts them into analog electrical signals. The ESP32 reads these signals using its inbuilt Analog-to-Digital Converter (ADC) and controls LEDs based on the detected sound intensity.

This project demonstrates basic signal processing concepts such as signal acquisition, amplitude analysis, ADC conversion, and real-time signal visualization.

---

## Components Used

* ESP32 Development Board
* MAX4466 Microphone Module
* 3 LEDs
* 220Ω Resistors
* Breadboard
* Jumper Wires
* USB Cable

---

## Circuit Connections

### MAX4466 Microphone Module

| MAX4466 | ESP32       |
| ------- | ----------- |
| VCC     | 3V3         |
| GND     | GND         |
| OUT     | GPIO39 (VN) |

### LEDs

| ESP32 Pin | Component |
| --------- | --------- |
| GPIO18    | LED 1     |
| GPIO19    | LED 2     |
| GPIO21    | LED 3     |

All LED negative terminals are connected to GND through the breadboard.

---

## Working Principle

1. The MAX4466 microphone captures audio signals.
2. The microphone converts sound into analog voltage signals.
3. ESP32 reads the analog signal using ADC.
4. The signal amplitude is analyzed.
5. LEDs glow according to the detected sound intensity.

---

## System Classification
| Property       | Classification       |
| -------------- | -------------------- |
| Linearity      | Approximately Linear |
| Time Nature    | Time Variant         |
| Causality      | Causal               |
| Static/Dynamic | Dynamic              |
| Stability      | Stable               |
| Invertibility  | Non-Invertible       |
| Memory         | Memoryless           |

---

## Applications
* Audio Level Indicator
* Noise Monitoring
* Sound Visualization
* Embedded Signal Processing Demonstration

---

## Conclusion
The project successfully demonstrates real-time audio signal acquisition and visualization using an ESP32 microcontroller and a MAX4466 microphone module. The system provides a simple implementation of basic signal processing concepts and embedded system design.
