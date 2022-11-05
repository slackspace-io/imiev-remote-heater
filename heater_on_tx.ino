#include <RCSwitch.h>

RCSwitch mySwitch = RCSwitch();

void setup() {

 Serial.begin(115200);

 // Transmitter is connected to Arduino Pin #10 
 mySwitch.enableTransmit(2);

 // Optional set pulse length.
 mySwitch.setPulseLength(402);

 // set protocol (default is 1, will work for most outlets)
 // mySwitch.setProtocol(2);

 // Optional set number of transmission repetitions.
 mySwitch.setRepeatTransmit(15);

 pinMode(0,OUTPUT);

}

void loop() {
 mySwitch.send("010101111110101010101000");
 Serial.println("sent");
 digitalWrite(0,LOW);
 delay(2000);
 digitalWrite(0,HIGH);
 delay(8000); 
}
