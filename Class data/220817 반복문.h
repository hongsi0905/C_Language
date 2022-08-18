#pragma once
#include <stdio.h>

void main()
{
	// 반복문
	/*
		반복문
			- 프로그램 내에서 특정한 작업을 반복적 수행
		증감 연산자
			- 피연산자를 하나씩 증가시키거나 감소시킬 때 사용
			전위 : 증가, 감소
				- 변수의 값을 증감시킨 후 연산 수행
			후위 : 증가, 감소
				- 변수의 값을 연산시킨 후 증감 수행




	int value = 0;
	int result = ++value;

	printf("value 변수의 전위 증가한 값 : %d\n", result);

	result = value++;

	printf("value 변수의 후위 증가한 값 : %d\n", result);
	printf("value 변수의 값 : %d\n", value);

	*/

	// for문
	/*
		for : 초기식을 연산하여 조건식의 결과에 따라 특정한 횟수만큼 반복

		초기식 i = 0
		조건식 i < 5
		실행하고 싶은 명령문
		증감식



	for (int i = 5; i > 0; i--)
	{
		printf("%d\n",i);
	}
	*/

	// 약수
	/*
		약수 : 어떤 수를 나누어 떨어지게 하는 수

	int x = 12;
	for (int i = 1; i<=x; i++) // 나누기를 0으로 할 수 없으므로 시작은 0으로 할 수 없다.
	{
		if (x % i == 0)
			{
				printf("%d\n",i);
			}
	

	// 2중for문
	for (int i = 0; i < 3; i++)
	{
		printf("ORANGE\n");
		for (int j = 0; j < 3; j++)
		{
			printf("BLACK\n");
		}
	}
}
*/