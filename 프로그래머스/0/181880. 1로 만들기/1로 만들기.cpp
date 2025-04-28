#include <string>
#include <vector>

using namespace std;

int result = 0;

void op(int n)
{
    int num = n;
    
    if(num != 1)
    {
        if((num%2)==0)
            num /= 2;
        else
            num = (num-1)/2;

        result++;
    }
    
    if(num != 1)
        op(num);
}


int solution(vector<int> num_list) {
    int answer = 0;
    
    for(int i = 0; i<num_list.size(); i++)
        op(num_list[i]);
    
    answer = result;
    
    return answer;
}