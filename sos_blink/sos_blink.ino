void shortPulse(int pin, int delayTime) {
    digitalWrite(pin, HIGH);
    delay(delayTime);
    digitalWrite(pin, LOW);
    delay(delayTime);
  }

void longPulse(int pin, int delayTime) {
    digitalWrite(pin, HIGH);
    delay(delayTime * 3);
    digitalWrite(pin, LOW);
    delay(delayTime);
  }

int i;
const int ledPin = 13;
const int delayTime = 250;

void setup() {

  pinMode(ledPin, OUTPUT);
}

void loop() {
  
  for (i = 0; i < 3; i++) {
    shortPulse(ledPin, delayTime);
  }
  for (i = 0; i < 3; i++) {
    longPulse(ledPin, delayTime);
  }
  for (i = 0; i < 3; i++) {
    shortPulse(ledPin, delayTime);
  }
  delay(1000);
}