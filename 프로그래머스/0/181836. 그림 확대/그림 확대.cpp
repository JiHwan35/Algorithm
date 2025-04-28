#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    string tmp ="";
    
    for(auto v : picture){
        for(int i = 0; i<picture[0].size(); i++)
            tmp.append(k,v[i]);
        answer.insert(answer.end(),k,tmp);
        tmp = "";
    }
    
    return answer;
}