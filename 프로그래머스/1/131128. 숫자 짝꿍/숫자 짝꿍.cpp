#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

string solution(string X, string Y) {
    
    string answer = "";
    
    map<char, int> Z;
        
    for(char c : Y){
            Z[c]++;
    }
    
    for(char c : X){
        if(Z.find(c) !=Z.end() && Z[c]>0 ){
            answer+=c;
            Z[c]--;
        }
    }
    
    
    sort(answer.begin(),answer.end(),greater<char>());
    
    
   if(answer[0] == '0')
        answer = "0";
    
    if(answer.empty())
        answer+="-1";
    
    return answer;
}