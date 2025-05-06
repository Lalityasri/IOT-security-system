# IOT-security-system


## Project overview
This project aims to design and develop an IoT-based home security system that detects unauthorized motion and sends alerts to the user in real time. It enhances home safety by combining sensors, microcontrollers, and cloud-based communication to provide 24/7 monitoring and remote access.

The system uses a PIR (Passive Infrared) sensor to detect motion, and upon detection, triggers an alarm (buzzer) and sends a notification to the user via the internet using platforms like Blynk or IFTTT. This project demonstrates the application of IoT in the field of home security and automation.


## Components and apps used
Hardware Components:
NodeMCU ESP8266 – Microcontroller with built-in Wi-Fi

PIR Motion Sensor – Detects motion in the surveillance area

Buzzer / LED – Used for alert/alarm indication

Breadboard & Jumper Wires – For circuit connections

Power Source – 5V USB or adapter for NodeMCU

Software & Mobile Apps:
Arduino IDE – Programming the NodeMCU

Blynk App / IFTTT / Telegram Bot – Sends alert to user\'s phone

Tinkercad (optional) – For circuit simulation

GitHub – For version control and documentation


## Libraries used for compilities the code
The following libraries are used in the Arduino IDE for successful compilation and uploading of the code to the NodeMCU:

ESP8266WiFi.h – Enables Wi-Fi communication

BlynkSimpleEsp8266.h – Used to connect to the Blynk platform

SimpleTimer.h – For handling timed tasks (non-blocking)

Arduino.h – Core library for Arduino-based development

Install these libraries using Arduino Library Manager or manually from GitHub if needed.


## Project outcome
At the end of this project, the system achieved the following outcomes:

Detects motion using a PIR sensor

Activates an alarm (buzzer or LED) upon intrusion

Sends a real-time notification to the user\'s phone via the internet

Allows remote monitoring through a mobile app

Demonstrates effective integration of sensors, microcontrollers, and IoT cloud services


## Conclusion
The IoT-Based Home Security System successfully shows how low-cost, easily accessible technology can enhance home safety. It integrates motion detection with wireless communication, allowing users to stay informed and responsive to suspicious activity, even while away from home. The project lays the groundwork for future enhancements such as live video feeds, facial recognition, or integration with smart locks.
![Screenshot (53)](https://github.com/user-attachments/assets/ffd9d56b-edb8-4fdd-9148-baa23da0b5fb)

