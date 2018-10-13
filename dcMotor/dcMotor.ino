const int motorPin = 9;     
void setup()
{pinMode(motorPin, OUTPUT);    
  Serial.begin(9600);             
}


void loop()
{
     spiningMotor(255);          
}

void spiningMotor(int speed)
{     
  analogWrite(motorPin, speed);         //speed만큼으로 모터 돌리기
 }
