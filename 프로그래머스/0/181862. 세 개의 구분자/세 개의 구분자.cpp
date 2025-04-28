#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string tmp ="";
    
    for(auto c : myStr)
    {
        if(c != 'a'&&c != 'b'&&c != 'c')
            tmp+=c;
        else if(tmp != "")
        {    
            answer.push_back(tmp);
            tmp = "";
        }
    }
    
    if(tmp != "")
        answer.push_back(tmp);
    else
        answer.push_back("EMPTY");
    return answer;
}