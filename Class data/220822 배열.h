#pragma once

#include <stdio.h>

void main()
{
	//�������� ũ��
	/*
	double value = 9.36;
	double x = 10.97;

	//������ ������ �����ϱ� ���� �ּ� ���� ������ ������ �ڷ����� ������ ������ �ڷ����� ��ġ�ؾ� �մϴ�.
	double* ptr = &value; // (int -> double )
	double* ptr1 = &x;

	printf("value ������ �� : %lf\n", *ptr);
	printf("x ������ �� : %lf\n", *ptr1);
	printf("ptr1 ���� ũ�� : %d\n", sizeof(ptr1));

	ptr = &x;
	printf("x ������ �� : %lf\n", *ptr);

	*ptr = 15.15;
	printf("x ������ �� : %lf\n", *ptr);

	*/

	//�迭
	/*
		�迭
			- ���� �ڷ����� ������� �̷���� ���� ����


	int array[5];
	// 4byte(int) �޸� ������ 5���� �������� �޸� ���� ���� : 20byte

	//�迭�� ���� ���Ҵ� 0�̴�.
	//�迭�� ũ�⸦ ����� ������ �� ���� (array[5] = 100;)
	array[0] = 10;
	array[1] = 20;
	array[2] = 30;
	array[3] = 40;
	array[4] = 50;


	for (int i = 0; i < 5; i++)
	{
		printf("array %d��°�� �� : %d\n", i+1, array[i]);
	}
	printf("array ũ�� : %d byte", sizeof(array));
	*/

	//�迭�� �ʱ�ȭ
	/*
	*
	int room[10] = { 0,5,10 };

	// for�񱳹� �������� �ϴ¹� : �迭 ũ�� / �迭�� �ڷ���
	int size = sizeof(room)/sizeof(int);

	for (int i = 0; i < size; i++)
	{
		printf("room�� %2d��° �� : %d\n", i + 1, room[i]);
	}

	//�迭�� ũ�⸦ ������ �� �ְ�, ��Ͽ� ������ ���� ���� �����Ϸ��� �ڵ����� ũ����

	double team[] = { 5.5, 6.4, 7.2 };
	int size = sizeof(team) / sizeof(double);

	printf("���� �迭 ũ�� : %d\n", sizeof(team));

	for (int i = 0; i < size; i++)
	{
		team[i] = 0;
		printf("team[%d] �� �� : %lf\n",i,team[i]);
	}
	*/

}
