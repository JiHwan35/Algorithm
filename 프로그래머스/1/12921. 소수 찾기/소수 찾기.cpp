#include <vector>
#include <math.h>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(int n) {
    vector <bool> is_prime(n+1, false);
    
    
    for(int i = 2; i<=sqrt(n); i++){
        if(is_prime[i] == true)
            continue;
        for(int j = i*2; j<=n; j+=i){
            is_prime[j] = true;        
        }
    }
    
    
    int answer = 0;
    answer = count(is_prime.begin()+2,is_prime.end(),false);

    
    
    return answer;
}