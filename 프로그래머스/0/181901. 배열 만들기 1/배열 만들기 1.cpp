#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    
    for(int i = 1; k*i<=n; i++)
    {
        answer.push_back(i*k);
    }
    
    
    
    return answer;
}