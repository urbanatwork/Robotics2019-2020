// CLEAN SIMPLE LED and POTENTIOMETER CODE
// by UrbanAtWork - Robotics 2019
void setup() {
  pinMode(9, OUTPUT);          // set pin 9 to be output
  Serial.begin(9600);          //turn on Serial Monitor
} // end setup!  ==============

void loop() {
  int value = analogRead(A0);  // read A0 pin
  int brightness = map(value,0,1023,0,255);
  analogWrite(9,brightness);        // give power to pin 9 
  Serial.println(value);       // print out A0 pin value
} // end of loop!  ============
