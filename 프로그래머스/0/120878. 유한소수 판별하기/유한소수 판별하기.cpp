#include <string>
#include <vector>

using namespace std;

int isdivided(int a, int b){
    while(1){
        if(b%2 == 0)
            b /= 2;
        else
            break;
    }
    while(1){
        if(b%5 == 0)
            b /= 5;
        else
            break;
    }
    
    if(a%b == 0)
        return 1;
    else
        return 2;
    
    
}


int solution(int a, int b) {
    int answer = 0;
    
    answer = isdivided(a,b);
    
    
    
    
    return answer;
}