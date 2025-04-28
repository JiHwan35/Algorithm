#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    
    int answer = 0;
   
    sort(lost.begin(),lost.end());
    sort(reserve.begin(),reserve.end());
    
    vector<int> rd;
    rd = reserve;
    vector<int> ld;
  
    int idx = 0;
    
    for(int i = 0; i<lost.size(); i++){
        
        if( find(reserve.begin(),reserve.end(),lost[i])  == reserve.end()  ){
            ld.push_back(lost[i]);
        }
        else{
            reserve.erase(find(reserve.begin(),reserve.end(),lost[i]));
        }
    }
    

    for(int i : ld){
        if( find(reserve.begin(),reserve.end(),i-1) != reserve.end() ){
            reserve.erase(find(reserve.begin(),reserve.end(),i-1));
            answer++;
        }
        else if( find(reserve.begin(),reserve.end(),i+1) != reserve.end() ){
            reserve.erase(find(reserve.begin(),reserve.end(),i+1));
            answer++;
        }
    }
    
    answer = n-ld.size()+answer;
                          
    return answer;
}
