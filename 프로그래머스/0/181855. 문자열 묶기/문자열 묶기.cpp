#include <string>
#include <vector>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    vector<int> v(40);
    for(auto s : strArr)
    {
        v[s.size()]++;
    }
    for(int i = 0; i<v.size(); i++)
    {
        if (v[i]>answer)
        {
            answer = v[i];
        }
    }
    
    
    return answer;
}