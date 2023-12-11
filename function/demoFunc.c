#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculateFunc.h"

//函数参数：可以没有，也可以有
//函数返回值：可以没有，也可以有
//      没有的情况需要写void
//      如果有，返回你想返回的数据类型{int | long | short | char | float | double}

//什么叫API: Application Programming Interface.


//函数的定义
#if 0
// case1: 没有参数，没有返回值
void purchaseAppointThing()
{
    printf("purchase a phone\n");
}
#endif

#if 0
// case2: 有参数，没有返回值
//函数参数一定有数据类型
void myAddNum1(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum: %d\n", sum);
}
#endif

#if 0
// case3: 有参数，有返回值
int myAddNum2(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum: %d\n", sum);
    return sum;
}
#endif

//枚举  它也是一种数据类型
typedef enum STAUS_CODE
{
    ON_SUCCESS,
    ON_ERROR,
    ON_NULLPTR,
    ON_MALLOCFAIL,
} STAUS_CODE;

#if 0
//取别名
typedef enum STAUS_CODE STAUS_CODE;  //这种可以的
#endif

int main()
{
#if 0
    //函数的调用
    purchaseAppointThing();

    int num1 = 5;
    int num2 = 6;

    //函数的使用
    myAddNum1(num1, num2);

    int totalSum = myAddNum2(num1, num2);

    int transFormerPrice = 10;
    if(totalSum > transFormerPrice)
    {
        printf("get a transformer\n");
    }
    else
    {
        printf("I not geted.\n");
    }
#endif

#if 0
    STAUS_CODE status;
    int len = sizeof(status);
    printf("len: %d\n", len);
#endif

    int num1 = 50;
    int num2 = 60;
    int sum = calculateAdd(num1, num2);
    printf("sum: %d\n", sum);

    int num3 = calculateSub(num1, num2);
    printf("num3: %d\n", num3);

    int amass= calculateMul(num1, num2);
    printf("amass: %d\n", amass);

    int num4 = calculateDiv(num1, num2);
    printf("num4: %d\n", num4);

    return 0;
}