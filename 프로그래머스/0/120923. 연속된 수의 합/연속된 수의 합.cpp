#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    int a = 0;
    
    a = ((total * 2)/num +1 - num)/2;
    
    for(int i = 0; i<num; i++)
    {
        answer.push_back(a+i);
    }
    return answer;
}