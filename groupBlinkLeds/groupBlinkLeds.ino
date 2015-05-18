int ledPin7 = 7;
int ledPin6 = 6;
int ledPin5 = 5;
int ledPin4 = 4;
int ledPin3 = 3;
int ledPin2 = 2;

void setup() {
    pinMode(ledPin7, OUTPUT);
    pinMode(ledPin6, OUTPUT);
    pinMode(ledPin5, OUTPUT);
    pinMode(ledPin4, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(ledPin2, OUTPUT);
}

void loop() {
    digitalWrite(ledPin7, HIGH);
    digitalWrite(ledPin6, HIGH);
    digitalWrite(ledPin5, HIGH);
    digitalWrite(ledPin4, HIGH);
    digitalWrite(ledPin3, HIGH);    
    digitalWrite(ledPin2, HIGH);
        delay(250);
    digitalWrite(ledPin7, LOW);
    digitalWrite(ledPin6, LOW);
    digitalWrite(ledPin5, LOW);
    digitalWrite(ledPin4, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin2, LOW);
      delay(250);
}

