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
	cursor.bVisible = 0; // bvisible : 커서 노출 여부에 대한 변수 ( 0 : 비활성화 / 1 : 활성화 )
	//SetConsoleCursorInfo : 저장되어 있는 콘솔 스크린 버퍼에 대하여 커서의 형태를 설정하는 함수
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor);
}

int main()
{
	//파일 쓰기
	/*
	// fopen()

		첫 번째 매개변수 : 텍스트 파일의 이름
		두 번째 매개변수 : 텍스트 파일의 입출력 모드 (read / write)

	FILE* filePointer = fopen("data.txt","w");

	// fputs : 파일에 문자를 하나씩 쓰는 함수
	fputs("체력\n", filePointer);
	fputs("마력\n", filePointer);
	fputs("공격력\n", filePointer);

	// 열린 파일을 닫음
	fclose(filePointer);
	*/

	// 파일 읽기
	/*
	FILE* readPointer = fopen("image/Nyang.txt", "r");
	// 버퍼 생성 : 파일을 읽기 위해서는 문자열을 담을 수 있는 버퍼가 필요
	char buffer[10000] = { 0, };

	//fread
	/*
		첫 번째 매개변수 : 읽기 위한 버퍼 배열 정의
		두 번째 매개변수 : 크기를 가지는 배열포인터
		세 번째 매개변수 : 읽어들이는 원소의 크기(단위 : 바이트)
		네 번째 매개변수 : 데이터를 입력받을 스트림 파일 객체포인터

	fread(buffer, 1, 10000, readPointer);
	printf("%s", buffer);

	fclose(readPointer);
	*/

	/*
	char array[] = "Hello"; // 영어표기(아스키) : 1byte ( 0 ~ 255 가지의 데이터 표현 )
	char korean[] = "안녕하세요"; // 한글표기(유니코드) : 2byte ( 초성19, 중성21, 종성28로 11172자 표현 )
	

	CursorActive();

	//사운드 호출
	PlaySound(TEXT("Sound.wav"), 0, SND_FILENAME | SND_ASYNC | SND_LOOP);

	while (1)
	{

	}

	// 텍스트 색상변경 함수
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);


	return 0;
}
*/