#include <stdio.h>
#include "myString.h"

int myStrlen(const char *ptr)
{
    int count = 0;
    if(!ptr)
    {
        return count;
    }
    const char *tmpPtr = ptr;
    while(*tmpPtr != '\0')
    {
        count++;
        tmpPtr++;
    }
    return count;
}

char *myStrcpy(char *ptrCopy, const char *ptr)
{
    char *ptrCopy = ptr;
    return ptrCopy;
}

char *myStrcat(char *ptrConnect, const char *ptr)
{
    int change = 0;
    int count = 0;
    int count1 = 0;
    while(*ptr != '\0')
    {
        count++;
        ptr++;
    }
    while(*ptrConnect != '\0')
    {
        count++;
        count1++;
        ptrConnect++;
    }
    char array[count + 1]; 

    for(int idx = 0; idx < (count + 2); idx++)
    {
        if((*(ptrConnect + idx) != '\0') && (change == 0))
        {
            array[idx] = *(ptrConnect + idx);
        }
        else
        {
            change = 1;
            array[idx] = *(ptr + idx - count1 + 1);
        }  
    }
    return array;
}

int myStrcmp();