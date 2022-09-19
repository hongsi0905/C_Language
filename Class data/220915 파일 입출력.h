#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <mmsystem.h>

#pragma comment(lib,"winmm.lib")

enum textColor
{
	BLACK,
	BLUE,
	GREEN,
	SILVER,
	RED,
	OFTEN,
	YELLOW,
	WHITE,
	GRAY
};

void CursorActive()
{
	CONSOLE_CURSOR_INFO cursor;
	GetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
	cursor.bVisible = 0; // bvisible : Ŀ�� ���� ���ο� ���� ���� ( 0 : ��Ȱ��ȭ / 1 : Ȱ��ȭ )
	//SetConsoleCursorInfo : ����Ǿ� �ִ� �ܼ� ��ũ�� ���ۿ� ���Ͽ� Ŀ���� ���¸� �����ϴ� �Լ�
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
}

int main()
{
	//���� ����
	/*
	// fopen()

		ù ��° �Ű����� : �ؽ�Ʈ ������ �̸�
		�� ��° �Ű����� : �ؽ�Ʈ ������ ����� ��� (read / write)

	FILE* filePointer = fopen("data.txt","w");

	// fputs : ���Ͽ� ���ڸ� �ϳ��� ���� �Լ�
	fputs("ü��\n", filePointer);
	fputs("����\n", filePointer);
	fputs("���ݷ�\n", filePointer);

	// ���� ������ ����
	fclose(filePointer);
	*/

	// ���� �б�
	/*
	FILE* readPointer = fopen("image/Nyang.txt", "r");
	// ���� ���� : ������ �б� ���ؼ��� ���ڿ��� ���� �� �ִ� ���۰� �ʿ�
	char buffer[10000] = { 0, };

	//fread
	/*
		ù ��° �Ű����� : �б� ���� ���� �迭 ����
		�� ��° �Ű����� : ũ�⸦ ������ �迭������
		�� ��° �Ű����� : �о���̴� ������ ũ��(���� : ����Ʈ)
		�� ��° �Ű����� : �����͸� �Է¹��� ��Ʈ�� ���� ��ü������

	fread(buffer, 1, 10000, readPointer);
	printf("%s", buffer);

	fclose(readPointer);
	*/

	/*
	char array[] = "Hello"; // ����ǥ��(�ƽ�Ű) : 1byte ( 0 ~ 255 ������ ������ ǥ�� )
	char korean[] = "�ȳ��ϼ���"; // �ѱ�ǥ��(�����ڵ�) : 2byte ( �ʼ�19, �߼�21, ����28�� 11172�� ǥ�� )
	

	CursorActive();

	//���� ȣ��
	PlaySound(TEXT("Sound.wav"), 0, SND_FILENAME | SND_ASYNC | SND_LOOP);

	while (1)
	{

	}

	// �ؽ�Ʈ ���󺯰� �Լ�
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);


	return 0;
}
*/