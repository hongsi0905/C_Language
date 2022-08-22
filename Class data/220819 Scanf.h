#pragma once

#include <stdio.h>


void main()
{

	//scanf_s 함수 (버전2015 이후부터 버퍼 오버플로에 대한 문제점 때문에 scanf_s 사용을 권장)
	/*
		scanf("%d", &변수);
		scanf_s (버전2015 이후부터 버퍼 오버플로에 대한 문제점 때문에 scanf_s 사용을 권장)

		#pragma warning(disable:4996) : scanf 사용가능

	int value = 50;
	scanf_s("%d", &value);
	printf("value 값 : %d\n", value);

	*/

	//주소 연산자
	/*
		주소 연산자 (변수의 주소 : %p, 변수 & 붙여주기)
			- 변수의 주소 값을 반환하는 연산자
			- 변수의 주소는 프로그램이 실행될 때마다 바뀜
			- 변수의 주소는 16진수 표기


	int x = 100;
	printf("x 변수의 주소 : %p", &x);
	*/

	//포인터
	/*
		포인터(*)
			- 변수의 메모리 주소를 저장하는 변수

		포인터의 크기
			- 32비트 컴파일러에서는 4 byte
			- 64비트 컴파일러에서는 8 byte

	int a = 20;
	int* ptr = &a; // prt은 포인터 변수로 a의 주소를 저장하고 있으며, ptr 변수는 a의 시작 주소를 가리키고 있다.

	printf("a의 주소 : %d\n", &a);
	printf("prt이 가르키는 주소 : %p\n", *ptr); //포인터가 가리키는 값을 출력할 때는 &를 사용하지 않아도 된다.

	//역참조 :
	*ptr = 100;
	printf("a의 값 : %d\n", *ptr);

	printf("ptr의 고유 주소 : %p\n", &ptr); // 포인터의 고유 주소를 출력할 때 & 사용
	printf("포인터 변수의 크기 : %d\n", sizeof(ptr));
	*/

	//시프트 연산자
	/*
		- 비트의 값을 주어진 숫자만큼 부호 방향으로 이동시키는 연산자
		- 부호
			>> : 오른쪽으로 비트를 이동
			<< : 왼쪽으로 비트를 이동


	char count = 10;
	printf("왼쪽 1번 시프트 연산 결과 : %d\n", count <<= 1); // << : 변동 없다.  <<= : 변동 있다
	printf("count 변수의 값 : %d\n", count);
	printf("오른쪽으로 3번 시프트 연산 결과 : %d\n", count >>= 3);


	// ☆ 찍기

	int i,j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("☆");
		}
		printf("\n");
	}
	*/
}