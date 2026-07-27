# Arduino Bluetooth RC Car 🚗

A fully functional Arduino-based Bluetooth RC Car controlled using an Android smartphone.

---

## Features

- Bluetooth Controlled
- Forward
- Backward
- Left
- Right
- Stop
- Adjustable Speed
- Works with HC-05 Bluetooth Module
- Easy to Build
- Beginner Friendly

---

## Hardware Used

| Component | Quantity |
|------------|----------|
| Arduino UNO | 1 |
| HC-05 Bluetooth Module | 1 |
| L298N Motor Driver | 1 |
| TT DC Gear Motors | 4 |
| Robot Chassis | 1 |
| Wheels | 4 |
| 18650 Battery Holder | 1 |
| 18650 Batteries | 2 |
| Jumper Wires | As Required |

---

# Wiring

## L298N

| Arduino | L298N |
|----------|--------|
| D5 | ENA |
| D6 | ENB |
| D8 | IN1 |
| D9 | IN2 |
| D10 | IN3 |
| D11 | IN4 |

---

## HC-05

| HC05 | Arduino |
|------|----------|
| VCC | 5V |
| GND | GND |
| TX | D2 |
| RX | D3 |

---

## Motors

OUT1 -> Left Front

OUT2 -> Left Rear

OUT3 -> Right Front

OUT4 -> Right Rear

---

## Pin Mapping

```cpp
#define ENA 5
#define ENB 6

#define IN1 8
#define IN2 9
#define IN3 10
#define IN4 11

#define BT_RX 2
#define BT_TX 3
```

---

# Bluetooth Commands

| Button | Command |
|----------|---------|
| Forward | F |
| Backward | B |
| Left | L |
| Right | R |
| Stop | S |
| Speed Low | 1 |
| Speed Medium | 2 |
| Speed High | 3 |

---

# Bluetooth App

Recommended Apps

- Arduino Bluetooth Controller
- Bluetooth RC Controller
- Bluetooth Electronics

Baud Rate

```
9600
```

---

# Upload Steps

1. Install Arduino IDE
2. Install SoftwareSerial Library (Already Included)
3. Connect Arduino UNO
4. Select COM Port
5. Upload Bluetooth_RC_Car.ino
6. Pair HC-05
7. Open Bluetooth Controller App
8. Connect
9. Drive

---

# Folder Structure

```
Arduino-Bluetooth-RC-Car
│
├── code
│   └── Bluetooth_RC_Car.ino
└── README.md
```

---

# Future Improvements

- Obstacle Avoidance
- Line Following
- Voice Control
- OLED Display
- Ultrasonic Sensor
- Servo Steering
- Mobile Joystick
- Battery Monitoring
