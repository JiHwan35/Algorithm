#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "fail";
    
    for(auto v : db)
    {
        if(id_pw[0] == v[0]){
            answer = "wrong pw";
        
            if(id_pw[1] == v[1] )
            {       
                answer = "login";
                break;
            }
        }
        
        
    }
    return answer;
}