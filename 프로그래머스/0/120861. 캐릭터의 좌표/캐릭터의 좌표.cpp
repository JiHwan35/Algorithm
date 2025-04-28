#include <string>
#include <vector>

using namespace std;

vector<int> key(int x,int y, string s,int xl,int yl)
{
    if(s == "up" && (y+1)*2 < yl) 
        y++;
    else if(s =="down" && (y-1)*2 > -yl)
        y--;
    else if(s =="right" && (x+1)*2 < xl)
        x++;
    else if(s == "left" && (x-1)*2 > -xl)
        x--;
    
    return vector<int>{x,y};
}

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer{0,0};
    
    for(string s : keyinput)
        answer = key(answer[0],answer[1],s,board[0],board[1]);
    

    return answer;
}