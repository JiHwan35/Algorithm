#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    
    int answer,tmp1 = 0;
    int tmp2 = 1;
    
    for(int i : num_list){
        tmp1 += i;
        tmp2 *= i;
    }
    if(num_list.size()>10) answer = tmp1;
    else answer = tmp2;
    
    
    return answer;
}