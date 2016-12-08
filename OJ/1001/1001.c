#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define INPUT_LEN 1000
int main(void)
{
    char *str=NULL;
    int n=0;

    str = (char*)malloc(INPUT_LEN * sizeof(char));
    if(NULL == str)
    {
        printf("malloc mem failed.\n");
        return;
    }



    while(scanf("%s%d", str, &n)!=EOF)
    {
        printf("%s %d\n", str, n);
    }    



    return 0;
}
