#include <stdio.h>
void myprintf(int res)
{
    printf("result=%d\n",res);
}
void main()
{
    int i=0;
    long result=0;
    for(i=0;i<100;i++)
	result +=1;
    myprintf(result);
}
