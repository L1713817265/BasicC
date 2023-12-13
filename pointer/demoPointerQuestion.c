#include <stdio.h>
#include <strings.h>

int main()
{
    //指针和字符串
    char *ptr = "hello world";

    //Q1:字符串常量？ 什么叫字符串常量
    //1. 打印字符串的每一个字符
    //way1: 使用for循环的方式
#if 0
    int len = strlen(ptr);
    printf("len: %d\n", len);
    char p ='0';
    for(int idx = 0; idx < strlen(ptr); idx++)
    {
        p = *(ptr++);
        printf("p: %c\n", p);
    }
#elif 0
    //实现方式1
    int len = strlen(ptr);
    printf("len: %d\n", len);
    char p ='0';
    for(int idx = 0; idx < len; idx++)
    {
        p = *(ptr++);
        printf("p: %c\n", p);
    }
#else
    //实现方式2
    while(*ptr != '\0')
    {
        printf("%c\t", *ptr);
        ptr++;
    }
    printf("\n");
#endif

    //Q3:我要给字符串赋值
    char *ptr2 = NULL;
    printf("&ptr2: %p\n", &ptr2);
#if 1
    ptr2 = "zhangsan";
    printf("&(zhangsan): %p\n", &("zhangsan"));
    printf("ptr: %p\n", ptr2);
#else
    strcpy(ptr2, "zhangsan");
#endif
    printf("ptr2: %s\n", ptr2);

    return 0;
}