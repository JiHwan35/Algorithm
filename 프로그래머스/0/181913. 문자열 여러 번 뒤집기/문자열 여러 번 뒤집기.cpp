#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string answer = "";
    answer = my_string;
    
    for(auto v : queries)
    {      
        for(int i = 0; i<=v[1]-v[0]; i++)
            answer[v[0]+i] = my_string[v[1] -i];
        
        my_string = answer;
    }
    return answer;
}

