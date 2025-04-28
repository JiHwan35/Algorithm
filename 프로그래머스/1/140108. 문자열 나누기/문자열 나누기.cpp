#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string s) {
    
    int answer = 0;
    int n = 0;
    char f = ' ';
    
    vector<int> v(2,0);
    
    for(char c : s){
        if(v[0]==0 &&v[1]==0)
            f = c;
        
        if(c == f)
            v[0]++;
        else
            v[1]++;
        
        if(v[0]==v[1]){
           
            answer++;
            v[0] = 0;
            v[1] = 0;
        }
              
    }
    
    if(v[0]!=v[1])
        answer++;
    
    return answer;
}