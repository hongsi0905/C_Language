#pragma once
#include <stdio.h>
#include <math.h>

struct Player
{
	int x, y;

};

struct Monster
{
	int x, y;

};

void ParameterArray(int array[])
{
	for (int i = 0;i < 5;i++)
	{
		array[i] = 10;
	}
}

void StructArray(struct Player* x)
{

}

int main()
{
	//void main / int main
	/*
		int main()
		: �Լ��� ������ �� ������ ���� �����ϰڴٴ� �ǹ�

		void main()
		: �Լ��� ������ �� �ƹ� ���� �������� �ʰڴٴ� �ǹ�

		�ü������ ���α׷��� ���� ������ �������ش�.
		0�� �����ϰ� �Ǹ� ���α׷���  ���������� ������ ��ġ�� �����ϴ� ������ ����
		0 �̿ܿ� ���� �����ϰ� �Ǹ� ������������ ����Ǵ� ������ �Ǵ�
	*/

	//�� �� ������ �Ÿ� (ĳ���Ϳ� �巡�� �Ÿ�)
	/*

	struct Player character = { 0,0 };
	struct Monster dragon = { 3,5 };

	double a, b;
	a = dragon.x - character.x;
	b = dragon.y - character.y;
	double distance = sqrt(pow(a, 2) + pow(b, 2));

	printf("�� �� ���̰Ÿ� : %lf\n", distance);
	*/

	//��Ʈ�� ����
	/*
	//��Ʈ(sqrt)
	int value = 16;
	printf("��Ʈ 100 �� : %lf\n", sqrt(value));

	//����(pow)
	//x�� ���� pow(��, x)
	int variable = 10;
	printf("variable ���� : %lf\n", pow(variable, 2));
	*/

	// Lvalue / Rvalue
	/*
		Lvalue : ǥ���� ���Ŀ��� ������� �ʴ� ��, �̸��� ���ϰ� �ִ� ���� * ����� ����� �� ����.
		Rvalue : ǥ���� ���Ŀ� ������� ��, �ӽ� ����
		Lvalue�� Rvalue�� ����� �� �ִ�.

	//a,b (Lvalue) / 10,20(Rvalue)
	int a = 10;
	int b = 20;

	int result = a + b;
	printf("result ���� �� : %d\n", result);
	*/

	// ��������, ���� ����
	/*
		���� ������ Lvalue, Rvalue ����� �� �ִ�.
		���� ������ Rvalue�θ� ����� �� �ִ�.


	int x = 0;
	int y = 0;

	++x; //���� ������ ������ �ڱ� �ڽ�(����)�� ��ȯ
	y++; //���� ������ ������ ���纻�� ��ȯ
	

	int room[5] = { 0, }; // ,(�޸�) ���� ��� ���� 0���� �ʱ�ȭ
	for (int i = 0;i < 5;i++)
	{
		printf("[%d]", room[i]);
	}
	printf("\n");
	//room�� �迭�� ���� �ּ��̴�.
	ParameterArray(room);
	for (int i = 0;i < 5;i++)
	{
		printf("[%d]", room[i]);
	}

	return 0;

}
*/