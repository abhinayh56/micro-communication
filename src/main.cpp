#include <Arduino.h>

void setup(){
    Serial.begin(115200);
}

void loop(){
    Serial.println((float)millis()/1000.0);
    delay(100);
}