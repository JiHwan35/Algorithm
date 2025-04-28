#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int fac = 1;
    
    while(1)
    {
        if(fac<=n)
        {
            answer++;
            fac = fac * answer;
        }
        else
        {
            answer--;
            break;
        }
    }
        
    

    return answer;
}