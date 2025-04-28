#include <string>
#include <vector>
#include <math.h>
#include <iostream>
using namespace std;

int divisor(int n){
    int d = 0;
    
    int rn = sqrt(n);
  
    for(int i = 1; i<=rn; i++)
        if(n%i == 0)
            d++;
    
    if(n == pow(rn,2))
        d = (d-1)*2 +1;
    else 
        d = d*2;
    
    return d;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for(int i = 1; i<=number; i++){
        int atk = divisor(i);

        if(atk>limit)
            atk = power;
    
        answer+= atk;
    }
    return answer;
}