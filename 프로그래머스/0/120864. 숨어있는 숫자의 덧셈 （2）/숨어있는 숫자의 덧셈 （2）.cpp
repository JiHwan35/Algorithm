#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string tmp = "";
    
    for(auto c : my_string){
        if(c >='0' && c<='9')
            tmp+=c;                 
        
        else if(tmp != "")
        {
            answer += stoi(tmp);
            tmp = "";
        }
    }
    
    if(tmp != "")
         answer += stoi(tmp);
    return answer;
}