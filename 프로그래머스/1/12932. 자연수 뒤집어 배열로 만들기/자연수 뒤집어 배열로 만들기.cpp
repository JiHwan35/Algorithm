#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    
    while(1){
        answer.push_back(n%10);
        n/=10;
        
        if(n==0)
           break; 
        else if(n<10 ){
            answer.push_back(n);
            break;
        }
        
    }
    
    cout<<answer[0]<<endl;
    
    return answer;
}