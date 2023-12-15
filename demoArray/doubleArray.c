#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 5
#define ROW    3
#define COLUMN 4

int main()
{
#if 1
    //  从一维数组到二维数组
    int array[BUFFER_SIZE] = {0};
    int len = sizeof(array);
    printf("len: %d\n", len);

    //  二维数组定义
    int array2[ROW][COLUMN] = {0};
    len = sizeof(array2);
    printf("len: %d\n", len);

    int count = 1;
    //  给二维数组赋值
    for(int idx = 0; idx < ROW; idx++)
    {
        for(int jdx = 0; jdx < COLUMN; jdx++)
        {
            array2[idx][jdx] = count;
            count++;
        }
    }
#if 0
    //  二维数组的取值
    
    for(int idx = 0; idx < ROW; idx++)
    {
        for(int jdx = 0; jdx < COLUMN; jdx++)
        {
            printf("array2[%d][%d]: %d \t", idx, jdx, array2[idx][jdx]);
        }
        printf("\n");
    }
    printf("\n");
#endif

#if 0
    //  二维数组的地址
    printf("array2[0]: %p\n", array2[0]);
    printf("array2[0][0]: %p\n", &array2[0][0]);
    printf("array2 + 0: %p\n", array2);
    printf("\n");

    printf("array2[1]: %p\n", array2[1]);
    printf("array2[1][0]: %p\n", &array2[1][0]);
    printf("array2 + 1: %p\n", array2 + 1);
    printf("\n");

    printf("array2[2]: %p\n", array2[2]);
    printf("array2[2][0]: %p\n", &array2[2][0]);
    printf("array2 + 2: %p\n", array2 + 2);
    printf("\n");

    //  数组即指针
    //  array[2] = *(array + 2)
    //  array[2][1] = *(*(array + 2) + 1)
    printf("array2[2][2] = %d, *(*(array2 + 2) + 2) = %d\n", array2[2][2], *(*(array2 + 2) + 2));


    //作业1: 二维数组的翻转
#endif


#endif
    return 0;
}