#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    
    vector<int> burger = {1,2,3,1};
    vector<int> b;
    
    for(int i:ingredient){
        b.push_back(i);
        
        if(b.size()>=4){
            vector<int>subb(b.end()-4,b.end());
            if(subb == burger){
                answer++;
                b.pop_back();
                b.pop_back();
                b.pop_back();
                b.pop_back();
            }
                
        }
        
    }
    
    
 
    
    return answer;
}