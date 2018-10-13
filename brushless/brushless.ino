int enablePin = 11;
int in1Pin = 10;
int in2Pin = 9;
void setup() {
  pinMode(in1Pin, OUTPUT);
  pinMode(in2Pin, OUTPUT);
  pinMode(enablePin, OUTPUT);
}

void loop() {
  int speed = 100;  
  setMotor(speed, true);
  delay(500);
  setMotor(speed, false);
  delay(500);
}

void setMotor(int speed, boolean reverse)
{
  analogWrite(enablePin, speed);
  digitalWrite(in1Pin, ! reverse);
  digitalWrite(in2Pin, reverse);
}
