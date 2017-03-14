#include<iostream>
#include<cmath>
#include<string>
#include<sstream>
#include<stack>
using namespace std;

typedef unsigned int uint32_t;


int main()
{
    string cur_str = "http://www.acm.org/";
    string line_data;
    string cmd;
    string real_data;
    stringstream ss;
    stack<string> forward_stack;
    stack<string> backward_stack;


    while(getline(cin,line_data))
    {
        ss.str("");
        ss.clear();
        //cout<<"line_data:"<<line_data<<endl;
        ss.str(line_data);
        ss>>cmd;
        //cout<<cmd<<endl; 
        if(cmd == "QUIT")
        {
            //cout<<"exit";
            return 0;
        }
        else if("VISIT" == cmd )
        {   
            ss>>real_data;
            backward_stack.push(cur_str);
            while(!forward_stack.empty())
            {
                forward_stack.pop();
            }   
            cur_str = real_data; 
            cout<<cur_str<<endl;
        }
        else if("BACK" == cmd)
        {
            if(backward_stack.empty())
            {
                cout<<"Ignored"<<endl;
                continue;
            }
            forward_stack.push(cur_str);
            cur_str = backward_stack.top();
            backward_stack.pop();
            cout<<cur_str<<endl;
        }
        else if("FORWARD" == cmd)
        {
            if(forward_stack.empty())
            {
                cout<<"Ignored"<<endl;
                continue;
            }
            backward_stack.push(cur_str);
            cur_str = forward_stack.top();
            forward_stack.pop();
            cout<<cur_str<<endl;
        }
        else
        {
            cout<<"error."<<endl;
        }

    }

    return 0;
}

