#include <stdio.h>

struct Object
{
	// ����ü�� ���� �س��� ���´� �޸𸮰� �������� �ʴ´�. (���� ���� �� ����.)
	short size;
	int height;
	double position;
};

struct Data
{
	int x;
	int y;
};

struct Monster
{
	int health;
	double attack;
	short defense;
};

struct Shape
{
	char name[10]; // 1BYTE * 10
	double size;
};

struct Animal
{
	int leg;
	double size;
};

int main()
{	
	// ����Ʈ �е�
	/*
		��� ������ �޸𸮿��� CPU�� ���� �� �� ���� ���� �� �ֵ���
		�����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ�� �е����ִ� ����ȭ �۾�
	

	// ����ü�� ��� �������־�� ��� ������ �޸𸮰� ����Ƿ� ��� ������ �����͸� �ʱ�ȭ�� �� �ִ�.
	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿� ũ�Ⱑ ���� ū �⺻ �ڷ����� ����� �ǵ��� �����Ѵ�.
	struct Object character = { 10,100,3.5f };
	struct Data data = { 10, 10 };
	struct Monster Dragon = { 100, 30.5f, 10 };
	struct Shape circle;

	// circle.name 
	/*
		const char *name > Circle
		"Circle"; (circle ����) : �����ּҿ� �����ϹǷ� Ʋ�� >> memcpy(�޸� ���� �Լ�)�� �ذ�
	

	printf("Data ����ü�� ũ�� : %d\n", sizeof(data));
	printf("Object ����ü�� ũ�� : %d\n", sizeof(character));
	printf("Monster ����ü�� ũ�� : %d\n", sizeof(Dragon));
	printf("Shape ����ü�� ũ�� : %d\n", sizeof(circle));

	// align ��Ģ
	/*
		CPU�� �����͸� ���� ��	 ( byte : Ȧ�� [X] / ¦�� [O] )
		32bit OS������ 4 byte�� �޸𸮸� �а�, 64bit OS������ 8byte�� �޸𸮸� �д´�.
	*/
	
	// ����ü ������
	/*
		����ü�� ����Ű�� ������
		������ ��ü�� �ü���� ���� 4 �Ǵ� 8 byte�� ������.
	
	// ����ü ������ ����
	struct Animal* pointer;
	printf("����ü �������� ũ�� : %d\n", sizeof(pointer));

	struct Animal cat;
	// ����ü �ּҴ� ����ü ù ��° ��� ������ �ִ� �����ּҸ� �ǹ��Ѵ�.
	printf("����ü cat �ּ� : %p\n", &cat);
	printf("����ü cat - leg �ּ� : %p\n", &cat.leg);
	printf("����ü cat - size �ּ� : %p\n", &cat.size);
	pointer = &cat;

	// ����ü �����ͷ� ����ü�� �ִ� �޸𸮿� ���� �� [->] �����ڸ� ���
	pointer->leg = 200;
	pointer->size = 90.3f;

	//��� �����ڸ� ����Ϸ��� ������ �켱 ������ ���߾� �ۼ�
	(*pointer).leg = 400;
	(*pointer).size = 50.6f;

	printf("����ü �����ͷ� ������ leg�� �� : %d\n", pointer->leg);
	printf("����ü �����ͷ� ������ size�� �� : %lf\n", pointer->size);

	*/



	return 0;
}
