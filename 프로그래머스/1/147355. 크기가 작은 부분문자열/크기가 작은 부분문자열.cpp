#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    for(int i = 0; i<t.size()-p.size()+1; i++){
        string st = t.substr(i,p.size());
       
        if(stoll(st) <= stoll(p))
            answer++;
    }
    
    
    return answer;
}