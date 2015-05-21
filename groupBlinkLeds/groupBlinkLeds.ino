// Arduioui
// Group of LEDs blink every 3 seconds during 500 ms

int firstPinNumber = 2;
int lastPinNumber = 7;

void pinModeGroup(int startn, int endn, int value) {
  for (int i = startn; i <= endn; i++) {
    pinMode(i, value);
  }
}

void digitalWriteGroup(int startn, int endn, int value) {
  for (int i = startn; i <= endn; i++) {
    digitalWrite(i, value);
  }
}

void setup() {
  // setup code here, to run once

  pinModeGroup(firstPinNumber, lastPinNumber, OUTPUT);
}

void loop() {
  // main code here, to run repeatedly

  digitalWriteGroup(firstPinNumber, lastPinNumber, HIGH);
  delay(250);

  digitalWriteGroup(firstPinNumber, lastPinNumber, LOW);
  delay(3000);
}
