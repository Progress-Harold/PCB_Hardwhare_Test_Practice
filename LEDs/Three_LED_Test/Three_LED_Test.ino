int redLED = 13;
int blueLED = 8;
int greenLED = 7;

int dit=100;
int dah=500;
int det=1000;


// 3 led circuits

// red 5x fast

// blue really slow
void setup() {
  // put your setup code here, to run once:
  pinMode(redLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(blueLED, HIGH);
  delay(dah);
  digitalWrite(blueLED, LOW);
  delay(dah);

  digitalWrite(greenLED, HIGH);
  delay(det);
  digitalWrite(greenLED, LOW);
  delay(det);
}
