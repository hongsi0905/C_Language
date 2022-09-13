#pragma once
#include <stdio.h>
#include <math.h>

struct Player
{
	int x, y;

};

struct Monster
{
	int x, y;

};

void ParameterArray(int array[])
{
	for (int i = 0;i < 5;i++)
	{
		array[i] = 10;
	}
}

void StructArray(struct Player* x)
{

}

int main()
{
	//void main / int main
	/*
		int main()
		: 함수가 종료할 때 정수형 값을 리턴하겠다는 의미

		void main()
		: 함수가 종료할 때 아무 값도 리턴하지 않겠다는 의미

		운영체제에게 프로그램의 종료 사유를 전달해준다.
		0을 리턴하게 되면 프로그램이  정상적으로 실행을 마치고 종료하는 것으로 전달
		0 이외에 값을 리턴하게 되면 비정상적으로 종료되는 것으로 판단
	*/

	//두 점 사이의 거리 (캐릭터와 드래곤 거리)
	/*

	struct Player character = { 0,0 };
	struct Monster dragon = { 3,5 };

	double a, b;
	a = dragon.x - character.x;
	b = dragon.y - character.y;
	double distance = sqrt(pow(a, 2) + pow(b, 2));

	printf("두 점 사이거리 : %lf\n", distance);
	*/

	//루트와 제곱
	/*
	//루트(sqrt)
	int value = 16;
	printf("루트 100 값 : %lf\n", sqrt(value));

	//제곱(pow)
	//x의 제곱 pow(값, x)
	int variable = 10;
	printf("variable 제곱 : %lf\n", pow(variable, 2));
	*/

	// Lvalue / Rvalue
	/*
		Lvalue : 표현식 이후에도 사라지지 않는 값, 이름을 지니고 있는 변수 * 상수를 사용할 수 없다.
		Rvalue : 표현식 이후에 사라지는 값, 임시 변수
		Lvalue는 Rvalue로 사용할 수 있다.

	//a,b (Lvalue) / 10,20(Rvalue)
	int a = 10;
	int b = 20;

	int result = a + b;
	printf("result 변수 값 : %d\n", result);
	*/

	// 전위증감, 후위 증감
	/*
		전위 증감은 Lvalue, Rvalue 사용할 수 있다.
		후위 증감은 Rvalue로만 사용할 수 있다.


	int x = 0;
	int y = 0;

	++x; //전위 증가는 증가된 자기 자신(변수)을 반환
	y++; //후위 증가는 증가된 복사본을 반환
	

	int room[5] = { 0, }; // ,(콤마) 찍을 경우 전부 0으로 초기화
	for (int i = 0;i < 5;i++)
	{
		printf("[%d]", room[i]);
	}
	printf("\n");
	//room은 배열의 시작 주소이다.
	ParameterArray(room);
	for (int i = 0;i < 5;i++)
	{
		printf("[%d]", room[i]);
	}

	return 0;

}
*/