#include <string>
#include <vector>
#include <algorithm>
using namespace std;


bool compare(int a, int b)
{
    return a>b;   
}
int solution(vector<int> numbers) {
    int answer = 0;
    
    sort(numbers.begin(),numbers.end(),compare);
    answer = numbers[0]*numbers[1];
    
    
    return answer;
}