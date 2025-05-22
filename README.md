# 🔐 ESP32-ESP8266 Fault Injection Attack

This project demonstrates a **hardware-based voltage glitching attack** using an ESP32 to bypass authentication on an ESP8266 by momentarily disturbing its power supply at precise moments — simulating real-world fault injection exploits.

---

## 📷 Architecture

![image](https://github.com/user-attachments/assets/dc3ea403-de9d-4ba6-8a17-c770a9361180)


---

## 🧠 Project Overview

| Component      | Role                       |
|----------------|----------------------------|
| **ESP8266**    | Victim — runs password-check logic |
| **ESP32**      | Attacker — injects glitches via GPIO |
| **Laptop**     | Monitors UART output and controls logic |

---

## 🚀 Features

- ⏱️ **Timing-based glitch trigger**
- ⚡ **Voltage fault injection (software controlled)**
- 🔓 **Bypass authentication logic**
- 📟 **Real-time serial monitoring**
- 🧪 Modular for adding more side-channel or fault-based exploits

---

## 🛠️ Hardware Requirements

- 1 × ESP32 Dev Board
- 1 × ESP8266 NodeMCU (or equivalent)
- Common GND connection
- Jumper Wires

---

## 🔌 Wiring

| ESP32 (Attacker) | ESP8266 (Victim) |
|------------------|------------------|
| GPIO (Glitch)    | VCC / EN pin     |
| GND              | GND              |

**Note**: Use a common ground between both devices.

---

## 🧪 How It Works

1. ESP8266 waits for a password input.
2. ESP32 triggers a power glitch at a precise time.
3. This disrupts a conditional check inside the ESP8266 firmware.
4. If the glitch is timed right, authentication is bypassed.

---

## 🧾 Serial Output

- Victim and attacker both output logs over USB serial.
- Use baud rate: `9600` or `115200` (depending on code)
- Use any serial monitor (Arduino IDE, PuTTY, minicom)

---

## 📜 Disclaimer

> ⚠️ This project is for educational purposes only. Unauthorized tampering with hardware may be illegal or violate terms of use.

---

