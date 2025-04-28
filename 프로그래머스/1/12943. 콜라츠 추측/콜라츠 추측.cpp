#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int num) {
    int answer = 0;
    long int n = num;
    
    if(n == 1)
        return 0;
    
    
    while(1)
    {
        if(n%2 == 0)
            n/= 2;
        else
            n = n * 3 +1;
         cout<<n<< " "<<endl;
        answer++;
        
        if(n == 1)
            break;
        else if(answer == 500){
            answer = -1;
            break;
        }
    }

    return answer;
}