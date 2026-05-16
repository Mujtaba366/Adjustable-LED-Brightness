int led = 10;

int increaseButton = 9;
int decreaseButton = 6;

int brightness = 128;

void setup() {

  Serial.begin(9600);

  pinMode(led, OUTPUT);

  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);

  digitalWrite(7, LOW);
  digitalWrite(4, LOW);
  pinMode(increaseButton, INPUT_PULLUP);
  pinMode(decreaseButton, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(increaseButton) == LOW) {
    brightness += 15;
    Serial.println("Increase button pressed");
    delay(150);
  }

  if (digitalRead(decreaseButton) == LOW) {
    brightness -= 15;
    Serial.println("Decrease button pressed");
    delay(150);
  }

  brightness = constrain(brightness, 0, 255);

  float corrected = pow(brightness / 255.0, 2.2) * 255;

  analogWrite(led, 255 - (int)corrected);
}
