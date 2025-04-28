#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(char s : myString){
        answer.push_back(tolower(s));
    }
    
    return answer;
}