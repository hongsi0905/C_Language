#pragma once
#include <stdio.h>

void main()
{
	//���ڿ�
	/*
		- �������� �޸� ������ ����� ���� ������ ����

		char�� 1byte�̹Ƿ� �ϳ��� ���ڸ� ������ �� �ִ�.


	char alphabet = 'A';
	char string[6] = { 'A','B','C','D','E' }; // 0 1 2 3 4

	string[0]='T';
	//���� �迭�� ������ �� �� �������� NULL�� ����.
	//���� �迭���� ��쿡�� �迭�� ũ�� n + 1�� ����

	printf("string �迭�� �� : %s\n", string);
	//NULL���ڴ� ���ڿ��� ���� �˷��ִ� ���� ����

	string[2] = '\0';
	//���� �迭 �߰��� NULL���ڰ� ������ NULL���� ������ ���ڿ������� ���
	//������ �� ���� ����.
	printf("string �迭�� �� : %s\n", string);
	*/

	//���ڿ� �ʱ�ȭ - �ʱ�ȭ�� ���̿� ���� �����ִ� ��
	/*
		�ڵ念��
		�����Ϳ��� : BSS,Read Only Data Segment,
		����
		��

		"count"
		[c][o][u][n][t][/0] >> 5char + null = 6byte

		char *ptr >> 4byte ������ �޸𸮸� ������ �� �ִ� ������ ����
		>>[c][o][u][n][t][/0]


	const char *ptr = "Count\n";

	printf("ptr�� ����Ű�� �ּ� : %p\n", ptr); // C�� �ּ�.
	printf("ptr�� ����Ű�� �� : %c\n", ptr[0]); // ������ ������ ��� ����Ű���� Ȯ������ ��ġ�� %c�� ���
	printf("ptr�� ����Ű�� ���ڿ��� �� : %s\n", ptr); // %s ���ڿ��� �����ּҷ� ������ string���� "count"�� ���

	*/

	// ���� ������
	/*
	int value = 100; // 4byte
	int* ptr = &value; // value �ּ�����

	int** twoptr = &ptr; // ���� ������ ����(twoptr)�� ������ ����(ptr)�� �ּ�����

	printf("value�� �����ּ� �� : %p\n",&value);
	printf("ptr�� ����Ű�� �� : %p\n", ptr);
	printf("twoptr�� ����Ű�� �� : %p\n", twoptr);
	printf("ptr ������ ����Ű�� �ִ� ���� �� : %d\n", *ptr);
	printf("twoptr ������ ����Ű�� �ִ� ���� �� : %d\n", **twoptr);
	*/

	// �Ҽ� �Ǻ��ϱ�
	/*
	// ���� �Է��� ���ڰ� �Ҽ����� �ƴ��� �Ǻ��ϱ�

	int number;
	int count = 0;

	printf("���ڸ� �Է����ּ���.");
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
		printf("�Ҽ� �Դϴ�.\n");
	}

	*/
}