#include <stdio.h>

void main()
{
	// ������ �迭
	/*
		�迭�� ��ҷ� ������ ������ ������ �迭
	

	int num1 = 10, num2 = 20, num3 = 30;

	int* array[] = { &num1, &num2, &num3 };

	for (int i = 0;i < 3;i++)
	{
		printf("array �������� �� : %p\n", array[i]); 
		printf("arry �����Ͱ� ����Ű�� �� : %d\n", *array[i]);
	}
	*/

	// ������ ���ڿ�
	/*
	 const char* data[3] = { "Apple","Banana","Melon" }; //�����ּҸ� �˸� %s�� ���� ���
	
	 data[0] = "Cherry"; // ������ ���ڿ��� ������ �� �ƴ� ���� ��ġ�� �ٲ�

	 for (int i = 0;i < 3;i++)
	 {
		 printf("%s\n", data[i]); // %s : '\0'(NULL) ���ڸ� ���� ������ ����ϴ� ���� ������
	 }
	 */

	// ASCII �ڵ�
	/*
		�̱� ǥ��ȭ ��ȸ�� ������ ���� ��ȯ�� ǥ���ڵ�
		���� ���ĺ��� ����ϴ� ��ǥ���� ���� ���ڵ�
	

	if ('A' < 'B')
	{
		for (int i = 0;i < 26;i++)
		{
			char alphabet = 'A' + i;
			printf("%c ", alphabet);
		}
	}
	*/

	// �����
	/*
		�� ���� ����(int)�� �Է�
		A�� B ������ ����� ����� ���
	
	int A = 0, B = 0;
	printf("������ �Է����ּ��� : ");
	scanf_s("%d %d", &A, &B);

	printf("A�� ��� : ");
	for (int i = 1;i <= A;i++)
	{
		if (A % i == 0)
		{
			printf("%d ", i);
		}
	}

	printf("\nB�� ��� : ");
	for (int i = 1;i <= B;i++)
	{
		if (B % i == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\nA�� B�� ����� : ");
	
	for (int i = 1;i <= A && i <= B;i++)
	{
		if (A % i == 0 && B % i == 0)
		{
			printf("%d ", i);
		}
	}
	*/

	// ������
	/*
		�ڱ� �ڽ��� ������ ���� ���(�����)�� ������ �� �ڱ� �ڽ��� �Ǵ� ���� ������ ���Ѵ�.
		�Ǵ� ��� ���� ����� ������ �� �ڱ� �ڽ��� 2�谡 �Ǵ� ����� �Ѵ�. 6, 28 ,496...
	*/

	int a;
	int sum = 0;

	printf("�������� �Է��ϼ���(���� ������ ������ �������� �ƴմϴ�.) : ");
	scanf_s("%d", &a);

	for (int i = 1;i <= a;i++)
	{
		if (a % i == 0)
		{
			sum += i;
			if (sum == a)
			{
				printf("%d ��/�� ������ �Դϴ�.", sum);
			}
		}
	}



}