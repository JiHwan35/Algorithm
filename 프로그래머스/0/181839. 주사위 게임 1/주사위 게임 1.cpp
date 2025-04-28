#include <string>
#include <vector>

using namespace std;

bool isOdd(int n)
{
    if(n%2==1)
        return 1;
    else 
        return 0;
}

int solution(int a, int b) {
    int answer = 0;
    
    if(isOdd(a) &&isOdd(b)) answer = a*a + b*b;
    else if(isOdd(a)==0 &&isOdd(b)==0) answer = abs(a-b);
    else answer = (a+b) *2;
    return answer;
}