
#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <Servo.h>

// Blynk credentials
char auth[] = "YOUR_BLYNK_AUTH_TOKEN";
char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";

int pirPin = 4;   // PIR sensor
Servo myServo;

bool alertSent = false;

void setup() {
  Serial.begin(9600);

  pinMode(pirPin, INPUT);
  myServo.attach(13);
  myServo.write(0); // Unlocked position

  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();

  int motion = digitalRead(pirPin);

  Serial.print("Motion: ");
  Serial.println(motion);

  if (motion == HIGH) {
    Serial.println("Motion Detected!");

    myServo.write(90); // Lock position

    if (!alertSent) {
      Blynk.logEvent("motion_alert", "🚨 Motion Detected! Lock Activated");
      alertSent = true;
    }
  } else {
    myServo.write(0); // Unlock

    alertSent = false;
  }

  delay(200);
}
