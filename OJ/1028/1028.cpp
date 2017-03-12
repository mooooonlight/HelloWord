#include<iostream>
#include<cmath>
#include<string>
#include<sstream>
#include<stack>
using namespace std;

typedef unsigned int uint32_t;

int main()
{
    string ori_str = "http://www.acm.org/";
    string line_data;
    string cmd;
    string real_data;
    stringstream ss;
    stack<string> forward_stack;
    stack<string> backward_stack;

    backward_stack.push(ori_str);
    
    while(getline(cin,line_data))
    {
       ss.str(line_data);
       ss>>cmd;
       //cout<<cmd<<endl; 
       if(cmd == "EXIT")
        {
            //cout<<"exit";
            return 0;
        }
        else if("VISIT" == cmd )
        {   
           ss>>real_data;
            backward_stack.push(real_data);
            
        }
        
    }
    
    return 0;
}

