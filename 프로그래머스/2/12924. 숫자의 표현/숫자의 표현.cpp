#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    
    int answer = 0;
        
    for(int i  = 1; i<=n; i++){
        int sum = i;    
        
        for(int j = (i+1); sum<n; j++)
            sum += j;
        
    
        
        if(sum == n)
            answer++;
    }
        

    return answer;
}