#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i = 1; i<=n; i++){
        if(n%i == 1){
            answer = i;
            break;
        }
    }
    
    cout<<answer<<endl;
        
    
    
    
    
    return answer;
}