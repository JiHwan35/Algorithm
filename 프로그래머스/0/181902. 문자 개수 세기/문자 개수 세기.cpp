#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52);
    
    for(auto c : my_string)
    {
        if(c>='A' && c<='Z')   
            answer[c-65]++;
        else
            answer[c-97+26]++;
            
    }
    return answer;
}