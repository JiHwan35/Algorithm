#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    
    for(int i = 0; i<myString.size(); i++)
    {
        if(myString[i] == pat[0] && myString.substr(i,pat.size()) == pat )
                answer++;   
    }
    
    
    
    return answer;
}