#include<iostream>
#include<cmath>
#include<string>
using namespace std;

typedef unsigned int uint32_t;

#define INVALID_VALUE32 0xffffffff
#define INPUT_NUMBER 16
typedef struct tag_RGB
{
    int r;
    int b;
    int g;
}RBG;

RBG rbg[INPUT_NUMBER] = {0};

int main(void)
{
    int i=0;
    int x=0,y=0,z=0;
    for(i=0;i<INPUT_NUMBER;i++)
    {
        cin>>rbg[i].r>>rbg[i].b>>rbg[i].g;
       // cout<<rbg[i].r<<rbg[i].b<<rbg[i].g;
    }
    while(1)
    {
        uint32_t min = INVALID_VALUE32;
        uint32_t tmpResult=0;
        uint32_t indexResult=INVALID_VALUE32;
        cin>>x>>y>>z;
        if(-1 == x && -1 == y && -1 ==z)
        {
            break;
        }
        for(i=0;i<INPUT_NUMBER;i++)
        {
            tmpResult = pow(rbg[i].r-x, 2)+ pow(rbg[i].b-y, 2) + pow(rbg[i].g-z, 2) ;
//            cout <<"tmpResult: "<<tmpResult<<"min"<<min<<endl;
            if(tmpResult < min)
            {
                min = tmpResult;
                indexResult = i;
            }
        }
        if(INVALID_VALUE32 == indexResult || INVALID_VALUE32 == min)
        {
            cout<<"bug1.";
        }
        cout<<"("<<x<<","<<y<<","<<z<<") maps to ("<<rbg[indexResult].r<<","<<rbg[indexResult].b<<","<<rbg[indexResult].g<<")"<<endl;
    }
    return 0;
}

