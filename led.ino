int ledPin = 13;
int ledPin2 = 11;
int buttonPin = 4;

void setup() {
 pinMode(ledPin, OUTPUT);
  pinMode(ledPin2 , OUTPUT);
 pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
 if (digitalRead(buttonPin) == LOW) {
 digitalWrite(ledPin, HIGH);
 digitalWrite(ledPin2, LOW);


 }
 else {
 digitalWrite(ledPin, LOW);
 digitalWrite(ledPin2, HIGH);

 }
}
