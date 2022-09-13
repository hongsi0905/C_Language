#include <stdio.h>
#include <conio.h>
#include <windows.h>

// 가변인수
/*
	인수의 개수와 타입이 미리 정해져있지 않은 인수

	가변 인수를 만들기 위해서 자료형을 선언해주어야 한다.
	연속적인 메모리 공간을 가진다.



void Function(int x,...)
{
	va_list pointer; // 가변 인수의 목록 포인터
	__crt_va_start(pointer, x); // 가변 인수 목록 포인터 설정
	
	for (int i = 0; i < x;i++)
	{
		// 가변 인수(x)의 개수만큼 반복설정
		int value = __crt_va_arg(pointer, int); // int 크기만큼 가변 인수 목록 포인터에서 값을 가져온다.
		// 포인터는 int 크기만큼 순방향 이동
		printf("%d\n", value);
	}
	__crt_va_end(pointer); // 가변 인수 목록 포인터를 NULL 초기화
}
*/

// 좌표 정보 X/Y 받는 함수
void gotoXY(int x, int y)
{
	// x/y 좌표값 설정
	COORD position = { x,y }; 
	// 좌표 위치이동함수
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position); 

}

int main()
{	
	// 가변인수 
	/*
	Function(3, 20, 30, 40); // 펑션함수는 하나의 매개변수를 가지고 있기 때문에 하나의 인수만 전달할 수 있다.

	printf("%d %d %d %d", 20, 30, 40, 50); // printf 함수는 인수를 계속 가변적으로 받을 수 있다.
	*/

	// 물체 이동
	/**/
	// 좌표 정보 설정
	int x = 5, y = 5;
	
	
	// 키 입력은 프레임마다 입력
	while(1)
	{ 
		// 키 입력 : 논블로킹/블로킹
		//블로킹 : 키 입력을 받을 때까지 계속 대기하고 다른 작업이 실행되지 않는다.
		//논블로킹 : 키 입력을 하지 않아도 다른 작업이 실행될 수 있다.

		// 아랫키를 눌렀을 때 실행되는 함수
		if (GetAsyncKeyState(VK_DOWN))
		{
			y++; 
			Sleep(100); // 0.1s 대기 (1/1000 단위)  
		}
		// 좌표(5,5) 설정
		gotoXY(x, y);
		// 좌표정보를 받아 테스트 출력
		printf("♠");
		// 시스템 cls : 화면 전체 지우는 함수
		system("cls");

	}
	return 0;
}
