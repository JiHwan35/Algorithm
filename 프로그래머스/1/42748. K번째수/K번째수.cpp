#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(auto v : commands){
        vector<int> tmp = array;
        
        sort(tmp.begin()+v[0]-1,tmp.begin()+v[1]);
        
        answer.push_back(tmp[v[0] + v[2] -2]);
    }
    
    
    
    
    
    return answer;
}