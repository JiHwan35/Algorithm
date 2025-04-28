#include <string>
#include <vector>
#include <math.h>
using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    
    int a = common[0];    

    if(common[2] - common[1] == common[1] - common[0])
        answer = a + common.size()*(common[1] - common[0]);
    else
        answer = a * pow(common[1]/a,common.size());
    
    return answer;
}