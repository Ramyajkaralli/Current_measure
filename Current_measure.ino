// These constants won't change.  They're used to give names
// to the pins used:
const int analogInPin = A0;  // Analog input pin that the potentiometer is attached to

int Value = 0;        // value read from the pot
float outputValue = 0;        // value output to the PWM (analog out)

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  Value = analogRead(analogInPin);
  // map it to the range of the analog out:
  outputValue = Value*0.005;
  // change the analog out value:

  // print the results to the serial monitor:
  Serial.print("Value = ");
  Serial.print(Value); //RAW value from analog read :)
  Serial.print("\t output = ");
  Serial.println(outputValue,3);

  // wait 2 milliseconds before the next loop
  // for the analog-to-digital converter to settle
  // after the last reading:
  delay(200);
}
