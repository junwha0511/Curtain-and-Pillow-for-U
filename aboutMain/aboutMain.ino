#include <Servo.h>
Servo servo;
int ButtonPin1 = 12;
int enablePin = 11;
int in1Pin = 10;
int in2Pin = 9;
int servoPin = 10;
void setup() {
  //모터 드라이버에 사용되는 핀
  pinMode(in1Pin, OUTPUT);
  pinMode(in2Pin, OUTPUT);
  pinMode(enablePin, OUTPUT);
  //버튼에 사용되는 핀
  pinMode(ButtonPin1, INPUT);
  pinMode(servoPin,OUTPUT);

  Serial.begin(115200);
}

void loop() {
  //버튼 클릭 여부
  int button1State;
  button1State = digitalRead(ButtonPin1);
  if (button1State == LOW) {
    Serial.print(1);
    servo.attach(servoPin);
    servo.write(90);
    delay(1000);
    servo.write(270);
    //한번 작동하면 8시간 동안 작동하지 않음
    //delay(1000 * 60 * 60 * 8);
  }
}
