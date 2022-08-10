#include <stdio.h>

void main()
{
	/*
		변수명 규칙
		1. 변수명은 대소문자 구분
		2. 변수명은 중복불가
		3. 변수명은 예약어로 정의불가
		4. 변수명은 숫자로 시작불가
		5. 변수명에 공백불가
		6. 변수명 "$, _"만 특수문자로 사용가능

		* 변수는 변할 수 있는 메모리 공간
		 
		상수 ( const ~ )
		* 프로그램이 실행되는 동안 값이 고정되어 잇는 메모리 공간 
		* 리터럴 상수 : 메모리 공간을 가지고 있지 않은 상수
		* 심볼릭 상수 : 메모리 공간을 가지고 있는 상수

	*/
	
	int a = 10;
	char b = 'A';
	float c = 5.25;

	printf("a의 값 : %d\n", a);
	printf("b의 값 : %c\n", b);
	printf("c의 값 : %f\n", c);

	a += 20;
	b = 'G';
	c -= 9.5;
	int temp = (10 + 6) * 4 - 2; // 연산자의 우선 순위

	printf("a의 값 : %d \nb의 값 : %c \nc의 값 : %f\n", a,b,c);
	printf("temp의 값 : %d\n", temp);


	const int value = 8;
	printf("value의 값 : %d", value);
	// vlaue = 20; value는 컴파일 시점에 값이 고정됨 (8)
}
