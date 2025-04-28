#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    int idx = 0;
    
    for(int i = 0; i<myString.size(); i++)
    {
        if(myString[i] == pat[0] &&  myString.substr(i,pat.size()) == pat)        
            idx = i+pat.size();
    }
    
    answer = myString.substr(0,idx);
    
    return answer;
}