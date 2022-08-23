#pragma once

#include <stdio.h>

void main()
{
	//포인터의 크기
	/*
	double value = 9.36;
	double x = 10.97;

	//포인터 변수를 저장하기 위해 주소 값을 저장할 변수의 자료형과 포인터 변수의 자료형이 일치해야 합니다.
	double* ptr = &value; // (int -> double )
	double* ptr1 = &x;

	printf("value 변수의 값 : %lf\n", *ptr);
	printf("x 변수의 값 : %lf\n", *ptr1);
	printf("ptr1 변수 크기 : %d\n", sizeof(ptr1));

	ptr = &x;
	printf("x 변수의 값 : %lf\n", *ptr);

	*ptr = 15.15;
	printf("x 변수의 값 : %lf\n", *ptr);

	*/

	//배열
	/*
		배열
			- 같은 자료형의 변수들로 이루어진 유한 집합


	int array[5];
	// 4byte(int) 메모리 공간이 5개의 연속적인 메모리 공간 생성 : 20byte

	//배열의 시작 원소는 0이다.
	//배열의 크기를 벗어나서 저장할 수 없다 (array[5] = 100;)
	array[0] = 10;
	array[1] = 20;
	array[2] = 30;
	array[3] = 40;
	array[4] = 50;


	for (int i = 0; i < 5; i++)
	{
		printf("array %d번째의 값 : %d\n", i+1, array[i]);
	}
	printf("array 크기 : %d byte", sizeof(array));
	*/

	//배열의 초기화
	/*
	*
	int room[10] = { 0,5,10 };

	// for비교문 수정없이 하는법 : 배열 크기 / 배열의 자료형
	int size = sizeof(room)/sizeof(int);

	for (int i = 0; i < size; i++)
	{
		printf("room의 %2d번째 값 : %d\n", i + 1, room[i]);
	}

	//배열의 크기를 생략할 수 있고, 목록에 설정된 수에 따라 컴파일러가 자동으로 크기계산

	double team[] = { 5.5, 6.4, 7.2 };
	int size = sizeof(team) / sizeof(double);

	printf("팀의 배열 크기 : %d\n", sizeof(team));

	for (int i = 0; i < size; i++)
	{
		team[i] = 0;
		printf("team[%d] 의 값 : %lf\n",i,team[i]);
	}
	*/

}
