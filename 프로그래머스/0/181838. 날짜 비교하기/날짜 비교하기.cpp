#include <string>
#include <vector>

using namespace std;

int solution(vector<int> date1, vector<int> date2) {
    int answer = 0;
    
    for(int i = 0; i<date1.size(); i++)
    {
        if(date1[i]<date2[i]){
            answer = 1;
            break;
        }
        else if(date1[i]>date2[i]){
            answer = 0;
            break;
        }
        else
            continue;
    }
    
    
    
    
    return answer;
}