#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
    int a=100;
    
    printf("hello from pid: %d\n", (int)getpid());
    
    return 0;
}
