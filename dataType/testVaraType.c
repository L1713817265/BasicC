#include <stdio.h>
#include <stdlib.h>


int main()
{
#if 0
    long bigValue = 0;
    int len = sizeof(bigValue);
    printf("len: %d, bigValue = %ld\n", len, bigValue);

    int age = 6;
    len = sizeof(age);
    printf("len: %d, age = %d\n", len, age);
    printf("hello world!\n");

    short smallValue = 1;
    len = sizeof(smallValue);
    printf("len: %d, smallValue = %d\n", len, smallValue);


    float weight = 50.5;
    len = sizeof(weight);
    printf("len: %d, weight = %f\n", len, weight);

    double weight = 50.5;
    len = sizeof(weight);
    printf("len: %d, weight = %f\n", len, weight);
#endif

#if 0
    char sex = -1;  
    int len = sizeof(sex);
    printf("len: %d, sex = %c sex = %d\n", len, sex, sex);

    char default_value = 137;  
    len = sizeof(default_value);
    printf("len: %d, efault_value = %c efault_value = %d\n", len, default_value, default_value);

    unsigned char  m_value = -1;
    len = sizeof(m_value);
    printf("len: %d, sex = %c sex = %d\n", len, m_value, m_value);
#endif

#if 0
    int value = 6.6;
    len = sizeof(value);
    printf("len: %d, value = %d\n", len, value);
#endif

#if 0
    int val = 10;
    printf("val: %d\n", val);
    
    val++;
    printf("val: %d\n", val);
    val--;
    printf("val: %d\n", val);

    ++val;
    printf("val: %d\n", val);
    --val;
    printf("val: %d\n", val);

    val += 100;
    printf("val: %d\n", val);

    int m_value = 10;
    int discuss = m_value / 3;
    int remainder = m_value % 3;

    printf("discuss: %d\n", discuss);
    printf("remainder: %d\n", remainder);


    int randomVal = rand();
    printf("randVal: %d\n", randomVal);
    
    int lotteryRate = randomVal % 4;
    printf("lotteryRate: %d\n", lotteryRate);

    int a = 51;
    printf("a: %d\n", a);
    a <<= 1;
    printf("a: %d\n", a);

#endif

#if 0
    int val = 51;
    int orVal = val | 7;
    int andVal = val & 2;

    printf("orVal: %d\n", orVal);
    printf("andVal: %d\n", andVal);

    int notVal = !val;
    printf("notVal: %d\n", notVal);

#endif

    int condition1 = 1;
    int condition2 = 6;
    if((condition1 == 1) || (condition2 == 5))
    {
        printf("hello world\n");
    }
    else
    {
        printf("not hello world\n");
    }

    if((condition1 == 1) && (condition2 == 5))
    {
        printf("hello world\n");
    }
    else
    {
        printf("not hello world\n");
    }


    return 0;
}