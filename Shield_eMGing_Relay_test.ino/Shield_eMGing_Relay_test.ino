/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO 
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN takes care 
  of use the correct LED pin whatever is the board used.
  If you want to know what pin the on-board LED is connected to on your Arduino model, check
  the Technical Specs of your board  at https://www.arduino.cc/en/Main/Products
  
  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
  
  modified 2 Sep 2016
  by Arturo Guadalupi
*/


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

  while (!Serial);
  Serial.begin(115200);
  Serial.println("Shield eMGing RELAY Test!");
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(3, LOW);   // turn the LED on (LOW is the voltage level)
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  Serial.println(F("encendio RLY 1" ));
  delay(2000);                       // wait for a second

  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  Serial.println(F("TODOS LOS RLY OFF" ));
  delay(2000);  
  
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  Serial.println(F("encendio RLY 2" ));
  delay(2000);   

  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  Serial.println(F("TODOS LOS RLY OFF" ));
  delay(2000);  
  
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  Serial.println(F("encendio RLY 3" ));
  delay(2000); 

  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  Serial.println(F("TODOS LOS RLY OFF" ));
  delay(2000);  
  
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  Serial.println(F("encendio RLY 4" ));
  delay(2000);  

  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  Serial.println(F("TODOS LOS RLY OFF" ));
  delay(2000);                       

  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW); 
  digitalWrite(6, LOW);
  Serial.println(F("TODOS LOS RLY ON" ));
  delay(2000);  

  // turn the LED off by making the voltage HIGH
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  Serial.println(F("TODOS LOS RLY OFF" ));
  delay(2000);  
}
