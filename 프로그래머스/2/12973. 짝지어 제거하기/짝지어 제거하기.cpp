#include <iostream>
#include <stack>
#include<string>
using namespace std;

int solution(string s)
{
    int answer = 0;

    stack<char> isdoubled;
    
    for(char c : s){
        if(isdoubled.size() == 0){
            isdoubled.push(c);
            continue;
        }
        
        if(c == isdoubled.top())
            isdoubled.pop();
        else
            isdoubled.push(c);
        
    }

  
    if(isdoubled.empty())
        answer = 1;

   
    return answer;
}