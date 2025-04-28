#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    
    while(1)
    {
        answer+=(n%10);
        n = n/10;
        if(n <10){
            answer+=n;
            break;   
        }
    }
    
    cout << "Hello Cpp" << endl;

    return answer;
}