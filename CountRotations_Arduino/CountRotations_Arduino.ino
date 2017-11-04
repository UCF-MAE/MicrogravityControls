#define indexPin 3

int iState;
int iCount = 0;

void setup() {
 pinMode (indexPin,INPUT);
 Serial.begin(250000);
} 
void loop() {
 iState = digitalRead(indexPin);
 if(iState != 0){
   iCount++;
 }
 Serial.println(micros());
}
