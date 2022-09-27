#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <windows.h>

// ���� ���۸��̶�
/*
	�̱� ���۸����� ȭ���� �׸� ��� �����͸� �����ϴ� ����
	���� �׸��� �����͸� ������ �� ���� ������ ����� �׸��� �ݺ��� ���
	�������� ���� ���� ȭ���� ���� ��ü�ϴ� ���


#define BufferWidth 80 // ���� ���α���
#define BufferHeight 40 // ���� ���α���

// HANDLE �ε����� �����Ͽ� ���۱�ü����
int screenIndex = 0;
// ���� 2�� ����
HANDLE Screen[2];

struct Player
{
	int x;
	int y;
	const char* shape;
};

//����ü ������ ����
Player* player;

// ���� �ʱ�ȭ �Լ�
void ScreenInit()
{
	CONSOLE_CURSOR_INFO cursor;
	COORD size = { BufferWidth,BufferHeight };
	SMALL_RECT rect = { 0,0,BufferWidth - 1,BufferHeight - 1 };

	// ȭ�� 2�� ����
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

	// Ŀ�� �����
	cursor.dwSize = 1;
	cursor.bVisible = false;
	SetConsoleCursorInfo(Screen[0], &cursor);
	SetConsoleCursorInfo(Screen[1], &cursor);
}

// ���� ��ü �Լ�
void ScreenFlipping()
{
	// ���۴� �ϳ��� Ȱ��ȭ ����
	SetConsoleActiveScreenBuffer(Screen[screenIndex]);
	screenIndex = !screenIndex;
}

// ���� ����� �Լ�
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

// ���� ���� �Լ�
void ScreenRelease()
{
	CloseHandle(Screen[0]);
	CloseHandle(Screen[1]);
}

// ����Լ�
void ScreenPrint(int x, int y, const char* string)
{
	COORD cursorPosition = { x,y };
	DWORD dw;

	SetConsoleCursorPosition(Screen[screenIndex], cursorPosition);
	WriteFile(Screen[screenIndex], string, strlen(string), &dw, NULL);
}

int main()
{
	// �÷��̾� ����
	player = (Player*)malloc(sizeof(Player));
	player->x = 5;
	player->y = 5;
	player->shape = "��";

	ScreenInit(); // ���� �ʱ�ȭ

	while (1)
	{
		if (GetAsyncKeyState(VK_RIGHT))
		{
			player->x++;
			Sleep(100);
		}

		ScreenPrint(player->x, player->y, player->shape);

		ScreenFlipping(); // ���� ��ü
		ScreenClear(); // ��ü�� ���� ���� ����
	}
	ScreenRelease(); // ��������

	return 0;
}*/