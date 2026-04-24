# Motion-detector-using-PIR-sensor-IOT-
This project uses an ESP32, PIR sensor, and servo motor to detect motion and automatically lock a mechanism. When motion is detected, a notification is sent to the phone via the Blynk app.
This project is an IoT-based motion detection and automatic locking system using an ESP32, PIR sensor, servo motor, and the Blynk platform. The PIR (Passive Infrared) sensor detects motion by sensing changes in infrared radiation caused by human movement.

When motion is detected, the PIR sensor sends a HIGH signal to the ESP32. The ESP32 processes this input and rotates the servo motor to a locked position, simulating a locking mechanism. At the same time, the system sends a real-time notification to the user’s smartphone through the Blynk app, alerting them about the detected motion.

When no motion is detected, the servo returns to its original (unlocked) position. The system continuously monitors the surroundings, making it suitable for basic security applications.

This project demonstrates important IoT concepts such as motion sensing, real-time alerts, remote monitoring, and actuator control. It can be used for home security, smart door locking systems, and automation applications.

📝 Short Notes
👁️ PIR detects motion
🔒 Servo acts as lock
📱 Sends alert to phone
📡 Works using Wi-Fi
🛡️ Basic security system
