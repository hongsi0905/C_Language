#pragma once
#include <stdio.h>

void main()
{
	//������ �ҽ�
	/*
	for (int i = 1; i <= 9; i++)
	{
		printf("%d��\n",i);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d. ", i, j, i * j);
		}
		printf("\n\n");
	}
	*/

	//while
	/*
		Ư�� ������ ������ ������ ����ؼ� �־��� ��ɹ��� �����ϴ� �ݺ���


	int memory = 5;
	while(memory > 1)
	{
		memory--;
		printf("������ ���Դϴ�.\n");
	}
	*/

	//do while
	/*
		���ǰ� ������� �� ���� �۾��� ������ ���� ���ǿ� ���� ��ɹ��� �����ϴ� �ݺ���
	
	int x = 5;
	do
	{
		//do���� ������ ������ while�� �������� ����� �� ����.
		// int y = 10;
		printf("������ �����Դϴ�.");
	} while (x==10);
	*/

	//continue
	/*
		�ش� ���ǹ��� �������� �ʰ�, �ݺ����� �̾ �����ϴ� ���
	

	//1 ~ 10������ ���� ����ϴµ� 3�� ����� �����ϰ� ���
	for (int i = 0; i <=10 ; i++)
	{
		if (i % 3 == 0)
			continue;
		printf("%d ", i);
	}
	*/

	//�� ��ȯ
	/*
		���� �ٸ� �ڷ����� ������ �ִ� �������� ������ �̷���� ��
		������ �����ߴ� �ڷ����� �ٸ� �ڷ������� ��ȯ�ϴ� ����

		- �ڵ� �� ��ȯ
		- ����� �� ��ȯ *(float)value

		C������ ������ ������ �����ϰ� �Ǹ� ������ �������� ���´�.

		- �Ϲ��� �� ��ȯ
			���� �ٸ� �ڷ������� ������ �̷���� ��
			�ڷ����� ũ�Ⱑ ū �ڷ������� ��ȯ�Ǵ� ����


		- int / long ����
			- int�� 32��Ʈ �ü���� 64��Ʈ �ü�������� 4byte ũ��
			- long�� 32��Ʈ �ü�������� 4byte, 64��Ʈ �ü�������� 8byte ũ��
			  ��, Windows 64��Ʈ �ü�������� 4byte
	
	printf("char�� ũ�� : %d\n", sizeof(char));		 //1
	printf("short�� ũ�� : %d\n", sizeof(short));	 //2
	printf("int�� ũ�� : %d\n", sizeof(int));		 //4
	printf("long�� ũ�� : %d\n", sizeof(long));		 //4
	printf("float�� ũ�� : %d\n", sizeof(float));    //4
	

	//�Ϲ��� �� ��ȯ
	char x = 10;
	short y = 20;
	int sum = x + y;

	int z = 500;
	char temp = z;

	printf("temp�� �� : %d\n", temp);

	//����� �� ��ȯ
	int p0 = 10;
	int p1 = 3;
	float result = (float)p0 / p1; // (float)�� ����� �� ��ȯ����
	printf("result �� : %f", result);

}
*/