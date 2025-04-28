#include <string>
#include <vector>

using namespace std;
vector<int> answer;

void collatz(int n)
{
    answer.push_back(n);
    
    if(n %2 == 0) n /= 2;
    else n = n*3 +1;
    
    if(n != 1) collatz (n);
    else answer.push_back(n);
}

vector<int> solution(int n) {
       
    collatz(n);   
    
    return answer;
}

