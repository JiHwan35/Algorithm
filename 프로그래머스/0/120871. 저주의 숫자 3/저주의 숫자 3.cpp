#include <string>
#include <vector>

using namespace std;

int isthree(int x){
    
    string s = to_string(x);
    if(x % 3 == 0 || s.find("3") != string :: npos)
        return isthree(x+1);
    else
        return x;
}



int solution(int n) {
    int answer = 0;
    int x3 = 0;
    
    for(int i = 1; i<=n; i++)
    {
        x3++;
        x3 = isthree(x3);
        
    }
    
 
    answer = x3;
    
    return answer;
}