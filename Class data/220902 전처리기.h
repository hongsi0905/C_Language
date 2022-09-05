#pragma once
#include <stdio.h> // < > ���̺귯�� ��� ������ ������ �� ���
#include "Calculator.h" // "" ����� ���� ��� ������ ������ �� ���

//��ũ��
/*
	��ũ�ο����� ;�� �ʿ����� �ʴ�.
	��ũ�ο� ��ũ�� �Լ��� �ڷ����� ����. > �޸� ������ Ȯ������ �ʴ´�.
	��ũ�� ������ ����̰�, �޸� ������ ���� ������ ���� ������ �� ����.
	���� : ������ ������ �� ������� ���� �ʴ´�.
*/
#define PI 3.14
#define Solution(x, y) x * y
#define ANDROID 1
#define IOS 0

// ����ü
/*
	����ü�� �����ϱ� ����
	����ü�� �޸� ������ �������� �����Ƿ�
	����ü ���ο� �ִ� �����͸� �ʱ�ȭ�� �� ����.
*/
struct Character
{
	int health;
	float weight;
	const char* name;
};

void main()
{
	// ��ó����
	/*
		���α׷��� �����ϵǱ� ������ ���α׷��� ���� ���� ó���ϴ� ����

	int result = Function(10, 20);

	printf("result������ �� : %d\n", result);
	*/

	// ��ũ��
	/*

	int a = 1;
	int b = 2;
	printf("PI�� �� : %f\n", PI);
	printf("Solution �Լ� ��� : %d\n", Solution(a+1, a+2));
	*/

	// ���Ǻ� ������
	/*
		���ǿ� ���� �ڵ��� ���� �κ��� ���������� �� ���� ����
		���Ǻ� �������� #endif�� ����ؼ� ������ �Ѵ�.

#if IOS
	printf("�ȵ���̵� ����Դϴ�."); // �� (������) ���� (£����)
#elif ANDROID
	printf("�� ��° �����Դϴ�."); // �� (������) ���� (£����)
#else
	printf("2���� ������ Ʋ�Ƚ��ϴ�."); // �� (������) ���� (£����)
#endif
*/

// ����ü
/*
	���� ���� ������ �ϳ��� �������� ����ȭ�� ���� �ϳ��� ��ü�� �����ϴ� ��

struct Character leesin;
leesin.health = 100;
leesin.name = "���� �г�";
leesin.weight = 80.5f;

printf("������ ü�� : %d\n", leesin.health);
printf("������ �ñر� : %s\n", leesin.name);
printf("������ ���� : %.2f kg\n", leesin.weight);

// ����ü�� �ʱ�ȭ ����Ʈ ��� ��
// ����ü ������ ����� ������ ������ ���ǵǾ�� �Ѵ�.
struct Character BlackMage = { 1000,12.25f,"HardBoss"};
printf("�˸� ü�� : %d\n", BlackMage.health);
printf("�˸� ���̵� : %s\n", BlackMage.name);
printf("�˸� ������ : %.2f\n", BlackMage.weight);
*/

// ���׼�
/*
	�ڿ��� �߿� �ڱ� �ڽ��� ������ ���� �����
	��� ������ �� �ڱ� �ڽź��� �� Ŀ���� ���̴�.
	ex 12, 18, 20, 24, ...


	int num;
	int sum = 0;
	printf("�ڿ����� �Է����ּ���.");
	scanf_s("%d", &num);
	for (int x = 1;x <= num;x++)
	{
		printf("%d : ", x);
		for (int i = 1;i < x;i++)
		{
			if (x % i == 0)
			{
				sum += i;
			}
		}
		if (sum > x)
		{
			printf("���׼��Դϴ�.\n");
		}
		else
		{
			printf("���׼� �ƴմϴ�.\n");
		}
		sum = 0;
	}

}
*/