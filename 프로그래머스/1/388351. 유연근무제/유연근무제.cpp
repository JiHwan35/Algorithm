#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = schedules.size();
    
    
    for(int i = 0; i<timelogs.size(); i++){
        schedules[i] += 10;
        if((schedules[i] % 100) >59 ){
            schedules[i] += 40;
        }
        
        for(int j = 0; j<timelogs[0].size(); j++){
            if((j+startday)%7 == 6 || (j+startday)%7 == 0)
                continue;
            
            if(timelogs[i][j] >schedules[i]){
                answer--;
                break;   
            }
        }
        
        
        
        
    }
    

        
    
    return answer;
}