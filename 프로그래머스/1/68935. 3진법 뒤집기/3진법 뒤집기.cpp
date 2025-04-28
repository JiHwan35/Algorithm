#include <string>
#include <vector>
#include <math.h>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
    
    if(n<3){
        return n;
    }
    
    while(1){
        v.push_back(n%3);
        n /= 3;
        
        if(n<3){
            v.push_back(n);
            break;
        }
        
        
    }
    
    for(int i = 0;  i<v.size(); i++){
                answer += v[i] * pow(3,v.size()-1 -i);
        
        
    }
    
    return answer;
}