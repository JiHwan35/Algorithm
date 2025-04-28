#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    
    vector<int> answer;
    
    int lux = -1, luy = -1;
    int rdx = -1, rdy = -1;
    
    for(int i = 0; i<wallpaper.size(); i++){
        for(int j = 0; j<wallpaper[0].size(); j++){
            char p = wallpaper[i][j] ;
            
            if(p == '#'){
                if(luy > j || lux == -1)
                    luy = j;
                if(lux > i || lux == -1)
                    lux = i;
                if(rdy < j+1 || lux == -1)
                    rdy = j+1;
                if(rdx < i+1 || lux == -1)
                    rdx = i+1 ;
            }
        }
    }
    
    
    answer.push_back(lux);
    answer.push_back(luy);
    answer.push_back(rdx);
    answer.push_back(rdy);
    
    return answer;
}