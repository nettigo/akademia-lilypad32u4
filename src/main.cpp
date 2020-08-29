#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN,OUTPUT);
  Serial.begin(115200);
    while (!Serial)
    {
        // do nothing
    } ;
}
bool status = false;
void loop() {
  // put your main code here, to run repeatedly:
  status = ! status;
  digitalWrite(LED_BUILTIN, status);
  Serial.print("PING ");
  Serial.println(LED_BUILTIN);
  delay(1000);
}