#include <string>
#include <vector>
#include <iostream>
using namespace std;





vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int H = park.size();
    int W = park[0].size();
    
    pair<int,int> pos;
    
    bool is_started = false;
    
    for(int i = 0; i<H; i++){
        for(int j = 0; j<W; j++){
            if(park[i][j] == 'S'){
                is_started = true;
                pos.first = i;
                pos.second = j;
                break;
            }
        }
        if(is_started == true)
            break;
    }
    
    
    for(string c: routes){
        char way = c[0];
        int length = c[2] - 48;
        int x = pos.second;
        int y = pos.first;
        cout<<y<<" "<<x<<endl;
        if(way == 'E'){
            int i = 0;
            for(i = x+1; i<=x+length; i++){
                if(i > (W-1) || park[y][i] == 'X' )    
                    break;
                else if(i == x+length)
                    pos.second = i;
            }
            
        }
        else if(way == 'W'){
            int i = 0;
            for(i = x-1; i>=x-length; i--){
                if(i <0 || park[y][i] == 'X' )    
                    break;
                else if(i == x-length)
                    pos.second = i;
            }
            
        }
        else if(way == 'S'){
            int i = 0;
            for(i = y+1; i<=y+length; i++){
                if(i > (H-1) || park[i][x] == 'X' )    
                    break;
                else if(i == y+length)
                    pos.first = i;
            }
            
        }
       else if(way == 'N'){
            int i = 0;
            for(i = y-1; i>=y-length; i--){
                if(i < 0 || park[i][x] == 'X' )    
                    break;
                else if(i == y-length)
                    pos.first = i;
            }
            
        }
       
    }
    

    
   
    answer.push_back(pos.first);
    answer.push_back(pos.second);
    
     
    return answer;
}