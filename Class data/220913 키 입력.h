#pragma once
#include <stdio.h>
#include <conio.h>
#include <windows.h>

// �����μ�
/*
	�μ��� ������ Ÿ���� �̸� ���������� ���� �μ�

	���� �μ��� ����� ���ؼ� �ڷ����� �������־�� �Ѵ�.
	�������� �޸� ������ ������.



void Function(int x,...)
{
	va_list pointer; // ���� �μ��� ��� ������
	__crt_va_start(pointer, x); // ���� �μ� ��� ������ ����

	for (int i = 0; i < x;i++)
	{
		// ���� �μ�(x)�� ������ŭ �ݺ�����
		int value = __crt_va_arg(pointer, int); // int ũ�⸸ŭ ���� �μ� ��� �����Ϳ��� ���� �����´�.
		// �����ʹ� int ũ�⸸ŭ ������ �̵�
		printf("%d\n", value);
	}
	__crt_va_end(pointer); // ���� �μ� ��� �����͸� NULL �ʱ�ȭ
}
*/

// ��ǥ ���� X/Y �޴� �Լ�
void gotoXY(int x, int y)
{
	// x/y ��ǥ�� ����
	COORD position = { x,y };
	// ��ǥ ��ġ�̵��Լ�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);

}

int main()
{
	// �����μ� 
	/*
	Function(3, 20, 30, 40); // ����Լ��� �ϳ��� �Ű������� ������ �ֱ� ������ �ϳ��� �μ��� ������ �� �ִ�.

	printf("%d %d %d %d", 20, 30, 40, 50); // printf �Լ��� �μ��� ��� ���������� ���� �� �ִ�.
	*/

	// ��ü �̵�
	/**/
	// ��ǥ ���� ����
	int x = 5, y = 5;
	int key = 0;

	// Ű �Է��� �����Ӹ��� �Է�
	while (1)
	{
		// Ű �Է� : ����ŷ/���ŷ

		//����ŷ : Ű �Է��� ���� �ʾƵ� �ٸ� �۾��� ����� �� �ִ�.
		/*
		// �Ʒ�Ű�� ������ �� ����Ǵ� �Լ�
		if (GetAsyncKeyState(VK_UP))
		{
			y--;
			Sleep(100);
			if (y < 0)
			{
				y++;
			}
		}

		if (GetAsyncKeyState(VK_DOWN))
		{
			y++;
			Sleep(100); // 0.1s ��� (1/1000 ����)
		}

		if (GetAsyncKeyState(VK_LEFT))
		{
			x--;
			Sleep(100); // 0.1s ��� (1/1000 ����)
			if (x < 0)
			{
				x++;
			}
		}

		if (GetAsyncKeyState(VK_RIGHT))
		{
			x++;
			Sleep(100); // 0.1s ��� (1/1000 ����)
		}
		// ��ǥ(5,5) ����
		gotoXY(x, y);
		// ��ǥ������ �޾� �׽�Ʈ ���
		printf("��");
		// �ý��� cls : ȭ�� ��ü ����� �Լ�
		system("cls");
		*/

		//���ŷ : Ű �Է��� ���� ������ ��� ����ϰ� �ٸ� �۾��� ������� �ʴ´�.
		/*
		//kbhit : Ű �Է�
		gotoXY(x, y);
		printf("��");

		// ��ĵ�ڵ� : Ű���尡 ������ Ű�� ������ ��ǻ�ͷ� ������ ������
		key = _getch();

		//printf("key value : %d\n", key);

		switch (key)
		{
		case 72: y--;
			break;
		case 75: x--;
			break;
		case 77: x++;
			break;
		case 80: y++;
			break;
		}
		system("cls"); // _getch()�� �Է��� �޾ƾ� ����


		*/


	}
	return 0;
}
