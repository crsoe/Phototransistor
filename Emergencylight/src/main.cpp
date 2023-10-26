#include <Arduino.h>

const int LEDPin = 10;
const int SensorPin = A0;

const int baseline = 20;

int Sensor = 0;


void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(LEDPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LEDPin, LOW);
Sensor = analogRead(SensorPin);

Serial.print("sensor value: ");
Serial.println(Sensor);

if(Sensor>baseline)
  Serial.println("Lampa Släckt");
  else{
  digitalWrite(LEDPin, HIGH);
  Serial.println("Lampa tänd");
  }
delay(1000);
}