#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    int answer = 1;
    string yourString = "";
    
    for(auto c : myString)
    {
        if(c == 'A')
            yourString += 'B';
        else
            yourString += 'A';
    }

    if(yourString.find(pat) == string :: npos)
        answer = 0;
    
    return answer;
}