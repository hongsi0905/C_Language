#pragma once

#include <stdio.h>

void main()
{
	//논리연산자
	/*
		논리연산자
			- 1 = 참, 0 = 거짓
			- && (AND) : 두 개의 조건 모두 참이라면 조건 실행
			- || (OR) : 두 개의 조건에서 하나라도 참이면 조건 실행


	int x = 10;
	int y = 20;

	if (x != 10 && y == 20)
	{
		printf("논리연산 AND(&&) 결과 : 참\n");
		if (5 < 10)
		{
			printf("if문 안에 있는 조건문\n");
		}
	}
	if (x == 10 || y == 25)
	{
		printf("논리연산 OR(||) 결과 : 참\n");
	}


	*/

	//사분면
	/*
		사분면
		제 1 사분면 : (+x +y)
		제 2 사분면 : (-x +y)
		제 3 사분면 : (-x -y)
		제 4 사분면 : (+x -y)

		x 절편 : (x y=0)
		y 절편 : (x=0 y)
		원점 : (x=0 y=0)



	int x ;
	int y ;

	printf("x와 y의 값 :");
	scanf_s("%d %d",&x, &y);


	if (x > 0 && y > 0)
	{
		printf("제 1사분면\n");
	}
	else if (x < 0 && y > 0)
	{
		printf("제 2사분면\n");
	}
	else if (x < 0 && y < 0)
	{
		printf("제 3사분면\n");
	}
	else if (x > 0 && y < 0)
	{
		printf("제 4사분면\n");
	}
	else if (x == 0 && y)
	{
		printf("Y절편\n");
	}
	else if (x && y == 0)
	{
		printf("X절편\n");
	}
	else if (x == 0 && y == 0)
	{
		printf("원점\n");
	}
	*/

	//SWITCH / BREAK
	/*
		switch
			- 어떤 결과에 따라 그 결과부터 실행되는 조건문
		break
			- 특정한 시점에서 분기를 종료하는 조건문


	int value = 1;

	switch (value)
	{
		case 0: printf("0 입니다");
			break;

		case 1: printf("1 입니다");
			break;

		default: printf("잘못 선택");
	}


		대학 성적표
			A 100 - 90
			B 90 - 80
			C 80 - 70
			D 70 - 60
			E 60 - 50
			과락


	char alphabet = 'C';

	switch (alphabet)
	{
		case 'A':printf("100 - 90점");
			break;
		case 'B':printf("90 - 80점");
			break;
		case 'C':printf("80 - 70점");
			break;
		case 'D':printf("70 - 60점");
			break;
		case 'E':printf("60 - 50점");
			break;
		default :printf("과락");

	}


	float variable = 3.25;

	switch (variable)
	{
		case 3.25: printf("부동 소수점의 오차로 인해 switch의 조건을 사용할 수 없습니다.");
			break;
	}
	*/
}