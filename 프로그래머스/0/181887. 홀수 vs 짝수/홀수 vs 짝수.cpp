#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int odd, even = 0;
    
    for(int i= 0; i<num_list.size(); i++)
    {
        if(i%2 == 0) odd+=num_list[i];
        else even+=num_list[i];
    }
    
    answer = max(odd,even);
    
    return answer;
}