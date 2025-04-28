#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 2;
    
    int ac = sides[0] + sides[1] + sides[2];
    int max = *max_element(sides.begin(),sides.end());
    
    if ((ac-max)> max ) answer = 1;
    
    return answer;
}