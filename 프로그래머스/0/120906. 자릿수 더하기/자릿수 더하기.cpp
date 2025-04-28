#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    string num = to_string(n);
    for(char s : num){
        answer += s - 48;
    }
    return answer;
}