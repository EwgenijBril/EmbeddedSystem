int ledPin = 11;
void setup() {
  pinMode(ledPin, OUTPUT);

}

void loop() {
   digitalWrite(ledPin, HIGH);
  delay(1000); // Wait 1 second
  
  // Turn off the LED
  digitalWrite(ledPin, LOW);
  delay(1000); // Wait 1 second

}