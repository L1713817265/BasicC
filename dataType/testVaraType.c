#include <stdio.h>


#include <stdlib.h> 
/*数据类型*/
/*sizeof计算字节的大小*/
int main() 
{
#if 0
    long bigValue = 0;
    int len = sizeof (bigValue); 
    printf ("len: %d,bigValue = %ld\n" , len , bigValue);

    /*变量的命名：数字，字母，下划线。只能以字母和下划线开头*/
    /*数据类型对应的是内存的储存空间*/
    int age = 6;
    len = sizeof (age);   /*整形就是整数*/ 
    printf ("len: %d, age = %d\n" , len , age);/*%d就是打印整数*/
    printf ("hello world!\n");

    short smallValue = 1;
    len = sizeof (smallValue);
    printf ("len: %d, smallValue = %d\n" , len , smallValue);
#endif

#if 0
   /* 浮点数 */
    float weight = 50.5;
    int len = sizeof(weight);  
    printf ("len: %d, weight = %f\n ", len , weight); /* %f就是打印小数/浮点数 */

    double weight = 50.5;
    int len  = sizeof (weight);
    printf ("len: %d, weight = %f\n" , len , weight); /* %f就是打印小数/浮点数 */
#endif

#if 0
   char sex = 'm';
   int len  = sizeof (sex);
   printf ("len: %d, sex = %c\n", len , sex ); /* %c就是打印字符 */
#endif

#if 0
   /*有符号*/
   char sex = -1;
   int len = sizeof (sex);
   printf ("len: %d, sex = %c sex = %d\n" , len,  sex , sex );  /* %c就是打印字符 */


   char default_value = 137;
   len = sizeof (default_value);
   printf ("len: %d, default_value = %c default_value = %d\n" , len,  default_value , default_value );  /* %c就是打印字符 */

#endif

#if 0
   /*无符号 和 有符号的区别*/
    unsigned char m_value = -1;
    int len  = sizeof (m_value);
    printf ("len: %d, sex = %c sex = %d\n" , len,  m_value , m_value );

    int value = 6.6; 
    len = sizeof (value);
    printf ("len: %d, value = %d\n" , len , value);
#endif

#if 0
      /*表达式 & 运算符*/ 
      /*运算符 + - */
      int val = 10;
      printf("val:%d\n", val);
#endif

#if 0
      /*括号的优先级最高 运算符的优先级用括号的限制*/
      /*后置++*/
       val++;    // val = val + 1
       printf("val:%d\n", val);
       val--;    
       printf("val:%d\n", val);

       /*前置++*/
#endif
#if 1
    /*双目运算符*/
    //int a = 7 + 8;

    int num1 = 10;
    int num2 = 40;

    /*三目运算符*/
    int num3 = (num1 > num2) ? 100 : 666;
    printf("num3:%d\n", num3);
#endif    

return 0;
}