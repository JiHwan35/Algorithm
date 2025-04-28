#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    
    for(int i = 1; i<sides[0]+sides[1]; i++)
    {
        if(i + sides[0]>sides[1] && sides[1]+ i>sides[0])
            answer++;
    }
    
    return answer;
}