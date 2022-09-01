#include <stdio.h>

void main()
{
	// 포인터 배열
	/*
		배열의 요소로 포인터 변수를 가지는 배열
	

	int num1 = 10, num2 = 20, num3 = 30;

	int* array[] = { &num1, &num2, &num3 };

	for (int i = 0;i < 3;i++)
	{
		printf("array 포인터의 값 : %p\n", array[i]); 
		printf("arry 포인터가 가리키는 값 : %d\n", *array[i]);
	}
	*/

	// 포인터 문자열
	/*
	 const char* data[3] = { "Apple","Banana","Melon" }; //시작주소만 알면 %s로 문자 출력
	
	 data[0] = "Cherry"; // 기존의 문자열에 덮어씌우는 게 아닌 참조 위치를 바꿈

	 for (int i = 0;i < 3;i++)
	 {
		 printf("%s\n", data[i]); // %s : '\0'(NULL) 문자를 만날 때까지 출력하는 서식 지정자
	 }
	 */

	// ASCII 코드
	/*
		미국 표준화 협회가 제정한 정보 교환용 표준코드
		영문 알파벳을 사용하는 대표적인 문자 인코딩
	

	if ('A' < 'B')
	{
		for (int i = 0;i < 26;i++)
		{
			char alphabet = 'A' + i;
			printf("%c ", alphabet);
		}
	}
	*/

	// 공약수
	/*
		두 개의 변수(int)를 입력
		A와 B 변수의 공통된 약수를 출력
	
	int A = 0, B = 0;
	printf("변수를 입력해주세요 : ");
	scanf_s("%d %d", &A, &B);

	printf("A의 약수 : ");
	for (int i = 1;i <= A;i++)
	{
		if (A % i == 0)
		{
			printf("%d ", i);
		}
	}

	printf("\nB의 약수 : ");
	for (int i = 1;i <= B;i++)
	{
		if (B % i == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\nA와 B의 공약수 : ");
	
	for (int i = 1;i <= A && i <= B;i++)
	{
		if (A % i == 0 && B % i == 0)
		{
			printf("%d ", i);
		}
	}
	*/

	// 완전수
	/*
		자기 자신을 제외한 양의 약수(진약수)를 더했을 때 자기 자신이 되는 양의 정수를 말한다.
		또는 모든 양의 약수를 더했을 때 자기 자신의 2배가 되는 수라고도 한다. 6, 28 ,496...
	*/

	int a;
	int sum = 0;

	printf("완전수를 입력하세요(값이 나오지 않으면 완전수가 아닙니다.) : ");
	scanf_s("%d", &a);

	for (int i = 1;i <= a;i++)
	{
		if (a % i == 0)
		{
			sum += i;
			if (sum == a)
			{
				printf("%d 은/는 완전수 입니다.", sum);
			}
		}
	}



}