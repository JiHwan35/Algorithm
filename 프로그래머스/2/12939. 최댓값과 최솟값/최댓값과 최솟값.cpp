#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

string solution(string s) {
    string answer = "";
    string tmp = "";
    bool is_negative = false;
    vector<int> num;
    
    for(char c : s){
    
    if(c == '-')
         is_negative = true;
    else if(c >='0' && c<='9')
        tmp+=c;
     else if(c == ' '){
         if(is_negative == false){
             num.push_back(stoi(tmp));
         }
         else{
             num.push_back(stoi(tmp) * -1);
             is_negative = false;
         }
         tmp = "";
     }   
    
    }
    
    if(is_negative == false){
             num.push_back(stoi(tmp));
    }
    else{
        num.push_back(stoi(tmp) * -1);
    }     
        

    sort(num.begin(),num.end());
    

    
    
    answer += to_string(num[0]);
    answer += " ";
    answer += to_string(num[num.size()-1]);
    
    return answer;
}