#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    
    int index = 0;
    
    
    for(int i = 0; i<s.size(); i++){
        if(s[i] == ' '){
            index = 0;
            answer+=s[i];
            continue;
        }
        if(index % 2 == 0)
            answer += toupper(s[i]);
        else
            answer += tolower(s[i]);
        
        index++;
    }    
    
    
    
    return answer;
}