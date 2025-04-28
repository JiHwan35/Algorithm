#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    string answer = "";
    int idx = 0;
    
    for(vector v : parts)
    {
        answer += my_strings[idx].substr(v[0],v[1]-v[0]+1);
        idx++;
    }
    
    return answer;
}