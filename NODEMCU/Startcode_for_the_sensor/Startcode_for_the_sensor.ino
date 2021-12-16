/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/DigitalReadSerial
*/

// digital pin 2 has a pushbutton attached to it. Give it a name:
#define LED D1
#define Sensor D2
bool oldState = LOW;



// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(115200);
  // make the pushbutton's pin an input:
  pinMode(Sensor, INPUT);
  pinMode(LED,OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState = digitalRead(Sensor);
  // print out the state of the button:
    if(buttonState == HIGH && oldState == LOW){
      digitalWrite(LED, HIGH);
      Serial.println(buttonState);
      delay(100);
      }
     else{
      digitalWrite(LED, LOW);
      Serial.println(buttonState);
      delay(100);
      }
    oldState = buttonState;
    
}
