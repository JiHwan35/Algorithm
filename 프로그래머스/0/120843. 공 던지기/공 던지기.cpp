#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int s = 0;
    for(int i = 0; s<k; i+=2)
    {
        s++;
        if(i>=numbers.size())
            i -= numbers.size();
        answer = numbers[i];
    }
    
    
    return answer;
}