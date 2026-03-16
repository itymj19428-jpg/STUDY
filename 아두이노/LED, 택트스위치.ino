#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

int led0_Pin = 2;  /*1번째 LED 핀*/
int button0_Pin = 3;  /*1번째 버튼 핀*/

void setup()  /*초기화*/
{
  pinMode(led0_Pin, OUTPUT);  /*1번째 LED 핀출력 포트 설정*/
  pinMode(button0_Pin, INPUT);  /*1번째 버튼 핀입력 포트 설정*/
}

/*스위치를 누를시에 LED 켜기*/
void loop()
{
  if(digitalRead(button0_Pin) == LOW)  /*1번째 버튼이 눌렸을 때*/
  {
    digitalWrite(led0_Pin, HIGH);  /*1번째 LED ON*/
  }
  else  /*1번째 버튼이 눌리지 않았을 때*/
  {
    digitalWrite(led0_Pin, LOW);  /*1번째 LED OFF*/
  }
}
