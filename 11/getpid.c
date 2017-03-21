#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc,char* argv[])
{
    int id=0;
    id=getpid();
    printf("process id is %d\n",id);
    return 0;
}

