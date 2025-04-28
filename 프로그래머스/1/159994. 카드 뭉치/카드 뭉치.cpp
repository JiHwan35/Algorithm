#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int n = 0;
    vector<int> idx(2);
    vector<vector<string>>deck;
    deck.push_back(cards1);
    deck.push_back(cards2);
    
    if(find(cards2.begin(),cards2.end(),goal[0]) != cards2.end())
        n = 1;
    
    for(int i = 0; i<goal.size(); i++){
        if(goal[i] == cards1[idx[0]]){
            idx[0]++;
        }
        else if(goal[i] == cards2[idx[1]]){
            idx[1]++;
        }
        else{
            answer+="No";        
            return answer;
        }
    }
    answer+= "Yes";
    
    return answer;
}