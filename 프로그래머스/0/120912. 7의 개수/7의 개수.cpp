#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    for(int i : array)
    {
        string str = to_string(i);
        for(auto c : str)
        {
            if(c == '7')
                answer++;
        }
    }
    
    
    
    return answer;
}