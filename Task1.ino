const int redButton = 8;// the Button for red light
const int greenButton = 9; // the Button for green light
const int blueButton = 10;// the Button for blue light

//the LEDs 
const int redLED = 2;
const int greenLED = 3;
const int blueLED = 4;

void setup() {
  pinMode(redButton, INPUT_PULLUP);
  pinMode(greenButton, INPUT_PULLUP);
  pinMode(blueButton, INPUT_PULLUP);

  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);

}

void loop() {
  if (digitalRead(redButton) == LOW) {
    digitalWrite(redLED, LOW);
  } else {
    digitalWrite(redLED, HIGH);
  }

  if (digitalRead(greenButton) == LOW) {
    digitalWrite(greenLED, LOW);
  } else {
    digitalWrite(greenLED, HIGH);
  }

  if (digitalRead(blueButton) == LOW) {
    digitalWrite(blueLED, LOW);
  } else {
    digitalWrite(blueLED, HIGH);
  }
}
