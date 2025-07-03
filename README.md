# Arduino-led-light
An Arduino project to control RGB LEDs with buttons



# Arduino RGB Button Control

This is an Arduino project that controls RGB LEDs using push buttons.  
Each button controls one LED color (Red, Green, or Blue).  
When a button is pressed, the corresponding LED lights up. When the button is released, the LED turns off.

## 💡 Components Used
- Arduino Uno
- Breadboard
- RGB LEDs (or individual Red, Green, Blue LEDs)
- Push buttons (x3)
- 220Ω or 330Ω resistors (for each LED)
- Jumper wires

## ⚡ Wiring Diagram
| Pin | Connection |
|------|------------|
| 8 | Red Button |
| 9 | Green Button |
| 10 | Blue Button |
| 2 | Red LED  |
| 3 | Green LED  |
| 4 | Blue LED  |
| GND | Common ground for buttons and LEDs |

![Wiring Diagram](لقطة شاشة 2025-06-30 171120.jpg)



## 🔑 Code
```cpp
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
