/*
  Proyecto de prueba eMGing para test de Shield eMGing Relay

  Varia uno por uno los Relays para testeo y luego enciende todos juntos.

 Nota:
 Estan seleccionados por default los JUMPERS para los pines 3,4,5 y 6 por lo 
 que de necesitar cambiarlo, hacerlo en la designación ( #define ) abajo.
 
 consultas: info@eMGing.com.ar
 web: www.eMGing.com.ar
 FB: @eMGing.com.ar
 Youtube: https://goo.gl/5QtmC8
 
*/

#define RELAY1 3     //3 ó 10
#define RELAY2 4     //4 ó 11
#define RELAY3 5     //5 ó 12
#define RELAY4 6     //6 ó 13


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);
  pinMode(RELAY4, OUTPUT);

  while (!Serial);
  Serial.begin(115200);
  Serial.println("Shield eMGing RELAY Test!");
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(RELAY1, LOW);   // turn the LED on (LOW is the voltage level)
  digitalWrite(RELAY2, HIGH);
  digitalWrite(RELAY3, HIGH);
  digitalWrite(RELAY4, HIGH);
  Serial.println(F("encendio RLY 1" ));
  delay(2000);                       // wait for a second

  digitalWrite(RELAY1, HIGH);
  Serial.println(F("TODOS LOS RLY OFF" ));
  delay(2000);  
  
  digitalWrite(RELAY2, LOW);
  Serial.println(F("encendio RLY 2" ));
  delay(2000);   

  digitalWrite(RELAY2, HIGH);
  Serial.println(F("TODOS LOS RLY OFF" ));
  delay(2000);  

  digitalWrite(RELAY3, LOW);
  Serial.println(F("encendio RLY 3" ));
  delay(2000); 

  digitalWrite(RELAY3, HIGH);
  Serial.println(F("TODOS LOS RLY OFF" ));
  delay(2000);  
  
  digitalWrite(RELAY4, LOW);
  Serial.println(F("encendio RLY 4" ));
  delay(2000);  

  digitalWrite(RELAY4, HIGH);
  Serial.println(F("TODOS LOS RLY OFF" ));
  delay(2000);                       

  digitalWrite(RELAY1, LOW);
  digitalWrite(RELAY2, LOW);
  digitalWrite(RELAY3, LOW); 
  digitalWrite(RELAY4, LOW);
  Serial.println(F("TODOS LOS RLY ON" ));
  delay(2000);  

  // turn the LED off by making the voltage HIGH
  digitalWrite(RELAY1, HIGH);
  digitalWrite(RELAY2, HIGH);
  digitalWrite(RELAY3, HIGH);
  digitalWrite(RELAY4, HIGH);
  Serial.println(F("TODOS LOS RLY OFF" ));
  delay(2000);  
}