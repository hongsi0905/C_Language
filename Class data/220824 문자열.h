#pragma once
#include <stdio.h>

void main()
{
	//문자열
	/*
		- 연속적인 메모리 공간에 저장된 문자 변수의 집합

		char는 1byte이므로 하나의 문자만 저장할 수 있다.


	char alphabet = 'A';
	char string[6] = { 'A','B','C','D','E' }; // 0 1 2 3 4

	string[0]='T';
	//문자 배열을 선언할 때 맨 마지막에 NULL만 포함.
	//문자 배열같은 경우에는 배열의 크기 n + 1로 설정

	printf("string 배열의 값 : %s\n", string);
	//NULL문자는 문자열의 끝을 알려주는 제어 문자

	string[2] = '\0';
	//문자 배열 중간에 NULL문자가 있으면 NULL문자 이전의 문자열까지만 출력
	//마지막 한 글자 삭제.
	printf("string 배열의 값 : %s\n", string);
	*/

	//문자열 초기화 - 초기화란 더미에 값을 씌워주는 것
	/*
		코드영역
		데이터영역 : BSS,Read Only Data Segment,
		스택
		힙

		"count"
		[c][o][u][n][t][/0] >> 5char + null = 6byte

		char *ptr >> 4byte 변수의 메모리를 저장할 수 있는 포인터 변수
		>>[c][o][u][n][t][/0]


	const char *ptr = "Count\n";

	printf("ptr이 가리키는 주소 : %p\n", ptr); // C의 주소.
	printf("ptr이 가리키는 값 : %c\n", ptr[0]); // 포인터 변수가 어디를 가리키는지 확인위해 위치값 %c로 출력
	printf("ptr이 가리키는 문자열의 값 : %s\n", ptr); // %s 문자열의 시작주소로 접근해 string으로 "count"를 출력

	*/

	// 이중 포인터
	/*
	int value = 100; // 4byte
	int* ptr = &value; // value 주소저장

	int** twoptr = &ptr; // 이중 포인터 변수(twoptr)는 포인터 변수(ptr)의 주소저장

	printf("value의 시작주소 값 : %p\n",&value);
	printf("ptr이 가리키는 값 : %p\n", ptr);
	printf("twoptr이 가리키는 값 : %p\n", twoptr);
	printf("ptr 변수가 가리키고 있는 변수 값 : %d\n", *ptr);
	printf("twoptr 변수가 가리키고 있는 변수 값 : %d\n", **twoptr);
	*/

	// 소수 판별하기
	/*
	// 내가 입력한 숫자가 소수인지 아닌지 판별하기

	int number;
	int count = 0;

	printf("숫자를 입력해주세요.");
	scanf_s("%d", &number);

	for (int i = 0; i<=number;i++)
	{
		if (number%i==0)
		{
			count++;
		}

	}
	if (count == 0)
	{
		printf("소수 입니다.\n");
	}

	*/
}