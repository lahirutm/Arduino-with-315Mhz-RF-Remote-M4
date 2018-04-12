
int btnA = 4;
int btnB = 5;
int btnC = 6;
int btnD = 7;

int pin1 = 8; // For LED 1
int pin2 = 9; // Foe LED 2

void setup() {
  // set up buttons
  pinMode(btnA, INPUT);
  pinMode(btnB, INPUT);
  pinMode(btnC, INPUT);
  pinMode(btnD, INPUT);

  // set up output pins
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
}

void loop() {
  if (digitalRead(btnA) == HIGH){
    Serial.println("button A pressed");
    digitalWrite(pin1, HIGH); // turn the LED_1 ON (HIGH is the voltage level)
    delay(500);           
  }
  if (digitalRead(btnB) == HIGH){
    Serial.println("button B pressed");
    digitalWrite(pin1, LOW); // turn the LED_1 OFF (LOW is the voltage level)
    delay(500); 
  }
  if (digitalRead(btnC) == HIGH){
    Serial.println("button C pressed");
    digitalWrite(pin2, HIGH); // turn the LED_2 ON (HIGH is the voltage level)
    delay(500);
  } 
  if (digitalRead(btnD) == HIGH){
    Serial.println("button D pressed");
    digitalWrite(pin2, LOW); // turn the LED_2 OFF (HIGH is the voltage level)
    delay(500);
  }
}