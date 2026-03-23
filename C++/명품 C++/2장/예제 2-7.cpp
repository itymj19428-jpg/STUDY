#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	cout << "문자열을 입력하세요>>";
	char line[50];  //영문 50개의 글자까지 가능한 문자열 저장
	cin.getline(line, 50);  //한 라인 읽기

	int i = 0;
	int count = 0;

	while (line[i] != '\0')  //널문자를 만날때 까지 반복
	{
		if (line[i] == 'e')
		{
			count++;  //카운트 증가
		}
		i++;  //다음 문자에 대한 인덱스
	}
	cout << "총글자수 " << i << ", 문자 e의 개수는 " << count << "개" << endl;

}