#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define MAPHEIGHT 36
#define MAPWIDTH 16

// ���� ���� ���� [���η�][���η�]

// ���� �� ���� [���η�][���η�] 
/*
	0 �׳� ���
	1 ö
	2 ��
	3 ��
	4 ���̾�
	5 ��Ʋ
*/
char MAPBLOCK[MAPHEIGHT][MAPWIDTH] =
{
	{"99"},
	{"888"},
	{"888"},
	{"888"},
	{"8887777S"},
	{"500000000000005"},
	{"500000000000005"},
	{"500000000000105"},
	{"500001000000005"},
	{"500000000000005"},
	{"500000002000005"},
	{"500010000000005"},
	{"500000000000005"},
	{"500000000002005"},
	{"500000000000005"},
	{"500010000000005"},
	{"500000000000005"},
	{"500000000300005"},
	{"500000000000005"},
	{"500000000000005"},
	{"500000000000005"},
	{"500030000000005"},
	{"500030000003005"},
	{"500000000000005"},
	{"500000000000005"},
	{"500000000000005"},
	{"500020000000005"},
	{"500000000030005"},
	{"500000000000005"},
	{"500000000000005"},
	{"500000000000005"},
	{"504000000040005"},
	{"500000000000005"},
	{"500004000000005"},
	{"500000000000005"},
	{"555555565555555"}
};

void init();

void PrintBLOCK(char block[MAPHEIGHT][MAPWIDTH]);
void gotoXY(int x,int y);
void textcolor(int);

int main()
{
	init();
	


	PrintBLOCK(MAPBLOCK);
	
	


	return 0;
}


// ���� ����� ũ��
void init() 
{
	system("mode con cols=60 lines=40 | title ����");
}

// ���� ���ȭ
void PrintSHOP(char shop[5][3])
{
	for (int i = 0; i < 5;i++)
	{
		for (int j = 0;j < 3;j++)
		{
			if (shop[i][j] == '1')
				printf("��");
			else if (shop[i][j] == '0')
				printf("��");
		}
		printf("\n");
	}
}

// �ʵ� ���ȭ �� ����
void PrintBLOCK(char block[MAPHEIGHT][MAPWIDTH])
{
	for (int i = 0; i < MAPHEIGHT;i++)
	{
		for (int j = 0;j < MAPWIDTH;j++)
		{
			if (block[i][j] == '0')
			{
				textcolor(6);
				printf("��");
				printf("\x1b[0m");
			}// �׳� ���
			else if (block[i][j] == '1')
			{
				textcolor(8);
				printf("��");
				printf("\x1b[0m");
			}// ö
			else if (block[i][j] == '2')
			{
				textcolor(7);
				printf("��");
				printf("\x1b[0m");
			}// ��
			else if (block[i][j] == '3')
			{
				textcolor(14);
				printf("��");
				printf("\x1b[0m");
			}// ��
			else if (block[i][j] == '4')
			{
				textcolor(11);
				printf("��");
				printf("\x1b[0m");
			}// ���̾�
			else if (block[i][j] == '5')
				printf("��"); // ��Ʋ
			else if (block[i][j] == '6')
			{
				textcolor(12);
				printf("��");
				printf("\x1b[0m");
			}// �ı� �� ���� ��
			else if (block[i][j] == '7')
			{
				printf("��");
			} // ����
			else if (block[i][j] == '8')
			{
				printf("��");
			}// ���� ��
			else if (block[i][j] == '9')
			{
				printf("��");
			}// ���� ����

			else if (block[i][j] == 'S')
			{
				printf("��");
			}
		}
		printf("\n");
	}
}

// ��� �̵�
void gotoXY(int x, int y)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position;
	position.X = x;
	position.Y = y;
	SetConsoleCursorPosition(consoleHandle, position);
} 

// ���� �ڵ�
enum ColorType {
	BLACK,  	//0
	darkBLUE,	//1
	DarkGreen,	//2
	darkSkyBlue,//3
	DarkRed,  	//4
	DarkPurple,	//5
	BROWN,	//6
	GRAY,		//7
	DarkGray,	//8
	BLUE,		//9
	GREEN,		//10
	SkyBlue,	//11
	RED,		//12
	PURPLE,		//13
	YELLOW,		//14
	WHITE		//15
} COLOR;
void textcolor(int colorNum) 
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
}