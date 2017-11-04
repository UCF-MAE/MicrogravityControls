#define indexPin 3
#define outputA 4
#define outputB 5

unsigned long time;
unsigned long time_old;

int counter = 0; 
int aState;
int bState;
int aLastState;
int iState;
int iCount = 0;

void setup() { 
  pinMode (indexPin,INPUT);
  pinMode (outputA,INPUT);
  pinMode (outputB,INPUT);
  
  Serial.begin(250000);
  // Reads the initial state of the outputA
  aLastState = digitalRead(outputA);   
} 
void loop() {
  iState = digitalRead(indexPin);
  aState = digitalRead(outputA);
  bState = digitalRead(outputB);

  if(iState != 0){
    iCount++;
  }
  if (aState != aLastState){     

    if (bState != aState) { 
      counter ++;
    } else {
      counter --;
    }
  } 
  aLastState = aState;

  Serial.print("\nPos: ");
  Serial.print(counter);
  Serial.print("\tA: ");
  Serial.print(aState);
  Serial.print("\tB: ");
  Serial.print(bState);
  Serial.print("\tIndex: ");
  Serial.print(iState);
  Serial.print("\tRevs: ");
  Serial.print(iCount);
}
