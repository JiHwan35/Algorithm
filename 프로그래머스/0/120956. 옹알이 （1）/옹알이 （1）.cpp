#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    for(auto s : babbling)
    {
        if(s.find("aya") != string :: npos)
            s.replace(s.find("aya"),3,"000");
        if(s.find("ye") != string :: npos)
            s.replace(s.find("ye"),2,"00");
        if(s.find("woo") != string :: npos)
            s.replace(s.find("woo"),3,"000");
        if(s.find("ma") != string :: npos)
            s.replace(s.find("ma"),2,"00");
        
        int b = 0;
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] != '0'){
                b++;
                break;
            }
        }
        
        if(b == 0)
            answer++;
       
    }
    
    return answer;
}