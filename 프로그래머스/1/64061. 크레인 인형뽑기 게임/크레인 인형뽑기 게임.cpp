#include <string>
#include <vector>
#include <stack>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    
    int answer = 0;
    
    stack<int> pang;
    vector<stack<int>> b(board[0].size());
 
    
    for(int i = board.size()-1; i>=0; i--){
        for(int j = 0; j<board[0].size(); j++)
            if(board[i][j] != 0)
                b[j].push(board[i][j]);
    }
    
    
    
 
    for(int i: moves){
        int idx = i-1;
        if(b[idx].size()>0){
            pang.push(b[idx].top());
            b[idx].pop();
            
           
            if(pang.size()>1){
                int top1 = 0, top2 = 0;
                top1 = pang.top();
                pang.pop();
                top2 = pang.top();
                pang.pop();

                if(top2 != top1){
                    pang.push(top2);
                    pang.push(top1);
                }
                else{
                    answer+=2;
                    //cout<<a <<" "<<b;
                }
            }
        }
    }
    

    return answer;
}