int ledPin = 11;
int ledPin2 = 9;
int ledPin3 = 6;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);


}

void loop() {
   digitalWrite(ledPin, HIGH);
   delay(1000);
   digitalWrite(ledPin2, HIGH);
   delay(2000);
   digitalWrite(ledPin3, HIGH);
  delay(3000); // Wait 1 second
  
  // Turn off the LEDs
  digitalWrite(ledPin, LOW);
  delay(1000);
  digitalWrite(ledPin2, LOW);
  delay(2000);
  digitalWrite(ledPin3, LOW);
  delay(3000); // Wait 1 second

}