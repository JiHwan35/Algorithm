#include<string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string s)
{
    
    string tmp = "";
    stack<char> p;
    if(s[0] == ')')
        return false;
    
    for(char c :  s){
        if(p.empty()){
            if(c == ')')
                return false;
            else
                p.push(c);
        }
        else{
            if((p.top() == '(')&&c == ')' )
                p.pop();
            else
                p.push(c);
        }
    }
    
    if(!p.empty()){
        return false;
    }
    
  

    return true;
}