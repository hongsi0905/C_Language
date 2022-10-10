#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <windows.h>


// 게임 땅 설정 [가로로][세로로] 
/*
	0 그냥 블록
	1 철
	2 은
	3 금
	4 다이아
	5 맨틀
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

void PrintBLOCK(int*, int*); // 채굴지역
void gotoXY(int x,int y); // 캐릭이동
void textcolor(int,int); // 광석 색상
void GLoop(); // 게임 루프
void move(int*, int*, int, int, int*); // 플레이어 이동
void UI(int*);

int main()
{
	init();
	
	while (1) //루프
	{
		GLoop(); // 루프함수
	}
	
	

}


// 게임 제목과 크기 및 커서숨기기
void init() 
{
	system("mode con cols=60 lines=40 | title 채굴");
	HANDLE ConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = 0;
	ConsoleCursor.dwSize = 1;
	SetConsoleCursorInfo(ConsoleHandle, &ConsoleCursor);
}

// 필드 블록화 및 색상
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
			}// 그냥 블록
			else if (temp == '1')
			{
				textcolor(8,8);
				printf("$");
				printf("\x1b[0m");
			}// 철
			else if (temp == '2')
			{
				textcolor(7,7);
				printf("+");
				printf("\x1b[0m");
			}// 은
			else if (temp == '3')
			{
				textcolor(14,14);
				printf("^");
				printf("\x1b[0m");
			}// 금
			else if (temp == '4')
			{
				textcolor(11,11);
				printf("&");
				printf("\x1b[0m");
			}// 다이아
			else if (temp == '5')
			{
				textcolor(15, 15);
				printf("-"); // 맨틀
				printf("\x1b[0m");
			}
			else if (temp == '6')
			{
				textcolor(12,12);
				printf("*");
				printf("\x1b[0m");
			}// 파괴 시 게임 끝
			else if (temp == '7')
			{
				printf(" ");
			} // 여백
			else if (temp == '8')
			{
				textcolor(0, 15);
				printf("+");
				printf("\x1b[0m");
			}// 상점 벽
			else if (temp == '9')
			{
				printf(" ");
			}// 하늘 (올라감 방지)

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

// 블록 이동
void gotoXY(int x, int y)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position;
	position.X = x;
	position.Y = y;
	SetConsoleCursorPosition(consoleHandle, position);
} 

// 색상 코드
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
void textcolor(int font, int back) // 글자색과 배경색
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); // 콘솔핸들
	int code = font + back * 16; 
	SetConsoleTextAttribute(consoleHandle, code);
}



void GLoop()
{
	int x, y; // 플레이어 좌표 저장 변수
	int cnt=20; // 곡괭이 카운트
	int playing = 1; // while값에 넣을 변수 1 > 게임중

	memcpy(tempMAP, MAPBLOCK, sizeof(tempMAP)); // 맵복사(복사본,원본,크기)

	PrintBLOCK(&x,&y); // 맵출력

	while (playing) 
	{
		UI(&cnt);
		if (_kbhit())
		{
			int key = _getch();
			switch (key)
			{
			case 72: //상
				move(&x, &y, 0, -1,&cnt);
				break;
			case 77: //우
				move(&x, &y, 1, 0,&cnt);
				break;
			case 75: //좌
				move(&x, &y, -1, 0,&cnt);
				break;
			case 80: //하
				move(&x, &y,0, 1,&cnt);
				break;
			}
		}
		//무한 루프
	}
}

void move(int* x, int* y, int _x, int _y,int *cnt) // 포인터 기존좌표/ 언더바 이동치
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
	printf("이동 횟수 : %02d", *cnt);
}