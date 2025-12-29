int ledPin = 11;
int ledPin2 = 12;
int ledPin3 = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);

}

void loop() {
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  delay(2000); // Wait 2 seconds

  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  delay(2000); // Wait 2 seconds
  
  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, HIGH);
  delay(2000); // Wait 2 seconds

  digitalWrite(ledPin, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  delay(2000); // Wait 2 seconds
  
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  delay(2000); // Wait 2 seconds
  
}