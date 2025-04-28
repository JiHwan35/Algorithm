#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    vector<int> num;
    for(int i = 0 ; i< rank.size(); i++)
    {
        int rankidx = find(rank.begin(),rank.end(),i+1)-rank.begin();
        
        if(attendance[rankidx] == true)
            num.push_back(rankidx);
        
        if(num.size() == 3)
            break;
    }
    
    answer = 10000 * num[0] + 100 * num[1] + num[2];
    
    
    
    return answer;
}