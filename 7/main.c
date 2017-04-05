#include <stdio.h>
#include "tax.h"
int main(int argc,char**argv)
{
    if(argc<3)
	{printf("input your salary and ensurance!\n");return 0;}
    int my_tax=0;

    my_tax=tax((int)atoi(argv[1]),(int)atoi(argv[2]));
    printf("you should tax %d\n",my_tax);
}
