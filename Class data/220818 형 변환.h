#pragma once
#include <stdio.h>

void main()
{
	//구구단 소스
	/*
	for (int i = 1; i <= 9; i++)
	{
		printf("%d단\n",i);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d. ", i, j, i * j);
		}
		printf("\n\n");
	}
	*/

	//while
	/*
		특정 조건을 만족할 때까지 계속해서 주어진 명령문을 실행하는 반복문


	int memory = 5;
	while(memory > 1)
	{
		memory--;
		printf("조건이 참입니다.\n");
	}
	*/

	//do while
	/*
		조건과 상관없이 한 번의 작업을 수행한 다음 조건에 따라 명령문을 실행하는 반복문
	
	int x = 5;
	do
	{
		//do에서 선언한 변수는 while의 조건으로 사용할 수 없다.
		// int y = 10;
		printf("조건이 거짓입니다.");
	} while (x==10);
	*/

	//continue
	/*
		해당 조건문만 실행하지 않고, 반복문은 이어서 실행하는 제어문
	

	//1 ~ 10까지의 수를 출력하는데 3의 배수만 제외하고 출력
	for (int i = 0; i <=10 ; i++)
	{
		if (i % 3 == 0)
			continue;
		printf("%d ", i);
	}
	*/

	//형 변환
	/*
		서로 다른 자료형을 가지고 있는 변수끼리 연산이 이루어질 때
		기존에 지정했던 자료형을 다른 자료형으로 변환하는 과정

		- 자동 형 변환
		- 명시적 형 변환 *(float)value

		C언어에서는 정수와 정수를 연산하게 되면 무조건 정수값만 나온다.

		- 암묵적 형 변환
			서로 다른 자료형으로 연산이 이루어질 때
			자료형의 크기가 큰 자료형으로 변환되는 과정


		- int / long 차이
			- int는 32비트 운영체제와 64비트 운영체제에서도 4byte 크기
			- long은 32비트 운영체제에서는 4byte, 64비트 운영체제에서는 8byte 크기
			  단, Windows 64비트 운영체제에서는 4byte
	
	printf("char의 크기 : %d\n", sizeof(char));		 //1
	printf("short의 크기 : %d\n", sizeof(short));	 //2
	printf("int의 크기 : %d\n", sizeof(int));		 //4
	printf("long의 크기 : %d\n", sizeof(long));		 //4
	printf("float의 크기 : %d\n", sizeof(float));    //4
	

	//암묵적 형 변환
	char x = 10;
	short y = 20;
	int sum = x + y;

	int z = 500;
	char temp = z;

	printf("temp의 값 : %d\n", temp);

	//명시적 형 변환
	int p0 = 10;
	int p1 = 3;
	float result = (float)p0 / p1; // (float)가 명시적 형 변환문구
	printf("result 값 : %f", result);

}
*/