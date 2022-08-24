#pragma once
#include <stdio.h>

void main()
{
    // 포인터 연산
    /*
    int array[5] = { 10,15,20,25,30 };

    printf("배열의 주소 : %p\n", array);

    // pointer 변수는 array의 시작 주소를 가리킵니다.
    // &array[0] == array랑 같기 때문에 pointer 변수에 저장할 수 있습니다.
    int* pointer = array;

    printf("포인터 변수의 값 : %p\n", pointer);
    printf("포인터 변수가 가리키는 값 : %d\n", pointer);

    // pointer 변수가 가라키는 자료형의 크기만큼 증가합니다.
    pointer = pointer + 1;  
    printf("포인터 변수의 값 : %p\n", pointer);
    printf("포인터 변수가 가리키는 값 : %d\n",pointer);

    // 배열 array[3] 요소의 값을 포인터로 접근해서 100이라는 값으로 변경해주세요.
    pointer = pointer + 2;
    * pointer = 100;

    printf("포인터 변수의 값 : %p\n", pointer);
    printf("포인터 변수가 가리키는 값 : %d\n", *pointer);
    */

    // 최댓값과 최솟값 구하기
    /*
    // data라는 배열 안에서 최댓값 : 66
    // data라는 배열 안에서 최솟값 : 1

    int max = 0;
    int min = 100001;

    int data[5] = { 10,5,66,1,2 };

    for (int i = 0; i < 5; i++)
    {
        printf("data 배열의 값 : %d\n", data[i]);

        if (max < data[i])
        {
            max = data[i];
        }
        if (min > data[i])
        {
            min = data[i];
        }
    }

    printf("배열에 있는 원소의 최댓값 : %d\n", max);
    printf("배열에 있는 원소의 최솟값 : %d\n", min);
    */

    // 상수 지시 포인터
    /*
        상수를 가르키는 포인터이며, 포인터 자체는 상수가 아닙니다


    int value = 100;
    int x = 300;
    const int* ptr = &value;

    // *ptr = 100; //포인터 변수가 가리키는 값을 변경할 수 없습니다.
    value = 200;   //상수 지시 포인터는 해당 변수를 가리키는 변수를 상수화하진 않는다.
    printf("ptr이 가리키는 값 : %d\n", *ptr);

    //상수 지시 포인터의 경우 다른 변수의 주소는 저장할 수 있다.
    ptr = &x;
    printf("ptr이 가리키는 값 : %d\n", *ptr);
    */

    // 2차원 배열
    /*
    // 배열의 요소로 또 다른 배열을 가지는 배열입니다.

    // 변수[행][열]
    int team[2][3] =
    {
        {0,5,8},
        // [0][0] [0][1] [0][2]
        //     0      5       8
        {1,6,7}
        // [1][0] [1][1] [1][2]
        //     1      6       7
    };

    for (int i = 0; i < 2;i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d행 %d열 : %d, ", i + 1, j + 1, team[i][j]);

        }
        printf("\n");
    }

}*/
}