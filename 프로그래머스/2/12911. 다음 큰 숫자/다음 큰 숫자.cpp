#include <string>
#include <vector>
#include <iostream>
using namespace std;
string to_binary(int n);


int solution(int n) {
    
    int answer = 0;
    int count = __builtin_popcount(n);
    int n2 = n+1;
    
    while(__builtin_popcount(n2) != count){
        n2++;
    }
    
    answer = n2;
    
    
    
    
    
    
    return answer;
}


