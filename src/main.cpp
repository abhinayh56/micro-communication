#include <Arduino.h>
#include "Datastruct.h"

struct Tx_Rx_packet pkt;

void setup(){
    Serial.begin(115200);
}

void loop(){
    Serial.print((float)millis()/1000.0);
    Serial.print('\t');
    Serial.println(sizeof(pkt));
    delay(100);
}