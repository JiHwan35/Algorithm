#include <string>
#include <vector>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    
    for(int i = 0; i<s.size(); i++){
        
        char c = s[i];
        
        if(s.find(c) ==  i)
            answer.push_back(-1);
       
        else if(i!=0){
            for(int j = i-1; j>=0; j--){
                if(s[i] == s[j]){
                    answer.push_back(i-j);
                    break;
                }
            }        
        }
    
        
    }
    
    return answer;
}