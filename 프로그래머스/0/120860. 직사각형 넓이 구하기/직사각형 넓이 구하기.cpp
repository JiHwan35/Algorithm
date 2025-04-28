#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int length(int x1,int y1,int x2,int y2)
{
    return sqrt(pow(x1-x2,2) +pow(y1-y2,2));
}

int solution(vector<vector<int>> dots) {
    int answer = 0;
    vector<int> straight ;
    
    for(auto v : dots){
        int l = length(dots[0][0],dots[0][1],v[0],v[1]);
        if( l != 0)
            straight.push_back(l);
    }
    
    sort(straight.begin(),straight.end());
    
    answer = straight[0]*straight[1];
    
    
    
    
    
    
    
    return answer;
}