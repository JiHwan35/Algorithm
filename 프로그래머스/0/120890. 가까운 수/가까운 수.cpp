#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    
    int mini = 1000;
    
    for(int i : array)
    {
        if(abs(i-n)< mini){
            mini = abs(i-n);
            answer = i;   
        }
        else if(abs(i-n) == mini)
        {
            answer = min(i,answer);
        }    
            
        
    }
    
    
    
    
    return answer;
}