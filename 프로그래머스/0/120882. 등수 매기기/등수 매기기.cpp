#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<double> tmp1 ,tmp2;
    for(auto v : score)
        tmp1.push_back((v[0]+v[1])/(2.0));
    
    tmp2 = tmp1;
    sort(tmp1.begin(),tmp1.end(),greater<double>());
    
    for(int i = 0; i<tmp1.size(); i++)
    {
        answer.push_back(find(tmp1.begin(),tmp1.end(),tmp2[i])-tmp1.begin() + 1);
    }
    
    return answer;
}