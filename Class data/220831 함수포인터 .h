#pragma once
#include <stdio.h>
#include <stdlib.h>

void Function()
{
	printf("HELLO\n");
}

void main()
{
	// ���� ������ ����
	/*
	int a = 10;
	int b = 20;

	int* ptr1 = &a;
	int* ptr2 = &b;

	int** pptr1 = &ptr1;
	int** pptr2 = &ptr2;

	printf("pptr1 �� : %d\n", **pptr1);



	int *temp = *pptr1;
	*pptr1 = *pptr2;
	*pptr2 = temp;

	printf("a �� : %d // b �� : %d\n", a, b);
	printf("ptr1�� ����Ű�� �� : %d // ptr2�� ����Ű�� �� : %d", *ptr1, *ptr2);
	*/

	// ��۸� ������
	/*
		�̹� ������ �޸𸮸� ����Ű�� �ִ� ������

	int* ptr = (int*)malloc(sizeof(int)); //�� �������� ������ ����
	*ptr = 10; // �ּҷ� �����ؼ� �Է�
	printf("ptr�� ����Ű�� �ּ� : %p\n", ptr);
	printf("ptr�� ����Ű�� �� : %d\n", *ptr);

	free(ptr);
	ptr = NULL; //���� �Ҵ��� �޸𸮸� ������ �� ������ ������ NULL�� �ʱ�ȭ�մϴ�.

	ptr = (int*)malloc(sizeof(int)); //������ �޸𸮸� �ٽ� �Ҵ��ϸ� ó�� �ּҿ� ���� ���´�

	*ptr = 20;
	printf("ptr�� ����Ű�� �ּ� : %p\n", ptr);
	printf("ptr�� ����Ű�� �� : %d\n", *ptr);
	*/

	// �Լ� ������
	/*
		�Լ��� �ּҰ��� �����ϰ� ����ų �� �ִ� ����

		�Լ��� ��ȯ���� �Ű������� Ÿ���� ��ġ�ؾ��ϸ�
		�Լ� �����и� ����Ͽ� �������� �޸𸮸� �Ҵ��� �� �����ϴ�.
	

	//printf("�Լ� Function �ּ� : %p\n", Function);
	//printf("�Լ� Function �ּ� : %p\n", &Function);


	void (*fp)(int);
	fp = Function;
	fp(5);

}
*/