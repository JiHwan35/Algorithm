#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    
    int answer = 0;
    
    vector<string> v;
    string tmp = "";
    
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == ' ')
        {
            v.push_back(tmp);
            tmp = "";
        }
        else
        {
            tmp += s[i];
        }
    }
    if(tmp != "")
        v.push_back(tmp);
            
    
    for(int i = 0; i<v.size(); i++)
    {
        if(v[i] == "Z")
        {
            answer -= stoi(v[i-1]);
        }
        else
        {
             answer +=stoi(v[i]);
        }
    }
    
    
    return answer;
}