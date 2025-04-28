#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int a = 0, b = 0;
    
    sort(numbers.begin(),numbers.end());
    
    a = numbers[0] * numbers[1];
    b = numbers[numbers.size()-1] *numbers[numbers.size()-2];
    
    if (a>b) answer = a;
    else answer = b;
    
    return answer;
}