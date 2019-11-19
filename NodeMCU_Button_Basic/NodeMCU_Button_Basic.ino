const int button = 0;
int buttonState = 0;

void setup() {
  Serial.begin(115200);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  buttonState = digitalRead(button);
     
     if (buttonState == HIGH) {
        delay(500);
       }
     else {
        Serial.println("Button Pressed");
        delay(500);
       }
}
