#pragma once
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
// �ڱ� ���� ����ü
struct Node
{
	int data;
	struct Node* pointer;
};

// strcat �Լ� �����
void Mycat(char* str1, const char* str2)
{
	while (*str1 != '\0')
	{
		str1++;
	}
	while (*str2 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;

	}

}

int main()
{
	// �ڱ� ���� ����ü
	
		�ڽŰ� ������ ����ü�� ����ų �� �ִ� ������ ������ ��� ������ ������ ����ü

	// NULL�� �����Ͱ� �ƹ� ��ġ�� ����Ű�� �ʵ��� ����
	struct Node node1 = { 10,NULL };
	struct Node node2 = { 20,NULL };
	struct Node node3 = { 30,NULL };

	struct Node* structPtr = &node1;
	structPtr->data;
	printf("ù ��° ����ü data �� : %d\n", structPtr->data);
	structPtr->pointer = &node2;
	printf("�� ��° ����ü data �� : %d\n", structPtr->pointer->data);

	//struct->pointer :
	structPtr->pointer->pointer = &node3;
	printf("�� ��° ����ü data �� : %d\n", structPtr->pointer->pointer->data);


	// ���ڿ� �Լ�
	//strlen( ) : ���ڿ��� ���̸� ����ϴ� �Լ� (�� ���� ����)
	char value[ ] = { "Value" };
	printf("strlen	name : %s\n", value);
	printf("strlen	name ���� : %d\n", strlen(value));

	//strcpy(�ٿ��ֱ�,�޸�ũ��,����) : ���ڿ��� �����ϴ� �Լ� ( �޸� ũ��� B + NULL�� )
	char A[10] = { "Apple" };
	char B[10] = { "Banana" };
	/*
		// read only ������ �ִ� ���ڿ� ���ͷ��̱⿡ ���� ������ �� ����.
		const char* C = "Caramel";
		const char* D = "Donut";

	strcpy_s(A, 7, B);
	printf("strcpy	���ڿ� A : %s\n", A);

	// strcmp( ) : ���ڿ��� ���ϴ� �Լ�
	// strncmp( ���ڿ�, ���ڿ�, ���� )
	// ���ڿ� �� �� ���� ũ�� +1 / �ڰ� ũ�� -1 / ������ 0
	char no1[] = { "ABCD" };
	char no2[] = { "ABCT" };
	char no3[] = { "ABCC" };
	printf("strcmp	�� ���� ���ڿ��� �� : %d\n", strcmp(no1, no2));
	printf("strcmp	�� ���� ���ڿ��� �� : %d\n", strcmp(no1, no3));
	printf("strncmp	�� ���� ���ڿ��� �� : %d\n", strncmp(no1, no2, 5));
	
	//strcat( ) : ���ڿ��� �����ϴ� �Լ�
	char last[10] = { "LEE" };
	char first[10] = { "GIHYUN" };
	//strcat_s(last, 10, first);
	Mycat(last, first);
	printf("�� �̸��� : %s\n", last);

	*/
	return 0;
}
