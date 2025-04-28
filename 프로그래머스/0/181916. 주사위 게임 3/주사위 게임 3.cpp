#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
    vector<int> dup;
    vector<int> dup2;
    dup.push_back(a);
    dup.push_back(b);
    dup.push_back(c);
    dup.push_back(d);
    
    sort(dup.begin(),dup.end());
    dup2 = dup;
    dup.erase(unique(dup.begin(),dup.end()),dup.end());
    
     if(dup.size() == 1 )
        answer = 1111*a;
    else if(dup.size() == 2){
        if(dup2[1] != dup2[2])      
            answer = (dup[0]+dup[1]) * abs(dup[0]-dup[1]);
        else if(dup2[0] == dup2[1])
            answer = pow(10*dup[0]+dup[1],2);
        else
            answer = pow(10*dup[1]+dup[0],2);
    }
    else if(dup.size() == 3)
    {   
        if(dup2[0] == dup2[1])
            answer = dup[1] * dup[2];
        else if(dup2[1] == dup2[2])
            answer = dup[0]*dup[2];
        else 
            answer = dup[0]*dup[1];
    }
    else
        answer = dup[0];
    
    
    return answer;
}