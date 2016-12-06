#include <unistd.h>
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    if(write(1, "Here is some data\n", 20)!=18)
    {
        write(2, "A write error has occurred on file descriptor 1\n", 46);
        printf("\nerrno is %d\n", errno);
    
    }   
    exit(0);
}
