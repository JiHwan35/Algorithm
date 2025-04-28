#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    map<char,int> tap;
    
    for(string s : keymap){
        for(int i = 0; i<s.size(); i++){
            if( tap.find( s[i] ) == tap.end()  ){
                tap[s[i]] = i+1;
                
            }
            else if( tap[s[i]] >i+1){
                tap[s[i]] = i+1;
            }
            
        }
    }
    
    for(string s : targets){
        int tapnum = 0;
        for(int i = 0; i<s.size(); i++){
            //cout<<tap[s[i]]<<" ";
            if(tap.find(s[i]) != tap.end())
                tapnum += tap[s[i]];
            else{
                tapnum = 0;
                break;
            }
        }
        //cout<<endl;
        if(tapnum == 0)
            tapnum = -1;
        answer.push_back(tapnum);
    }
    
    
    return answer;
}