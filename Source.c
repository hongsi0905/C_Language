#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// Typedef
/*
	�̹� ���Ǵ� �ڷ����� �ٸ� ���ο� �ڷ������� �������� �� �ֵ��� ���ִ� Ű����
	typedef����ü�� ������ �� [_�̸�] ���� ���� [�̸�] ����
*/
typedef int INTEL;
typedef struct _Player
{
	int x;
	int y;
	char name[20];
	const char* shape;
}Player;

int main()
{
	// Typedef
	/*
	int a = 10;
	INTEL b = 20;
	printf("a : %d // b : %d\n", a, b);

	Player player;
	strcpy(player.name, "Bell");
	printf("�÷��̾�� : %s\n", player.name);
	*/

	// ���� : �Է°� N�� �־����� �� 1���� N������ ���� ���ϴ� ���α׷� �ۼ�
	/*
	int n;
	int sum = 0;
	int i = 0;

	scanf_s("%d", &n);
	while (i != n)
	{
		i++;
		sum += i;
	}
	printf("%d������ �� : %d\n",n, sum);
	*/

	// ���� : �������� �����
	int i, j, k;

	for (i = 0;i <5 ;i++)
	{
		for (j = 5;j > i;j--)
		{
			printf(" ");
		}
		for (k = 0;k <= i;k++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}