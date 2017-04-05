#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *ptr="123456";
    ptr[0]='7';
    printf("%s\n",ptr);
}
