#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <windows.h>


// ���� �� ���� [���η�][���η�] 
/*
	0 �׳� ���
	1 ö
	2 ��
	3 ��
	4 ���̾�
	5 ��Ʋ
*/
char tempMAP[35][30];
char MAPBLOCK[35][30] =
{
	{"9979999999999999999999999999"},
	{"8889999999999999999999999999"},
	{"8889999999999999999999999999"},
	{"8889999999999999999999999999"},
	{"88877777777777P7777777777777"},
	{"5000000000000000000000000005"},
	{"5000000000000000000000000005"},
	{"5000010000000000100000000105"},
	{"5000010000000200000000010005"},
	{"5000000000000000100000000005"},
	{"5000020000000000000000002005"},
	{"5000001000020000000020000005"},
	{"5000000010000000000010000005"},
	{"5000200000000000000000000005"},
	{"5000000000000000000000000005"},
	{"5010000000002000003000000105"},
	{"5000000002000000010000000005"},
	{"5003000000000002000000003005"},
	{"5000000100000300001000000005"},
	{"5000000000000000000000000005"},
	{"5000000000000000000000000005"},
	{"5030000000000002000000000005"},
	{"5030002000000000000000300005"},
	{"5000000000000000000000000005"},
	{"5000000000000000030000000005"},
	{"5000000000000000000000000005"},
	{"5000002000000000003000000005"},
	{"5000000003000000000002000005"},
	{"5000000000000010000000000005"},
	{"5000000000000040000000000005"},
	{"5000000000000001000000000005"},
	{"5040000000000000000000000405"},
	{"5000000000000000000000000005"},
	{"5040000000000000040000000005"},
	{"5555555555555565555555555555"}
};

void init();

void PrintBLOCK(int*, int*); // ä������
void gotoXY(int x,int y); // ĳ���̵�
void textcolor(int,int); // ���� ����
void GLoop(); // ���� ����
void move(int*, int*, int, int, int*); // �÷��̾� �̵�
void UI(int*);

int main()
{
	init();
	
	while (1) //����
	{
		GLoop(); // �����Լ�
	}
	
	

}


// ���� ����� ũ�� �� Ŀ�������
void init() 
{
	system("mode con cols=60 lines=40 | title ä��");
	HANDLE ConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = 0;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(ConsoleHandle, &ConsoleCursor);
}

// �ʵ� ���ȭ �� ����
void PrintBLOCK(int* x, int* y)
{
	system("cls");
	for (int i = 0; i < 35;i++)
	{
		
		for (int j = 0;j < 30;j++)
		{
			
			char temp = tempMAP[i][j]; 
			if (temp == '0')
			{
				textcolor(6,6);
				printf(" ");
				printf("\x1b[0m");
			}// �׳� ���
			else if (temp == '1')
			{
				textcolor(8,8);
				printf("$");
				printf("\x1b[0m");
			}// ö
			else if (temp == '2')
			{
				textcolor(7,7);
				printf("+");
				printf("\x1b[0m");
			}// ��
			else if (temp == '3')
			{
				textcolor(14,14);
				printf("^");
				printf("\x1b[0m");
			}// ��
			else if (temp == '4')
			{
				textcolor(11,11);
				printf("&");
				printf("\x1b[0m");
			}// ���̾�
			else if (temp == '5')
			{
				textcolor(15, 15);
				printf("-"); // ��Ʋ
				printf("\x1b[0m");
			}
			else if (temp == '6')
			{
				textcolor(12,12);
				printf("*");
				printf("\x1b[0m");
			}// �ı� �� ���� ��
			else if (temp == '7')
			{
				printf(" ");
			} // ����
			else if (temp == '8')
			{
				textcolor(0, 15);
				printf("+");
				printf("\x1b[0m");
			}// ���� ��
			else if (temp == '9')
			{
				printf(" ");
			}// �ϴ� (�ö� ����)

			else if (temp == 'P')
			{
				*y = i;
				*x = j;
				printf("O");
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
void textcolor(int font, int back) // ���ڻ��� ����
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); // �ܼ��ڵ�
	int code = font + back * 16; 
	SetConsoleTextAttribute(consoleHandle, code);
}



void GLoop()
{
	int x, y; // �÷��̾� ��ǥ ���� ����
	int cnt=20; // ��� ī��Ʈ
	int playing = 1; // while���� ���� ���� 1 > ������

	memcpy(tempMAP, MAPBLOCK, sizeof(tempMAP)); // �ʺ���(���纻,����,ũ��)

	PrintBLOCK(&x,&y); // �����

	while (playing) 
	{
		UI(&cnt);
		if (_kbhit())
		{
			int key = _getch();
			switch (key)
			{
			case 72: //��
				move(&x, &y, 0, -1,&cnt);
				break;
			case 77: //��
				move(&x, &y, 1, 0,&cnt);
				break;
			case 75: //��
				move(&x, &y, -1, 0,&cnt);
				break;
			case 80: //��
				move(&x, &y,0, 1,&cnt);
				break;
			}
		}
		//���� ����
	}
}

void move(int* x, int* y, int _x, int _y,int *cnt) // ������ ������ǥ/ ����� �̵�ġ
{
	char OBJECT = MAPBLOCK[*y + _y][*x + _x];
	if (OBJECT == '0')
	{
		*cnt -= 1;
		gotoXY(*x, *y);
		printf(" ");
		

		gotoXY(*x + _x, *y + _y);
		printf("O");

		*x += _x;
		*y +=_y;
		
	}
	else if (OBJECT == '1')
	{
		*cnt -= 2;
		gotoXY(*x, *y);
		printf(" ");

		gotoXY(*x + _x, *y + _y);
		printf("O");

		*x += _x;
		*y += _y;
	}
	else if (OBJECT == '7'||OBJECT == 'P')
	{
		gotoXY(*x, *y);
		printf(" ");

		gotoXY(*x + _x, *y + _y);
		printf("O");

		*x += _x;
		*y += _y;
	}
}


void UI(int* cnt)
{
	gotoXY(39, 6);
	printf("�̵� Ƚ�� : %02d", *cnt);
}