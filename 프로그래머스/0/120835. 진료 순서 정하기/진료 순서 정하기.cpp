#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    
    vector<int> tmp;
    tmp = emergency;
    sort(tmp.begin(),tmp.end());
    
    for(int i = 0; i<emergency.size(); i++)
        for(int j = 0; j<tmp.size(); j++){
            if(emergency[i] == tmp[j])
                answer.push_back(tmp.size()-j);
               }
    
               
               
    return answer;
}