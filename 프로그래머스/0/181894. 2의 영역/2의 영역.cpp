#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> tmp;
    
    int mode = 0;
    
    for(int i : arr)
    {
        if(i==2 && mode == 0)
        {
            answer.push_back(i);
            mode = 1;
        }
        else if(i != 2 && mode == 1)
            tmp.push_back(i);
        else if(i == 2 && mode == 1){
            tmp.push_back(i);
            answer.insert(answer.end(),tmp.begin(),tmp.end());
            tmp.clear();
        }
    }
    if(mode == 0)
        answer.push_back(-1);
    
    
    return answer;
}