#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    
    string answer = "";
    
    map<char,int> ktype;
    
    
    ktype['R'];
    ktype['T'];
    ktype['C'];
    ktype['F'];
    ktype['J'];
    ktype['M'];
    ktype['A'];
    ktype['N'];

    for(int i = 0; i<choices.size(); i++){
        if(choices[i]>4)
            ktype[survey[i][1]] += choices[i]-4;
        else if(choices[i]<4)
            ktype[survey[i][0]] += abs(choices[i]-4);
    }
        
    
    if(ktype['R']>=ktype['T'])
        answer+='R';
    else
        answer+='T';
    
    
    if(ktype['C']>=ktype['F'])
        answer+='C';
    else
        answer+='F';
    
    if(ktype['J']>=ktype['M'])
        answer+='J';
    else
        answer+='M';
    
    if(ktype['A']>=ktype['N'])
        answer+='A';
    else
        answer+='N';
    
    
    
    return answer;
}