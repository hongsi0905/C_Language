#include <stdio.h>

struct Object
{
	// 구조체는 선언만 해놓은 상태는 메모리가 생성되지 않는다. (값을 넣을 수 없다.)
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
	// 바이트 패딩
	/*
		멤버 변수를 메모리에서 CPU로 읽을 때 한 번에 읽을 수 있도록
		컴파일러가 레지스터의 블록에 맞추어 바이트를 패딩해주는 최적화 작업
	

	// 구조체의 경우 정의해주어야 멤버 변수의 메모리가 생기므로 멤버 변수의 데이터를 초기화할 수 있다.
	// 구조체의 크기는 구조체를 구성하는 멤버 중에 크기가 가장 큰 기본 자료형의 배수가 되도록 정렬한다.
	struct Object character = { 10,100,3.5f };
	struct Data data = { 10, 10 };
	struct Monster Dragon = { 100, 30.5f, 10 };
	struct Shape circle;

	// circle.name 
	/*
		const char *name > Circle
		"Circle"; (circle 에러) : 시작주소에 대입하므로 틀림 >> memcpy(메모리 복사 함수)로 해결
	

	printf("Data 구조체의 크기 : %d\n", sizeof(data));
	printf("Object 구조체의 크기 : %d\n", sizeof(character));
	printf("Monster 구조체의 크기 : %d\n", sizeof(Dragon));
	printf("Shape 구조체의 크기 : %d\n", sizeof(circle));

	// align 규칙
	/*
		CPU가 데이터를 읽을 때	 ( byte : 홀수 [X] / 짝수 [O] )
		32bit OS에서는 4 byte씩 메모리를 읽고, 64bit OS에서는 8byte씩 메모리를 읽는다.
	*/
	
	// 구조체 포인터
	/*
		구조체를 가리키는 포인터
		포인터 자체는 운영체제에 따라 4 또는 8 byte를 가진다.
	
	// 구조체 포인터 선언
	struct Animal* pointer;
	printf("구조체 포인터의 크기 : %d\n", sizeof(pointer));

	struct Animal cat;
	// 구조체 주소는 구조체 첫 번째 멤버 변수에 있는 시작주소를 의미한다.
	printf("구조체 cat 주소 : %p\n", &cat);
	printf("구조체 cat - leg 주소 : %p\n", &cat.leg);
	printf("구조체 cat - size 주소 : %p\n", &cat.size);
	pointer = &cat;

	// 구조체 포인터로 구조체에 있는 메모리에 접근 시 [->] 연산자를 사용
	pointer->leg = 200;
	pointer->size = 90.3f;

	//멤버 연산자를 사용하려면 연산자 우선 순위에 맞추어 작성
	(*pointer).leg = 400;
	(*pointer).size = 50.6f;

	printf("구조체 포인터로 접근한 leg의 값 : %d\n", pointer->leg);
	printf("구조체 포인터로 접근한 size의 값 : %lf\n", pointer->size);

	*/



	return 0;
}
