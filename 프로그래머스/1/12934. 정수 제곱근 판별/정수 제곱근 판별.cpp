#include <string>
#include <vector>
#include <math.h>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    int rootn = sqrt(n);
    if(n == pow(rootn,2))
        answer += pow(rootn+1,2);
    else
        answer = -1;
    
    return answer;
}