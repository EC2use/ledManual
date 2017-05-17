const int analogPin=A0;
const int ledCount=10;
const int speed=50;
int ledPins[]={2,3,4,5,6,7,8,9,10,11};
void setup() {
  // put your setup code here, to run once:
      for(int thisLed=0;thisLed<ledCount;thisLed++){
        pinMode(ledPins[thisLed],OUTPUT);
        }
}

void loop() {
  // put your main code here, to run repeatedly:
      int sensorReading=analogRead(analogPin);
      int ledLevel=map(sensorReading,0,1023,0,ledCount);
      switch(ledLevel)
      {
      case 0:
      case 9:
       digitalWrite(ledPins[0],HIGH);
       digitalWrite(ledPins[1],LOW);
       digitalWrite(ledPins[2],LOW);
       digitalWrite(ledPins[3],LOW);
       digitalWrite(ledPins[4],LOW);
       digitalWrite(ledPins[5],LOW);
       digitalWrite(ledPins[6],LOW);
       digitalWrite(ledPins[7],LOW);
       digitalWrite(ledPins[8],LOW);
       digitalWrite(ledPins[9],HIGH); 
       break;
      case 1:
     case 8:
      digitalWrite(ledPins[0],LOW);
       digitalWrite(ledPins[1],HIGH);
       digitalWrite(ledPins[2],LOW);
       digitalWrite(ledPins[3],LOW);
       digitalWrite(ledPins[4],LOW);
       digitalWrite(ledPins[5],LOW);
       digitalWrite(ledPins[6],LOW);
       digitalWrite(ledPins[7],LOW);
       digitalWrite(ledPins[8],HIGH);
       digitalWrite(ledPins[9],LOW); 
       break;
        case 2:
        case 7:
      digitalWrite(ledPins[0],LOW);
       digitalWrite(ledPins[1],LOW);
       digitalWrite(ledPins[2],HIGH);
       digitalWrite(ledPins[3],LOW);
       digitalWrite(ledPins[4],LOW);
       digitalWrite(ledPins[5],LOW);
       digitalWrite(ledPins[6],LOW);
       digitalWrite(ledPins[7],HIGH);
       digitalWrite(ledPins[8],LOW);
       digitalWrite(ledPins[9],LOW); 
       break;
        case 3:
        case 6:
      digitalWrite(ledPins[0],LOW);
       digitalWrite(ledPins[1],LOW);
       digitalWrite(ledPins[2],LOW);
       digitalWrite(ledPins[3],HIGH);
       digitalWrite(ledPins[4],LOW);
       digitalWrite(ledPins[5],LOW);
       digitalWrite(ledPins[6],HIGH);
       digitalWrite(ledPins[7],LOW);
       digitalWrite(ledPins[8],LOW);
       digitalWrite(ledPins[9],LOW); 
       break;
       case 4:
       case 5:
      digitalWrite(ledPins[0],LOW);
       digitalWrite(ledPins[1],LOW);
       digitalWrite(ledPins[2],LOW);
       digitalWrite(ledPins[3],LOW);
       digitalWrite(ledPins[4],HIGH);
       digitalWrite(ledPins[5],HIGH);
       digitalWrite(ledPins[6],LOW);
       digitalWrite(ledPins[7],LOW);
       digitalWrite(ledPins[8],LOW);
       digitalWrite(ledPins[9],LOW); 
       break;
 
      }
       

           
       
  
}
