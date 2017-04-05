#include<stdio.h>
#include <stdlib.h>
#define p(a) printf("addr %s:%0x\n",#a,(unsigned int)&a)
int global_init_a=1;
int global_uninit_a;
static int static_global_init_a=1;
static int static_gloabal_uninit_a;
const int const_global_a=1;
int main()
{
    int local_init_a=1;
    int local_uninit_a;
    static int static_local_init_a=1;
    static int static_local_uninit_a;
    const int const_local_a=1;
    int * malloc_p=malloc(sizeof(int));
    p(global_init_a);
    p(global_uninit_a);
    p(static_global_init_a);
    p(static_gloabal_uninit_a);
    p(const_global_a);
    p(local_init_a);
    p(local_uninit_a);
    p(static_local_init_a);
    p(static_local_uninit_a);
    p(const_local_a);
    printf("add malloc_p:%x\n",malloc_p);
    while(1);
    return 0;
}
