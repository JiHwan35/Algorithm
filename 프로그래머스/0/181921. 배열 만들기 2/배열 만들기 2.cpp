#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    
    for(int i = l; i<=r; i++){
        string s = to_string(i);
        bool is50 = true;
        
        for(auto c : s){
            if(c !='0' && c !='5'){
                is50 = false;
                break;
            }
        }
        
        if(is50 == true)
            answer.push_back(i);
    }
    
    
    
    if(answer.size() == 0)
        answer.push_back(-1);
    
    
    return answer;
}