#include <Arduino.h>
#include <SoftwareSerial.h>

#define __TX_SOFTWARE__ 9
#define __RX_SOFTWARE__ 10

#define __BAUD_RATE__ 9600
#define __BAUD_SOFTWARE__ 9600

SoftwareSerial mySerial(__RX_SOFTWARE__, __TX_SOFTWARE__); // RX, TX

void setup() {
    Serial.begin(__BAUD_RATE__);
    mySerial.begin(__BAUD_SOFTWARE__);
}

void loop() {
    if (mySerial.available()) {
        Serial.write(mySerial.read());
    }
}
