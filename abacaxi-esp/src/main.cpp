#include <Arduino.h>
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


// blynk token 
char auth[] = "Tsq5XCukL8odYe8gRzAmapm4g7pjc_1v";


// wireless 
char ssid[] = "Oficina de Bike";
char pass[] = "";


void setup() {

pinMode(13, OUTPUT);


  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);

}

BLYNK_WRITE(1) // At global scope (not inside of the function)
{
    
    int i=param.asInt();
    if (i==1) 
    {
        int ROCK_DOIDO = 200;
        digitalWrite(13, HIGH);
        delay(ROCK_DOIDO);
        digitalWrite(13,LOW);
        delay(ROCK_DOIDO);

    }
    else 
    {
        digitalWrite(13, LOW);

    }
}

void loop() {

  Blynk.run();
  
  }
