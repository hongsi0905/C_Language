#pragma once
#include <stdio.h>
#include <stdlib.h>

void Function()
{
	printf("HELLO\n");
}

void main()
{
	// 이중 포인터 응용
	/*
	int a = 10;
	int b = 20;

	int* ptr1 = &a;
	int* ptr2 = &b;

	int** pptr1 = &ptr1;
	int** pptr2 = &ptr2;

	printf("pptr1 값 : %d\n", **pptr1);



	int *temp = *pptr1;
	*pptr1 = *pptr2;
	*pptr2 = temp;

	printf("a 값 : %d // b 값 : %d\n", a, b);
	printf("ptr1이 가리키는 값 : %d // ptr2가 가리키는 값 : %d", *ptr1, *ptr2);
	*/

	// 댕글링 포인터
	/*
		이미 해제된 메모리를 가리키고 있는 포인터

	int* ptr = (int*)malloc(sizeof(int)); //힙 영역에서 변수명 없다
	*ptr = 10; // 주소로 접근해서 입력
	printf("ptr이 가리키는 주소 : %p\n", ptr);
	printf("ptr이 가리키는 값 : %d\n", *ptr);

	free(ptr);
	ptr = NULL; //동적 할당한 메모리르 해제할 때 포인터 변수를 NULL로 초기화합니다.

	ptr = (int*)malloc(sizeof(int)); //해제한 메모리를 다시 할당하면 처음 주소에 값을 덮는다

	*ptr = 20;
	printf("ptr이 가리키는 주소 : %p\n", ptr);
	printf("ptr이 가리키는 값 : %d\n", *ptr);
	*/

	// 함수 포인터
	/*
		함수의 주소값을 저장하고 가리킬 수 있는 변수

		함수의 반환형과 매개변수의 타입이 일치해야하며
		함수 포인털르 사용하여 동적으로 메모리를 할당할 수 없습니다.
	

	//printf("함수 Function 주소 : %p\n", Function);
	//printf("함수 Function 주소 : %p\n", &Function);


	void (*fp)(int);
	fp = Function;
	fp(5);

}
*/