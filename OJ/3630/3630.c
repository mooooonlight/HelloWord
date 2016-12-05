#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct node
{
    int flag;
    int next[10];
}trie[60000];
int loc,sign;
void build()
{
    int i=0;
    trie[1].flag=-1;
    for(i=0;i<10;i++)
    {
        trie[1].next[i]=-1;
    }
}
void insert(char s[])
{
    int r=1,index,len;
    int i=0,j=0;
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        index=s[i]-'0';
        if(trie[r].next[index]==-1)
        {
            trie[r].next[index]=loc;
            trie[loc].flag=0;
            if(i==len-1)
            {
                trie[loc].flag=1;
            }
            for(j=0;j<10;j++)
            {
                trie[loc].next[j]=-1;
            }
            r=loc;
            loc++;

        }
        else
        {
            r=trie[r].next[index];
            if(trie[r].flag||i==len-1)
            {
                sign=1;
                
            }
        }
    }


}
int main(void) {
    int count;
    int n,i,j;
    char s[11];
    scanf("%d",&count);
    for( i=0;i<count;i++)
    {
         sign=0;
        scanf("%d",&n);
        getchar();
        loc=2;
        build();
        for(j=0;j<n;j++)
        {
            fgets(s, sizeof(s), stdin);
            insert(s);
        }
        if(!sign)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
