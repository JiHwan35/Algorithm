#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    bool sign = true;
    
    if(s[0] == '-'){
        s.erase(s.begin());
        sign = false;
    }
    
    answer = stoi(s);
    
    if(sign == false)
        answer *= -1;
    
    
    return answer;
}