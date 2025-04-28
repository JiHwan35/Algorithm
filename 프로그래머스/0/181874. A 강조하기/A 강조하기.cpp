#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(char s : myString){
        if(s == 'a'||s == 'A') answer.push_back('A');
        else answer.push_back(tolower(s));
        
    }
    
    
    return answer;
}