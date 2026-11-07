#include <Arduino.h>
#include <ESP32Servo.h>  // ESP32-compatible servo library

#define SERVO_A_PIN 14
#define SERVO_B_PIN 27
#define RAIN_SENSOR_PIN 33

Servo servoA;
Servo servoB;

void setup() {
  Serial.begin(115200);

  // Attach the servos
  servoA.attach(SERVO_A_PIN);
  servoB.attach(SERVO_B_PIN);

  pinMode(RAIN_SENSOR_PIN, INPUT);

  // Start in center
  servoA.write(90);
  servoB.write(90);
}

void loop() {
  int rainDetected = digitalRead(RAIN_SENSOR_PIN);

  if (rainDetected == LOW) {
    Serial.println("Rain detected!");
    servoA.write(0);
    servoB.write(180);
  } else {
    Serial.println("No rain.");
    servoA.write(90);
    servoB.write(90);
  }

  delay(500);
}
