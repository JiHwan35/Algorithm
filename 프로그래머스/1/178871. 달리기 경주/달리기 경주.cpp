#include <string>
#include <vector>
#include <map>
using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    
    vector<string> answer;
    map<string,int> position;
    
    for(int i = 0; i<players.size(); i++){
        position[players[i]] = i;
    }
    
    for(string s : callings){
        int idx = position[s];
        
        swap(players[idx],players[idx-1]);
        
        position[s] = idx-1;
        position[players[idx]] = idx;
    }
    
    
    answer = players;
    
    
    return answer;
}