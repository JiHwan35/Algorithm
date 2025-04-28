#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    int user = stages.size();
    int user2 = user;
    vector<double> fail(N+1);
    
    sort(stages.begin(), stages.end());
  
    for(int i = 0; i<user; i++){
        fail[stages[i]-1]++;
        
        if(i == user - 1 || stages[i] != stages[i+1]){
            double f = fail[stages[i]-1];
            fail[stages[i]-1] = f/user2;
            user2 -=f;
        }
    }
    
    vector<double> tmp = fail;
    
    sort(tmp.begin(),tmp.end()-1,greater<double>());
    
    for(int i = 0; i<N; i++){
        int idx = find(fail.begin(),fail.end(),tmp[i]) - fail.begin()+1;
        
        fail[idx-1] = -1;
        
        
        answer.push_back(idx);
    }
    
    
    
    return answer;
}