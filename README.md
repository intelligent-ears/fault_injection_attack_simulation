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
🔧 Circuit
![WhatsApp Image 2025-05-23 at 00 50 00_bfc43788](https://github.com/user-attachments/assets/056beb58-e022-4d59-8fb1-afb596d407ef)
**Basic Setup:**
- ESP32 controls the glitch via a GPIO pin
- That pin is connected to the **EN pin** or **VCC** line of the ESP8266 (use a series resistor for safety)
- Common ground between ESP32 and ESP8266
- Serial connections for monitoring both boards independently

---
## 🔄 Working
https://youtu.be/4pfjF2fE4OM
1. **Startup:**
   - ESP8266 initializes and waits for a password over Serial
   - ESP32 is idle until triggered

2. **Trigger:**
   - ESP8266 reaches password check stage
   - ESP32 either listens for a specific signal or delays for a precise window

3. **Fault Injection:**
   - ESP32 sends a fast LOW pulse to the EN or VCC of ESP8266
   - This temporarily browns out the CPU without a full reboot

4. **Result:**
   - If the glitch is timed right, ESP8266 skips or corrupts the password check logic
   - Serial shows access granted without correct password
---

## 🧾 Serial Output

- Victim and attacker both output logs over USB serial.
- Use baud rate: `9600` or `115200` (depending on code)
- Use any serial monitor (Arduino IDE, PuTTY, minicom)

---

## 📜 Disclaimer

> ⚠️ This project is for educational purposes only. Unauthorized tampering with hardware may be illegal or violate terms of use.

---

