#include <string>
#include <vector>
#include<iostream>
using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    
    char tmp = ' ';
    for(int i = 0; i<s.size(); i++){
        tmp = s[i];
        for(int j = 1; j<=index; j++){
            tmp++;
            if(tmp>'z')
                tmp-=26;
            if(skip.find(tmp)!=string::npos)
                j--;
        }
        answer+=tmp;
    }
    
    return answer;
}