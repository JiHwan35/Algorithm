#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    if(s.size()!=4 && s.size()!=6)
        return false;
    
    for(auto c : s)
        if(c < '0' || c>'9')
            return false;
    

    
    return answer;
}