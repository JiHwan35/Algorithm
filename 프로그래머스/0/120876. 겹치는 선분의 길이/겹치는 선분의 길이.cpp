#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    vector <int> l(200); 
    int maxn = 0;
    int minn = 0;
    for(auto v : lines)
    {
        maxn = max(maxn,v[1]);
        minn = min(minn,v[0]);
        for(int i = v[0]+1; i<=v[1];i++)
            l[i-1+100]++;            
    }
    
    for(int i = minn; i<maxn; i++)
    {
        if(l[i+100] >= 2)
            answer++;
    }
    
    
    
    
    
    return answer;
}