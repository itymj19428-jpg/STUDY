#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

int LED_R = 3;  /*청색 LED핀*/
int LED_G = 5;  /*녹색 LED핀*/
int LED_B = 6;  /*적색 LED핀*/

void setup()  /*초기화*/
{
  pinMode(LED_R, OUTPUT);  /*적색 LED핀 출력 설정*/
  pinMode(LED_G, OUTPUT);  /*녹색 LED핀 출력 설정*/
  pinMode(LED_B, OUTPUT);  /*청색 LED핀 출력 설정*/
}

void rgb_on(int R, int G, int B, int ontime)  /*rgb_on(적색농도, 녹색농도, 청색농도, 유지 시간)*/
{
  analogWrite(LED_R, R);  /*적색 LED핀에 PWM 신호 출력*/
  analogWrite(LED_G, G);  /*녹색 LED핀에 PWM 신호 출력*/
  analogWrite(LED_B, B);  /*청색 LED핀에 PWM 신호 출력*/
  delay(ontime);  /*입력한 유지시간 만큼 지속*/
}

void rgb_off()  /*LED 꺼짐*/
{
  analogWrite(LED_R, 0);  /*적색 LED 핀에 출력 0*/
  analogWrite(LED_G, 0);  /*녹색 LED 핀에 출력 0*/
  analogWrite(LED_B, 0);  /*청색 LED 핀에 출력 0*/
}

void loop()  /*무한루프*/
{
  rgb_on(255, 0, 0, 1000);  /*적색, 2초간 유지*/
  rgb_on(255, 5, 0, 1000);  /*주황색, 2초간 유지*/
  rgb_on(255, 50, 0, 1000);  /*노란색, 2초간 유지*/
  rgb_on(0, 100, 0, 1000);  /*녹색, 2초간 유지*/
  rgb_on(0, 0, 100, 1000);  /*청색, 2초간 유지*/
  rgb_on(0, 0, 50, 1000);  /*남색, 2초간 유지*/
  rgb_on(150, 10, 120, 1000);  /*보라색, 2초간 유지*/
}