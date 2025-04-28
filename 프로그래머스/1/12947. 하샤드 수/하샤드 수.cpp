#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = false;
    int sum = 0;
    int n = x;
    while(1){
        sum += x%10;
        
        x/=10;
       
        if (x<10){
            sum+=x;
            break;
        }
    }
    if(n%sum == 0)
        answer = true;
    
    return answer;
}