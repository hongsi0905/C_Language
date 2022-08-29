#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//참조에 의한 호출
/*
void Swap(int *x, int *y)
{ 
	// 매개 변수는 함수 내부에서만 사용가능한 변수
	// 매개 변수가 포인터로 선언, 변수 주소를 전달해야한다.
	// * (애스터리스크) 연산자를 사용하여 메모리에 접근 후 값 출력
	int temp = *x;
	*x = *y;
	*y = temp;
	//x, y 변수가 가리키는 주소 출력
	printf("매개변수 x주소 : %p, y주소 : %p\n", x, y);
}

void main()
{
	//참조에 의한 호출
	//함수 호출 시 전달되는 변수의 주소를 함수의 인수로 전달하는 방법
	int x = 10;
	int y = 20;
	printf("x : %d, y : %d\n", x, y);
	Swap(&x, &y); // 주소로 던져줘야 값이 바뀐다. 
	printf("x : %d, y : %d\n", x, y);
	//참조에 의한 호출은 매개 변수에 변수의 주소를 넘겨준 다음 외부에 있는 변수의 주소가 참조되어 외부에 있는 변수에 영향을 끼친다.
	//값에 의한 호출은 매개 변수에 값만 넘겨주므로 외부에 있는 변수의 값이 변경되지 않는다.

}
*/

//동적할당
/*
void main()
{
	
	
		동적 할당
		- 프로그램 실행 중에 사용자가 필요한 만큼 메모리를 할당하는 작업
		메모리
		- 코드 영역
		- 데이터 영역
		- 힙 영역 >> 동적 할당
		- 스택 영역
	
	//[스택] ptr >> [힙] malloc
	int* ptr = (int*)malloc(sizeof(int));
	//메모리를 동적 할당할 때 주소를 범용 포인터로 반환하기 때문에 자료형을 변환한 다음 메모리에 할당해야한다.

	*ptr = 10;
	printf("ptr이 가리키는 주소 : %p\n", ptr);
	printf("ptr이 가리키는 값 : %d\n", *ptr);
	
	// 동적 할당한 메모리는 free함수를 통해 해제한다.
	// 동적 할당한 메모리를 해제하지 않고 방치하게 되면 메모리 누수 발생
	free(ptr); 
	
}*/

void main()
{
	//업다운 게임
	int number = 0;

	//rand() 컴퓨터는 완벽한 랜덤을 만들 수 없다.
	//시간을 가져와서 197/01/01 기준으로 시간을 가져와서 랜덤생성
	//1 ~ 10 사이 난수값 설정
	// % 연산자 사용
	srand(time(NULL));

	int answer = rand() % 10 + 1;
	int HP = 0;
	printf("시작 체력 설정 : ");
	scanf_s("%d", &HP);
	printf("START HP : %d\n", HP);
	

	for (HP;HP > 0;HP--)
	{

		printf("\n값을 입력해주세요 : ");
		scanf_s("%d", &number);


		if (answer > number)
		{
			printf("UP\n");
		}
		else if (answer < number)
		{
			printf("DOWN\n");
		}
		else
		{
			printf("YOU WIN\n");
			break;
		}
		
		printf("YOU HP : %d\n", HP-1);
	}
	if (HP == 0)
	{
		printf("==========================\n");
		printf("YOU LOSE\n");
		printf("ANSWER : %d\n", answer);
	}
}