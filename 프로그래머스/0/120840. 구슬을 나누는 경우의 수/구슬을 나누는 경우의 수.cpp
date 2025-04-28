#include <string>
#include <vector>

using namespace std;


int solution(int balls, int share) {
   unsigned long long int answer = 1;
    int a = 0;
    if(share > balls-share)
        a = balls-share;
    else
        a = share;
    for(int i = 0; i<a; i++)
    { 
        answer *= (balls-i);
        answer /= (i+1);
    }
    
   
    
    return answer;
}