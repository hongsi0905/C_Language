//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// �ڱ� ���� ����ü
struct Node
{
	int data;
	struct Node* pointer;
};

int main()
{	
	// �ڱ� ���� ����ü
	/*
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
	*/

	// ���ڿ� �Լ�
	//strlen( ) : ���ڿ��� ���̸� ����ϴ� �Լ� (�� ���� ����)
	char name[ ] = { "Value" };
	printf("name : %s\n", name);
	printf("name ���� : %d\n", strlen(name));

	//strcpy(�ٿ��ֱ�,�޸�ũ��,����) : ���ڿ��� �����ϴ� �Լ� ( �޸� ũ��� B + NULL�� )
	char A[10] = { "Apple" };
	char B[10] = { "Banana" };
	/*
		// read only ������ �ִ� ���ڿ� ���ͷ��̱⿡ ���� ������ �� ����.
		const char* C = "Caramel";
		const char* D = "Donut";
	*/
	strcpy_s(A, 7, B);
	printf("���ڿ� A : %s\n", A);

	//strcmp( ) : ���ڿ��� ���ϴ� �Լ�
	


	//strcat( ) : ���ڿ��� �����ϴ� �Լ�

	return 0;
}
