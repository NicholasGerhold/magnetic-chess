#include <Wire.h>

#define SERIAL_BAUD 115200
#define SLAVE_ADDRESS 0x01

void on_request(void);
void on_receive(int count);

void setup(void) {
    Wire.begin(SLAVE_ADDRESS);
    Wire.onRequest(on_request);
    Wire.onReceive(on_receive);
    Serial.begin(SERIAL_BAUD);
}

void loop(void) {
    if (Serial.available()) {
    }
}

void on_request(void) {
}

void on_receive(int count) {
}
