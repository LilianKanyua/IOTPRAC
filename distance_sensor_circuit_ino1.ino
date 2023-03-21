// C++ code
 int signalPin= 5;
 int triggerPin= 6;
 int LEDPin= 13;
long signal, inches, centimeters;

void setup() {
Serial.begin(9600);
}
void loop() {
pinMode (signalPin, INPUT);
pinMode (triggerPin, OUTPUT);
pinMode (LEDPin, OUTPUT);
  
  
digitalWrite(triggerPin, LOW);
delayMicroseconds(2);
digitalWrite(triggerPin, HIGH);
delayMicroseconds(10);
digitalWrite(triggerPin, LOW);

signal= pulseIn(signalPin, HIGH);
  
  inches= signal/148;
centimeters= inches * 2.54; 

Serial.print(inches);
Serial.print("in, ");
Serial.print(centimeters);
Serial.print("cm");
Serial.println();
  delay(500); 

if (inches < 3){
digitalWrite(LEDPin, HIGH);
delay(10000);
}

}
