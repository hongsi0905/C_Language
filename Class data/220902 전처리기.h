#pragma once
#include <stdio.h> // < > 라이브러리 헤더 파일을 가져올 때 사용
#include "Calculator.h" // "" 사용자 정의 헤더 파일을 가져올 때 사용

//매크로
/*
	매크로에서는 ;가 필요하지 않다.
	매크로와 매크로 함수는 자료형이 없다. > 메모리 공간이 확보되지 않는다.
	매크로 변수는 상수이고, 메모리 공간이 없기 때문에 값을 변경할 수 없다.
	단점 : 문제가 생겼을 때 디버깅이 되지 않는다.
*/
#define PI 3.14
#define Solution(x, y) x * y
#define ANDROID 1
#define IOS 0

// 구조체
/*
	구조체를 선언하기 전에
	구조체는 메모리 공간이 생성되지 않으므로
	구조체 내부에 있는 데이터를 초기화할 수 없다.
*/
struct Character
{
	int health;
	float weight;
	const char* name;
};

void main()
{
	// 전처리기
	/*
		프로그램이 컴파일되기 이전에 프로그램에 대한 사전 처리하는 과정

	int result = Function(10, 20);

	printf("result변수의 값 : %d\n", result);
	*/

	// 매크로
	/*

	int a = 1;
	int b = 2;
	printf("PI의 값 : %f\n", PI);
	printf("Solution 함수 결과 : %d\n", Solution(a+1, a+2));
	*/

	// 조건부 컴파일
	/*
		조건에 따라 코드의 일정 부분을 컴파일할지 안 할지 결정
		조건부 컴파일은 #endif를 사용해서 끝내야 한다.

#if IOS
	printf("안드로이드 기기입니다."); // 참 (밝은색) 거짓 (짙은색)
#elif ANDROID
	printf("두 번째 조건입니다."); // 참 (밝은색) 거짓 (짙은색)
#else
	printf("2개의 조건이 틀렸습니다."); // 참 (밝은색) 거짓 (짙은색)
#endif
*/

// 구조체
/*
	여러 개의 변수를 하나의 집합으로 구조화한 다음 하나의 객체를 생성하는 것

struct Character leesin;
leesin.health = 100;
leesin.name = "용의 분노";
leesin.weight = 80.5f;

printf("리신의 체력 : %d\n", leesin.health);
printf("리신의 궁극기 : %s\n", leesin.name);
printf("리신의 무게 : %.2f kg\n", leesin.weight);

// 구조체에 초기화 리스트 사용 시
// 구조체 위에서 선언된 변수의 순서로 정의되어야 한다.
struct Character BlackMage = { 1000,12.25f,"HardBoss"};
printf("검마 체력 : %d\n", BlackMage.health);
printf("검마 난이도 : %s\n", BlackMage.name);
printf("검마 결정석 : %.2f\n", BlackMage.weight);
*/

// 과잉수
/*
	자연수 중에 자기 자신을 제외한 양의 약수를
	모두 더했을 때 자기 자신보다 더 커지는 수이다.
	ex 12, 18, 20, 24, ...


	int num;
	int sum = 0;
	printf("자연수를 입력해주세요.");
	scanf_s("%d", &num);
	for (int x = 1;x <= num;x++)
	{
		printf("%d : ", x);
		for (int i = 1;i < x;i++)
		{
			if (x % i == 0)
			{
				sum += i;
			}
		}
		if (sum > x)
		{
			printf("과잉수입니다.\n");
		}
		else
		{
			printf("과잉수 아닙니다.\n");
		}
		sum = 0;
	}

}
*/