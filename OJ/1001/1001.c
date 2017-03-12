#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define INPUT_LEN 1000
int mallocMem(char** str, unsigned int len,int mallocId)
{
    char *tmpStr=NULL;
    tmpStr = (char*)malloc(len * sizeof(char));
    if(NULL == tmpStr)
    {
        printf("malloc mem failed, mallocId:%d.\n", mallocId);
        return;
    }
    *str =tmpStr;
}
void CalculateX_2(char *str)
{
    
}

int main(void)
{
    char *str=NULL;
    char *result=NULL;
    unsigned int n=0;
    mallocMem(&str,INPUT_LEN,0);
    mallocMem(&result, INPUT_LEN, 1);
       //input 
    while(scanf("%s%u", str, &n)!=EOF)
    {
        printf("%s %d\n", str, n);
        while(--n)
        {
            CalculateX_2(str);
        }        
        memcpy(result,str,sizeof(str));
        printf("%s\n",result);
    }    



    return 0;
}
