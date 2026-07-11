#  Smart Irrigation System Using Arduino

##  Project Overview

The **Smart Irrigation System Using Arduino** is an automated irrigation solution designed to reduce water wastage and improve irrigation efficiency in large agricultural fields.

This project uses **two soil moisture sensors** placed at different locations in the field:

* **Front of the field**
* **End of the field**

Unlike conventional irrigation systems that rely on a single sensor, this system ensures that water reaches the entire field before stopping the irrigation process.

The Arduino continuously monitors the moisture levels from both sensors and automatically controls the water pump using a relay module.

---

## Objectives

* Automate irrigation without human intervention.
* Reduce unnecessary water consumption.
* Ensure uniform watering across large agricultural fields.
* Improve irrigation efficiency using low-cost hardware.

---

##  Components Used

| Component             |    Quantity |
| --------------------- | ----------: |
| Arduino UNO           |           1 |
| Soil Moisture Sensor  |           2 |
| Relay Module          |           1 |
| DC Water Pump / Motor |           1 |
| Water Pipes           | As Required |
| Jumper Wires          |     Several |
| Breadboard (Optional) |           1 |
| Power Supply          |           1 |

---

##  Software Used

* Arduino IDE
* Embedded C
* GitHub

---

##  Circuit Connections

| Arduino Pin | Connected Device           |
| ----------- | -------------------------- |
| A0          | Front Soil Moisture Sensor |
| A1          | End Soil Moisture Sensor   |
| D7          | Relay Module               |
| 5V          | Sensors & Relay            |
| GND         | Common Ground              |

---

## Working Principle

1. The Arduino reads the moisture level from both soil moisture sensors.
2. If **both sensors detect dry soil**, the relay switches ON the water pump.
3. Water is supplied throughout the field.
4. The pump continues running until **both sensors detect sufficient moisture**.
5. Once the desired moisture level is reached at both locations, the relay switches OFF the pump.
6. The process repeats automatically.

---

##  Features

* Automatic irrigation
* Dual soil moisture monitoring
* Water conservation
* Low-cost implementation
* Suitable for medium and large farms
* Easy to expand with additional sensors

---

## Project Structure

```text
Smart-Irrigation-System-Using-Arduino
│
├── Arduino_Code/
│   └── Smart_Irrigation.ino
│
├── Circuit_Diagram/
│
├── Images/
│
├── Documentation/
│
├── README.md
└── LICENSE
```

---

## Future Enhancements

* ESP8266 / ESP32 Wi-Fi integration
* IoT-based remote monitoring
* Mobile application support
* Rain sensor integration
* Temperature and humidity monitoring
* Cloud data logging
* SMS/Email alerts

---

## Applications

* Smart Agriculture
* Home Gardens
* Greenhouses
* Water Management Systems
* Precision Farming


