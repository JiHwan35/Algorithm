#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    bool seq = 0;
    int b = babbling.size();
    vector<string> spell;
        
    vector<string> v = {"aya", "ye", "woo", "ma"};
    vector<string> vv = {"ayaaya","yeye","woowoo","mama"};
    
    
    
    for(string s : babbling){
        bool isdoubled = 0;
        for(int i = 0; i<vv.size(); i++){
            auto it = s.find(vv[i]);    
            if(it != string :: npos){
                isdoubled = 1;   
                break;
            }
        }
        if(isdoubled == 0){
            spell.push_back(s);
        }
    }
    
    for(string& s : spell){
        for(int i = 0; i<v.size(); i++){
            auto it = s.find(v[i]);
            if(it == string ::npos){
                continue;
            }   
            else{
                s.replace(it,v[i].size(),"1");
                i--;
                continue;
            }
        }        
    }
    
    
    for(string s : spell){
        bool iserased = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] != '1'){
                iserased = 1;
                break;
            }
        }
        if(iserased == 0)
            answer++;
    }
    
    
    return answer;
}