#include <string>
#include <vector>
#include <cctype>
using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(char s : myString)
        answer.push_back(toupper(s));
    
    
    return answer;
}