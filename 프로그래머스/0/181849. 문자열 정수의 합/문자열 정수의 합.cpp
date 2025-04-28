#include <string>
#include <vector>

using namespace std;

int solution(string num_str) {
    int answer = 0;
    
    for(char s : num_str)
        answer += s - 48;
    
    return answer;
}