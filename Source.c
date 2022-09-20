//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 자기 참조 구조체
struct Node
{
	int data;
	struct Node* pointer;
};

int main()
{	
	// 자기 참조 구조체
	/*
		자신과 동일한 구조체를 가리킬 수 있는 포인터 변수를 멤버 변수로 가지는 구조체
	
	// NULL은 포인터가 아무 위치를 가리키지 않도록 설정
	struct Node node1 = { 10,NULL };
	struct Node node2 = { 20,NULL };
	struct Node node3 = { 30,NULL };

	struct Node* structPtr = &node1;
	structPtr->data;
	printf("첫 번째 구조체 data 값 : %d\n", structPtr->data);
	structPtr->pointer = &node2;
	printf("두 번째 구조체 data 값 : %d\n", structPtr->pointer->data);

	//struct->pointer : 
	structPtr->pointer->pointer = &node3;
	printf("세 번째 구조체 data 값 : %d\n", structPtr->pointer->pointer->data);
	*/

	// 문자열 함수
	//strlen( ) : 문자열의 길이를 출력하는 함수 (널 문자 제외)
	char name[ ] = { "Value" };
	printf("name : %s\n", name);
	printf("name 길이 : %d\n", strlen(name));

	//strcpy(붙여넣기,메모리크기,복사) : 문자열을 복사하는 함수 ( 메모리 크기는 B + NULL값 )
	char A[10] = { "Apple" };
	char B[10] = { "Banana" };
	/*
		// read only 영역에 있는 문자열 리터럴이기에 값을 변경할 수 없다.
		const char* C = "Caramel";
		const char* D = "Donut";
	*/
	strcpy_s(A, 7, B);
	printf("문자열 A : %s\n", A);

	//strcmp( ) : 문자열을 비교하는 함수
	


	//strcat( ) : 문자열을 연결하는 함수

	return 0;
}
