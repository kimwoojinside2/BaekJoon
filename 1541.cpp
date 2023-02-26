#include<stdio.h>
#include<iostream>
using namespace std;
int main(void) {
	bool minus = false;//연산자가 -인지 판별하는 변수
	char oper;//연산자 변수
	int result = 0 , second;//계산한 값을 담을 변수 result와 값을 입력받을 변수 second를 초기화
	scanf("%d", &result);//result에 처음 나오는 숫자를 입력받음
	while (1) {//무한루프
		scanf("%c", &oper);//연산자 입력받음
		scanf("%d", &second);//그 다음 숫자를 입력받음
		if (oper == '-')//만약 연산자가 -라면
			minus = true;
		else if (oper != '+')//-가 아니고 +도 아니라면 입력이 잘못된 것이므로 루프 탈출
			break;
		
		if (minus == true)//만약 연산자가 -라면
			result -= second;//앞 수에서 뒤 수를 빼서 result에 한꺼번에 저장
		else if (minus == false)//-가 아니라면 (+ 라면)
			result += second;//앞 수에서 뒤 수를 더해 result에 한꺼번에 저장
	//반복 : 식이 끝날 때 까지
	}
	printf("%d", result);//result에 있는 값 출력
	return 0;
}