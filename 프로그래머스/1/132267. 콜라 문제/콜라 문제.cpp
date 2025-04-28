#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int sum = 0,c = 0;
    
    while(1){
        sum+= (n/a)*b;
        c += (n/a)*b;
        
        n = (n%a) + c; 
        c = 0;
        cout<<n<<" ";
        if(n<a){
            break;
        }
            
    }
    
    
    answer = sum;
    
    
    return answer;
}