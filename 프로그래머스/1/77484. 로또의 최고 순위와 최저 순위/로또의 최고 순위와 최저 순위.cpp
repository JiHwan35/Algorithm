#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int e = 0,l = 0, max = 0, min = 0;
    for(int i : lottos){
        if(i==0)
            e++;
        else
            win_nums.erase(remove(win_nums.begin(),win_nums.end(),i),win_nums.end());
    }
    
    
    int wn = win_nums.size();
    int rn = 6-wn;
    if(e<= wn){
        max = rn+e;
        min = rn;
    }
    else{
        max = rn+wn;
        min = rn;
    }
    
    if(min<2)
        min = 1;
    if(max<2)
        max = 1;
  
    answer.push_back(7-max);
    answer.push_back(7-min);
    return answer;
}