#include <stdio.h>

#define BUFFER_SIZE 10

int a= 0;

int main()
{
#if 0
    int array[BUFFER_SIZE] = {0};

    //数组的越界访问
    //判断索引的有效性: 索引必须是合理的范围RANGE [0 - BUFFER_SIZE -1]
    printf("array[-1]: %d\n", array[-1]);
    printf("array[10]: %d\n", array[10]);
    printf("array[15]: %d\n", array[15]);
#endif

#if 0
    //静态数组:

    //动态数组:

#endif

    return 0;
}