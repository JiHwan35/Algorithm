#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(auto c : s){
        if(c == ' ')
            answer+=c;
        else{
            if( (c >= 65 && c<=90) && c+n>90)
                answer += c+n-26;
            else if( (c >= 97 && c<=122) && c+n>122)
                answer += c+n-26;
            else
                answer += c+n;
        }
    }
    
    
    
    
    return answer;
}