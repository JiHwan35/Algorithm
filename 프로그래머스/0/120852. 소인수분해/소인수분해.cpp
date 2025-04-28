#include <string>
#include <vector>

using namespace std;


bool isprime(int n)
{
     for(int i = 2; i<n; i++)
    {
        if((n%i) == 0)
        {    
            return false;
        }
    }
    
    
    return true;
}




vector<int> solution(int n) {
    vector<int> answer;
    
    for(int i = 2; i<=n; i++)
    {
        if((n%i) == 0)
        {    
            if(isprime(i)){
            answer.push_back(i);
            n = n/i;
            }
        }
    }
    
    
    return answer;
}