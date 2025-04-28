#include <string>
#include <vector>

using namespace std;

string solution(string str1, string str2) {
    string answer = "";
    
    for(int i = 0; i<str1.length(); i++)
    {
        answer.append(str1,i,1);
        answer.append(str2,i,1);
    }
    
    return answer;
}