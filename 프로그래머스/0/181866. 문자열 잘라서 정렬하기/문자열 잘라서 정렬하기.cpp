#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string tmp = "";
    
    for(char c : myString)
    {
        if(c != 'x')
            tmp+=c;
        else{
            if(tmp != ""){
            answer.push_back(tmp);
            tmp = "";
            }
        }
    }
    if(tmp != "") answer.push_back(tmp);
    
    sort(answer.begin(),answer.end());
    

    return answer;
}