#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int product = 1;
    int pow = 0;
    
    for(int i = 0; i<num_list.size(); i++)
    {
        product *= num_list[i];
        pow += num_list[i];
    }
    if((pow*pow)>product)
        answer = 1;
    
    return answer;
}