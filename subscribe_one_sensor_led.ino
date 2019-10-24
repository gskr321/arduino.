#include "config.h"
// set up the 'counter' feed
AdafruitIO_Feed *led = io.feed("led");
int ledpin=5;
int threshold=120;

void setup() {
pinMode(ledpin,OUTPUT);
  


  led->get();

  // we are connected
  Serial.println("Hi this is avinash");
  Serial.println(io.statusText());

}

void loop() {

  
  io.run();

 
}


void handleMessage(AdafruitIO_Data *data) {

  Serial.print("got <- ");
  Serial.println(data->value());
  if (data->toInt() == 1)
  {
    digitalWrite(5,HIGH);
  }
  else
  {
    digitalWrite(5,LOW);
  }
  

}
