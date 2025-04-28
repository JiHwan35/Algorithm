#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string A, string B) {
    int answer = -1;
    
   for(int i = 0; i<A.size(); i++){    
       string tmp = A;
       rotate(tmp.rbegin(),tmp.rbegin()+i, tmp.rend());
       if(tmp == B){     
            answer = i;
            break;
       } 
   }
    
    
    return answer;
}