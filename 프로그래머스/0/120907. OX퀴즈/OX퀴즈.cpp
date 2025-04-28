#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    for(auto v : quiz){
        v+=" ";
        vector<string> term;
        string tmp = "";
        for(int i = 0; i<v.size(); i++)
        {
            if(v[i] >= '0' && v[i]<= '9')
                tmp+= v[i];
            else if(v[i] == '+' || v[i] == '-')
                tmp+= v[i];
            else if(v[i] == '=')
                continue;
            else{
                if(tmp !=""){
                term.push_back(tmp);
                tmp ="";
                }
            }          
        }
        
        vector<int>termint;
        
        for(int i = 0; i<4; i++)
        {
            if(i ==0 || i == 2 || i == 3){
            if(term[i][0] == '-')
            {    
                term[i].erase(0,1);
                termint.push_back(-1 * stoi(term[i]));
            }
            else
                termint.push_back(stoi(term[i]));}
        }
        
        if(term[1] == "+"){
            if(termint[0] + termint[1] == termint[2])
                answer.push_back("O");
            else
                answer.push_back("X");
        }
        else{
            if(termint[0] - termint[1] == termint[2])           
               answer.push_back("O");
            else
               answer.push_back("X");
        }
        
    }
    
    return answer;
}