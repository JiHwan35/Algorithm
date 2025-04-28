#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    
    vector<vector<int>> newboard(board.size()+2,vector<int>(board.size()+2));
    
     for(int i = 0; i<=board.size()+1; i++) {
        for(int j = 0; j<=board.size()+1; j++){
            if(i>0 && i<board.size()+1 && j>0 && j<board.size()+1){
                newboard[i][j] = board[i-1][j-1];
            }
            else
                newboard[i][j] = 1;
        }
     }
    
    for(int i = 1; i<newboard.size()-1; i++) {
        for(int j = 1; j<newboard.size()-1; j++){
            if(newboard[i][j] == 1){
                 if(newboard[i - 1][j - 1] == 0)
                     newboard[i - 1][j - 1] = 2;
                 if (newboard[i - 1][j + 1] == 0)
                     newboard[i - 1][j + 1] = 2;
                 if (newboard[i - 1][j] == 0)
                     newboard[i - 1][j] = 2;
                 if (newboard[i + 1][j - 1] == 0)
                     newboard[i + 1][j - 1] = 2;
                 if (newboard[i + 1][j + 1] == 0)
                     newboard[i + 1][j + 1] = 2;
                 if (newboard[i + 1][j] == 0)
                     newboard[i + 1][j] = 2;
                 if (newboard[i][j - 1] == 0)
                     newboard[i][j - 1] = 2;
                 if (newboard[i][j + 1] == 0)
                     newboard[i][j + 1] = 2;
                    }                
                }
            }
        
    
    for(int i = 1; i<newboard.size(); i++)
        for(int j = 1; j<newboard.size(); j++)
            if(newboard[i][j] == 0)    
                answer ++;
    
    
    return answer;
}