#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 10
#define BUFFER_OFFSET 100

//函数

#if 1
    //函数参数
    //  需求: 实现两个数的交换
    //  值传递
    void swapSurfaceData(int val1, int val2)
    {
        printf("before:val1: %d\tval2: %d\n", val1, val2);
        int tmpdata =  val1;
        val1 = val2;
        val2 = tmpdata;

        printf("after:val1: %d \tval2: %d\n", val1, val2);
    }

    void swapRealData(int *val1, int *val2)
    {
        printf("before:val1: %d\tval2: %d\n", *val1, *val2);
        
        int tmpdata = *val1;    // tmpdata = *(&num1)
        *val1 = *val2;          // *(&num1) = *(&num2)
        *val2 = tmpdata;        // *(&num2) = tmpdata

        printf("after:val1: %d \tval2: %d\n", *val1, *val2);
    }

#endif

// 数组做函数参数会自动弱化为指针
void printArray(int *array, int numSize)
{
    for(int idx = 0; idx < numSize; idx++)
    {
        printf("array[%d] = %d\t", idx, array[idx]);
    }
    printf("\n");
}

int main()
{
    int num1 = 100;
    int num2 = 200;

#if 0 
    swapData(num1, num2);
    swapRealData(&num1, &num2);
#endif

    int array[BUFFER_SIZE];
    memset(array, 0, sizeof(array));
    int elementNum = sizeof(array) / sizeof(array[0]);
    printf("len: %d\n",elementNum);

    for(int idx = 0; idx < elementNum; idx++)
    {
        array[idx] = idx + BUFFER_OFFSET;
    }

    printArray(array, elementNum);

    //  数组名就是数组的首地址, 也是数组首元素的地址

    return 0;
}