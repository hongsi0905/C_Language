#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <windows.h>

// 더블 버퍼링이란
/*
	싱글 버퍼링으로 화면을 그릴 경우 데이터를 저장하는 동안
	다음 그림의 데이터를 전송할 수 없기 때문에 지우고 그리며 반복할 경우
	깜빡임을 막기 위해 화면을 서로 교체하는 기법


#define BufferWidth 80 // 버퍼 가로길이
#define BufferHeight 40 // 버퍼 세로길이

// HANDLE 인덱스에 접근하여 버퍼교체변수
int screenIndex = 0;
// 버퍼 2개 생성
HANDLE Screen[2];

struct Player
{
	int x;
	int y;
	const char* shape;
};

//구조체 포인터 선언
Player* player;

// 버퍼 초기화 함수
void ScreenInit()
{
	CONSOLE_CURSOR_INFO cursor;
	COORD size = { BufferWidth,BufferHeight };
	SMALL_RECT rect = { 0,0,BufferWidth - 1,BufferHeight - 1 };

	// 화면 2개 생성
	// Front Buffer
	Screen[0] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL, CONSOLE_TEXTMODE_BUFFER, NULL
	);

	SetConsoleScreenBufferSize(Screen[0], size);
	SetConsoleWindowInfo(Screen[0], TRUE, &rect);

	// Back Buffer
	Screen[1] = CreateConsoleScreenBuffer
	(
		GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE,
		NULL, CONSOLE_TEXTMODE_BUFFER, NULL
	);

	SetConsoleScreenBufferSize(Screen[1], size);
	SetConsoleWindowInfo(Screen[1], TRUE, &rect);

	// 커서 숨기기
	cursor.dwSize = 1;
	cursor.bVisible = false;
	SetConsoleCursorInfo(Screen[0], &cursor);
	SetConsoleCursorInfo(Screen[1], &cursor);
}

// 버퍼 교체 함수
void ScreenFlipping()
{
	// 버퍼는 하나만 활성화 가능
	SetConsoleActiveScreenBuffer(Screen[screenIndex]);
	screenIndex = !screenIndex;
}

// 버퍼 지우는 함수
void ScreenClear()
{
	COORD coord = { 0,0 };
	DWORD dw;
	FillConsoleOutputCharacter
	(
		Screen[screenIndex],
		' ',
		BufferWidth * BufferHeight,
		coord,
		&dw
	);
}

// 버퍼 해제 함수
void ScreenRelease()
{
	CloseHandle(Screen[0]);
	CloseHandle(Screen[1]);
}

// 출력함수
void ScreenPrint(int x, int y, const char* string)
{
	COORD cursorPosition = { x,y };
	DWORD dw;

	SetConsoleCursorPosition(Screen[screenIndex], cursorPosition);
	WriteFile(Screen[screenIndex], string, strlen(string), &dw, NULL);
}

int main()
{
	// 플레이어 생성
	player = (Player*)malloc(sizeof(Player));
	player->x = 5;
	player->y = 5;
	player->shape = "♠";

	ScreenInit(); // 버퍼 초기화

	while (1)
	{
		if (GetAsyncKeyState(VK_RIGHT))
		{
			player->x++;
			Sleep(100);
		}

		ScreenPrint(player->x, player->y, player->shape);

		ScreenFlipping(); // 버퍼 교체
		ScreenClear(); // 교체된 버퍼 내용 삭제
	}
	ScreenRelease(); // 버퍼해제

	return 0;
}*/