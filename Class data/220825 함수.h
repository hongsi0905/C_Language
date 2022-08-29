#pragma once
#include <stdio.h>
//char, int ,float
//void는 자료형이 없다.

//함수
/*
	하나의 특별한 목적의 작업을 수행하기 위해 독립적으로 설계된 코드의 집합입니다.
	반복적인 작업을 줄여준다
	함수의 이름도 중복은 불가능


void Function() //함수는 main()함수 외부에서 선언해야한다
{
	printf("안녕하세요.\n");
	printf("안녕하세요.\n");
	printf("안녕하세요.\n");

	for (int i = 0;i < 3;i++)
	{
		printf("안녕하세요.\n");
	}
}

//매개 변수
/*
	함수의 정의에서 전달받은 인수를 함수 내로 전달하기 위해 사용하는 변수
	매개변수가 있는 함수는 ()안에 인수 값을 넣어야한다.
		- 인수 : 함수가 호출될 때 매개변수에 실제로 전달되는 값이다.
	여러 개를 생성해서 사용할 수 있다.
	함수 내부에서만 사용가능한 변수
*/

//지역 변수
/*
	{ }내에서 선언된 변수로 { }내에서만 사용할 수 있고, 외부로 가면 소멸된다.
	스택 영역 저장
*/

//전역변수
/*
	함수 외부에서 선언된 변수로 어디서든 접근 가능
	프로그램이 종료될 때 메모리에서 사라지는 특징이 있다
	데이터 영역 저장 : 초기화 되지 않은 영역

int count = 0; // 전역변수

//정적 변수 (static)
/*
	지역 변수의 특성을 가지며, 전역 변수의 특성을 가지고 있는 변수
*/

//코드, 데이터, 힙, 스택
/*
	[코드]
	[데이터] - 정적변수, 전역변수(프로그램이 종료될 때까지 메모리에서 사라지지 않는다)
	[힙] - 동적할당(프로그래머가 직접 관리하는 메모리 영역)
	[스택]
*/

//반환형
/*
	함수의 실행이 끝나고 함수에게 전달하는 결과 값
	void는 반환형이 필요없다.
	자료형이 있는 함수는 자료형에 알맞는 결과값을 돌려준다.
	자료형과 반환하는 값의 형태가 일치하지 않으면 원하는 결과 값을 얻을 수 없다.

int Calculator(int x, int y)
{
	return x + y;
}
float Divide(float x, float y)
{

	return x / y;
}

void Home()
{
	static int variable = 0;
	variable++;
	printf("variable 변수 값 : %d\n", variable);
}// 프로그램이 종료될 때까지 메모리에 저장(variable)
void Area()
{
	int position = 0;
	position++;
	printf("position 변수 값 : %d\n", position);

}//position 변수의 메모리는 소멸

void Minus()
{
	count++;
	printf("count 변수 주소 : %p\n", &count);
	printf("count 변수 값 : %d\n", count);
}
void Temp(int x)
{
	printf("변수의 x : %d\n", x);
}
void Add(int x, int y)
{
	int result = x + y;
	printf("result 변수 값 : %d\n", result);
}

void main() //사용자 정의 함수를 사용하려면 main()함수에서 호출하여야한다.
{
	// 연습소스
	
	int value = 100;
	int values = 200;
	//Function(); // 호출 시 함수의 이름을 정확히 기입
	//Temp(value);
	//Temp(values);
	//Add(5, 4);

	int x = 10;
	{
		int x = 20;
		printf("중괄호 안에 있는 x의 주소 : %p\n", . & x);
	}
	x = 100;
	printf("변수 x 주소 : %p\n", &x);


	count++;
	Minus();

	//정적
	Home(); //1
	Home(); //2
	Home(); //3
	//지역
	Area(); //1
	Area(); //1
	Area(); //1

	
	//printf("Calculator 값 : %d\n",Calculator(25, 3));
	printf("나누기 함수 값 : %f\n", Divide(5, 2));
	
}*/