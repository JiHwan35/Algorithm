#include <string>
#include <vector>
#include <math.h>
using namespace std;

int solution(int n) {
    int answer = 2;
    int sqrtn = sqrt(n);
    
    if(pow(sqrtn,2)==n) answer =1;
    
    
    return answer;
}