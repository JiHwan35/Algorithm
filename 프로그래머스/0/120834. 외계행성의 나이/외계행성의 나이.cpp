#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string sage = "";
    sage = to_string(age);
    for(char c : sage)
    {
        answer += c + 49;
    }
    
    
    return answer;
}