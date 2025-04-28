#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    sort(participant.begin(),participant.end());
    sort(completion.begin(),completion.end());
    
    if(completion.size()==0){
        answer += participant[0];
        return answer;
    }
    
    for(int i = 0; i<participant.size(); i++){
        if(completion[i]!=participant[i]){
            answer+=participant[i];
            break;
        }
    }
    
    
    
    return answer;
}