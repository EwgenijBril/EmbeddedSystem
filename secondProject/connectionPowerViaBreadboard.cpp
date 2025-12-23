int ledPin = 2;
int buttonPin = 7;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    digitalWrite(ledPin, HIGH);
    delay(6000);
  } else {
    digitalWrite(ledPin, LOW);
  }
}