#pragma once
#include <stdio.h>

void main()
{
    // ������ ����
    /*
    int array[5] = { 10,15,20,25,30 };

    printf("�迭�� �ּ� : %p\n", array);

    // pointer ������ array�� ���� �ּҸ� ����ŵ�ϴ�.
    // &array[0] == array�� ���� ������ pointer ������ ������ �� �ֽ��ϴ�.
    int* pointer = array;

    printf("������ ������ �� : %p\n", pointer);
    printf("������ ������ ����Ű�� �� : %d\n", pointer);

    // pointer ������ ����Ű�� �ڷ����� ũ�⸸ŭ �����մϴ�.
    pointer = pointer + 1;  
    printf("������ ������ �� : %p\n", pointer);
    printf("������ ������ ����Ű�� �� : %d\n",pointer);

    // �迭 array[3] ����� ���� �����ͷ� �����ؼ� 100�̶�� ������ �������ּ���.
    pointer = pointer + 2;
    * pointer = 100;

    printf("������ ������ �� : %p\n", pointer);
    printf("������ ������ ����Ű�� �� : %d\n", *pointer);
    */

    // �ִ񰪰� �ּڰ� ���ϱ�
    /*
    // data��� �迭 �ȿ��� �ִ� : 66
    // data��� �迭 �ȿ��� �ּڰ� : 1

    int max = 0;
    int min = 100001;

    int data[5] = { 10,5,66,1,2 };

    for (int i = 0; i < 5; i++)
    {
        printf("data �迭�� �� : %d\n", data[i]);

        if (max < data[i])
        {
            max = data[i];
        }
        if (min > data[i])
        {
            min = data[i];
        }
    }

    printf("�迭�� �ִ� ������ �ִ� : %d\n", max);
    printf("�迭�� �ִ� ������ �ּڰ� : %d\n", min);
    */

    // ��� ���� ������
    /*
        ����� ����Ű�� �������̸�, ������ ��ü�� ����� �ƴմϴ�


    int value = 100;
    int x = 300;
    const int* ptr = &value;

    // *ptr = 100; //������ ������ ����Ű�� ���� ������ �� �����ϴ�.
    value = 200;   //��� ���� �����ʹ� �ش� ������ ����Ű�� ������ ���ȭ���� �ʴ´�.
    printf("ptr�� ����Ű�� �� : %d\n", *ptr);

    //��� ���� �������� ��� �ٸ� ������ �ּҴ� ������ �� �ִ�.
    ptr = &x;
    printf("ptr�� ����Ű�� �� : %d\n", *ptr);
    */

    // 2���� �迭
    /*
    // �迭�� ��ҷ� �� �ٸ� �迭�� ������ �迭�Դϴ�.

    // ����[��][��]
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
            printf("%d�� %d�� : %d, ", i + 1, j + 1, team[i][j]);

        }
        printf("\n");
    }

}*/
}