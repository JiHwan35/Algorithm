#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    char op;
    int a = 0, b = 0,idx = 0;
    
    for(int i = 0; i<binomial.size(); i++)
    {
        if(binomial[i] == ' ')
        {
             idx = i+1;
             op = binomial[idx];
             break;
        }
    }
    
    a = stoi(binomial.substr(0,idx-1));
    b = stoi(binomial.substr(idx +2));
    
    switch(op){
        case '+': 
              answer = a+b;
              break;
        
        case '-':
               answer = a-b;
              break;
        
        case '*':
               answer = a*b;
              break;
    }
    return answer;
}