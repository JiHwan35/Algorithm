#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    vector<int> v(26);
    
    for(auto c : s)
    {
        v[c-97]++;
    }
    
    for(int i = 0; i<v.size(); i++)
    {
        if(v[i] == 1)
            answer += i+97;
        
    }
    

    return answer;
}