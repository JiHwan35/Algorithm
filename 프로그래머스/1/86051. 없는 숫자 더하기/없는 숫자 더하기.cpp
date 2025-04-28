#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    sort(numbers.begin(),numbers.end());
    numbers.erase(unique(numbers.begin(),numbers.end()),numbers.end());
    
    answer += 45 - accumulate(numbers.begin(),numbers.end(),0);
    
    
    
    
    return answer;
}