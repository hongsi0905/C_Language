#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
//��� �Լ�
int Function(int count)
{
	if (count == 1) // �Ű������� ���� 1�� �Ǹ� �Լ���ȯ
	{
		return;
	}
	Function(count-1); // ��� ȣ�� (-1��)
	printf("count ������ �� : %d\n",count);

}
int factorial(int x)
{

	if (x == 1)
	{
		return 1;
	}
	else
	{
		return x * factorial(x - 1);
	}
}

void main()
{
	// UPDOWN���� (������ �ڵ�)
	/*
		1. ��ǻ�Ͱ� ������ ���� �ο�
		2. ��ĵ�Լ��� ���� ���� �Է�
		3. �������ڿ� ���� �� ��



	int answer = 0;
	int life = 5;
	srand(time(NULL));
	int com = rand() % 50 + 1;




	while (life != 0)
	{
		printf("HP : %d\n", life);
		printf("�� �Է� : ");
		scanf_s("%d", &answer);


		if (answer == com)
		{
			printf("WIN");
			break;
		}

		if (answer < com)
		{
			life--;
			printf("UP\n");
		}
		else if (answer > com)
		{
			life--;
			printf("DOWN\n");
		}

		if (life == 0)
		{
			printf("LOSE");
		}
	}
	*/

	// ���� ������
	/*
		3���� �ǿ����ڸ� ������ ���� ������

	int x = 10;
	int y = 20;

	// ���� ? �� : ����
	int temp = x == y ? 100 : 200;
	printf("temp ������ �� : %d\n", temp);
	*/


	// ��� �Լ�
	/*
		� �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾��� �����ϴ� �Լ�
		��� �Լ��� �Լ��� ��� ȣ���ϱ� ������
		���� ������ �޸𸮰� ��� ���̰� �ǹǷ� ���� �����÷ο찡 �ɸ���

		��� �� �� Ư���� �������� �Լ��� ��ȯ���־���Ѵ�.

	Function(3);
	*/

	// ���丮��
	/*
		�Լ��� �����ؼ� �Ű� ������ N���� �־� N�� ���丮���� �����ּ���.


	int i = 0;
	scanf_s("%d", &i);

	int result = factorial(i);
	printf("%d\n", result);
	*/
}
