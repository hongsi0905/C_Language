#pragma once

#include <stdio.h>

void main()
{
	//��������
	/*
		��������
			- 1 = ��, 0 = ����
			- && (AND) : �� ���� ���� ��� ���̶�� ���� ����
			- || (OR) : �� ���� ���ǿ��� �ϳ��� ���̸� ���� ����


	int x = 10;
	int y = 20;

	if (x != 10 && y == 20)
	{
		printf("������ AND(&&) ��� : ��\n");
		if (5 < 10)
		{
			printf("if�� �ȿ� �ִ� ���ǹ�\n");
		}
	}
	if (x == 10 || y == 25)
	{
		printf("������ OR(||) ��� : ��\n");
	}


	*/

	//��и�
	/*
		��и�
		�� 1 ��и� : (+x +y)
		�� 2 ��и� : (-x +y)
		�� 3 ��и� : (-x -y)
		�� 4 ��и� : (+x -y)

		x ���� : (x y=0)
		y ���� : (x=0 y)
		���� : (x=0 y=0)



	int x ;
	int y ;

	printf("x�� y�� �� :");
	scanf_s("%d %d",&x, &y);


	if (x > 0 && y > 0)
	{
		printf("�� 1��и�\n");
	}
	else if (x < 0 && y > 0)
	{
		printf("�� 2��и�\n");
	}
	else if (x < 0 && y < 0)
	{
		printf("�� 3��и�\n");
	}
	else if (x > 0 && y < 0)
	{
		printf("�� 4��и�\n");
	}
	else if (x == 0 && y)
	{
		printf("Y����\n");
	}
	else if (x && y == 0)
	{
		printf("X����\n");
	}
	else if (x == 0 && y == 0)
	{
		printf("����\n");
	}
	*/

	//SWITCH / BREAK
	/*
		switch
			- � ����� ���� �� ������� ����Ǵ� ���ǹ�
		break
			- Ư���� �������� �б⸦ �����ϴ� ���ǹ�


	int value = 1;

	switch (value)
	{
		case 0: printf("0 �Դϴ�");
			break;

		case 1: printf("1 �Դϴ�");
			break;

		default: printf("�߸� ����");
	}


		���� ����ǥ
			A 100 - 90
			B 90 - 80
			C 80 - 70
			D 70 - 60
			E 60 - 50
			����


	char alphabet = 'C';

	switch (alphabet)
	{
		case 'A':printf("100 - 90��");
			break;
		case 'B':printf("90 - 80��");
			break;
		case 'C':printf("80 - 70��");
			break;
		case 'D':printf("70 - 60��");
			break;
		case 'E':printf("60 - 50��");
			break;
		default :printf("����");

	}


	float variable = 3.25;

	switch (variable)
	{
		case 3.25: printf("�ε� �Ҽ����� ������ ���� switch�� ������ ����� �� �����ϴ�.");
			break;
	}
	*/
}