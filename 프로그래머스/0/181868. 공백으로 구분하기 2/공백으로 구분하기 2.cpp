#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
        
    string tmp = "";
    
    for(char c: my_string){
        if (c != ' ')    
            tmp.push_back(c);
        else if(tmp.size() == 0)
            continue;
        else{
            answer.push_back(tmp);
            tmp = "";
        }
    }
    
    if(tmp.size()>0)
        answer.push_back(tmp);
    return answer;
}