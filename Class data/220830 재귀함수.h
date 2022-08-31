#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
//재귀 함수
int Function(int count)
{
	if (count == 1) // 매개변수의 값이 1이 되면 함수반환
	{
		return;
	}
	Function(count-1); // 재귀 호출 (-1씩)
	printf("count 변수의 값 : %d\n",count);

}
int factorial(int x)
{

	if (x == 1)
	{
		return 1;
	}
	else
	{
		return x * factorial(x - 1);
	}
}

void main()
{
	// UPDOWN게임 (선생님 코드)
	/*
		1. 컴퓨터가 랜덤한 숫자 부여
		2. 스캔함수로 추측 값을 입력
		3. 랜덤숫자와 추측 값 비교



	int answer = 0;
	int life = 5;
	srand(time(NULL));
	int com = rand() % 50 + 1;




	while (life != 0)
	{
		printf("HP : %d\n", life);
		printf("값 입력 : ");
		scanf_s("%d", &answer);


		if (answer == com)
		{
			printf("WIN");
			break;
		}

		if (answer < com)
		{
			life--;
			printf("UP\n");
		}
		else if (answer > com)
		{
			life--;
			printf("DOWN\n");
		}

		if (life == 0)
		{
			printf("LOSE");
		}
	}
	*/

	// 삼항 연산자
	/*
		3개의 피연산자를 가지는 조건 연산자

	int x = 10;
	int y = 20;

	// 조건 ? 참 : 거짓
	int temp = x == y ? 100 : 200;
	printf("temp 변수의 값 : %d\n", temp);
	*/


	// 재귀 함수
	/*
		어떤 함수에서 자신을 다시 호출하여 작업을 수행하는 함수
		재귀 함수는 함수를 계속 호출하기 때문에
		스택 영역에 메모리가 계속 쌓이게 되므로 스택 오버플로우가 걸린다

		사용 할 때 특정한 시점에서 함수를 반환해주어야한다.

	Function(3);
	*/

	// 팩토리얼
	/*
		함수를 생성해서 매개 변수에 N값을 넣어 N의 팩토리얼을 구해주세요.


	int i = 0;
	scanf_s("%d", &i);

	int result = factorial(i);
	printf("%d\n", result);
	*/
}
