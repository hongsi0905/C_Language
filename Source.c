#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// Typedef
/*
	이미 사용되는 자료형을 다른 새로운 자료형으로 재정의할 수 있도록 해주는 키워드
	typedef구조체를 선언할 때 [_이름] 선언 정의 [이름] 선언
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
	printf("플레이어명 : %s\n", player.name);
	*/

	// 문제 : 입력값 N이 주어졌을 때 1부터 N까지의 합을 구하는 프로그램 작성
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
	printf("%d까지의 합 : %d\n",n, sum);
	*/

	// 문제 : 역순으로 별찍기
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