int ledPin = 9;

void setup() {
  // setup code here, to run once
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // main code here, to run repeatedly
  digitalWrite(ledPin, HIGH);
  delay(3000);
  digitalWrite(ledPin, LOW);
  delay(3000);
}
