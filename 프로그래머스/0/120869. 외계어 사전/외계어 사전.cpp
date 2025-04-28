#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    string tmp = "";
    
    for(auto s : spell){
        tmp+=s;
    }
    
    sort(tmp.begin(),tmp.end());
    
    
    for(auto s: dic)
    {
        if(s.size()==tmp.size()){
            sort(s.begin(),s.end()); 
            if(s == tmp)
                answer = 1;
        }
    }
    
    
    
    return answer;
}