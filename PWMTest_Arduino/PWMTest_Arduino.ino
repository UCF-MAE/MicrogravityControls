int reading;
int speed_var;

void setup() {
     // declare the ledPin as an OUTPUT:
     pinMode(6, OUTPUT);
     pinMode(2, OUTPUT);
     
     Serial.begin(9600);
}

void loop() {
  analogWrite(6, 0);
  delay(1000);
  for(speed_var=0; speed_var < 255; speed_var++){
     analogWrite(6, speed_var);
     delay(50);
  }
  analogWrite(6, 255);
  delay(1000);
}
