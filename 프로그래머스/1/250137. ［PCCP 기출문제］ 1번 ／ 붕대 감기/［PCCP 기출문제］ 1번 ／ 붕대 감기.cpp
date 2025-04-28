#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = 0;
    
    int last_hit = attacks.back()[0];
    int count = 0;
    int seq = 0;
    int max_health = health;
    
    for(int i = 1; i<=last_hit; i++){
        if( i == attacks[count][0]){
            health -= attacks[count][1];
            count++;
            seq = 0;
            
            if(health<=0){
                health = -1;
                break;
            }
                
        }
        else{
            
            health += bandage[1];
            seq++;
            
            if(seq == bandage[0]){
                health += bandage[2];
                seq = 0;
            }
            
            if(health>max_health)
                health = max_health;
        }
        
    
    }
    
    answer = health;
    
    return answer;
}