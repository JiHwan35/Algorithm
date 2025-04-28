#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    
    for(int i : arr)
    {
        if(find(answer.begin(),answer.end(),i ) == answer.end() )
            answer.push_back(i);
        if(answer.size()==k)
            break;
    }
    
    int n = k-answer.size();
    if(n>0){
        for(int i = 0; i<n; i++)
            answer.push_back(-1);        
    }
    
    return answer;
}