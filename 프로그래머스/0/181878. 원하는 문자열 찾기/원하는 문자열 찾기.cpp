#include <string>
#include <vector>
#include <cctype>
using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    string substr1 = "";
    string substr2 = "";
    
    for(char c : myString)
        substr1.push_back(toupper(c));
    
    for(char c : pat)
        substr2.push_back(toupper(c));
    
    if(substr1.find(substr2) != string :: npos)
        answer = 1;
    
    return answer;
}