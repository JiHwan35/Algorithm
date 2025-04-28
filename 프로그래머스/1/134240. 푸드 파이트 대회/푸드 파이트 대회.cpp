#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string tmp = "";
    for(int i = 1; i<food.size(); i++)
    {
        int n = food[i]/2;
        for(int j = 0; j<n; j++)
            tmp+= i+48;
    }
    
    answer += tmp;
    answer += '0';
     sort(tmp.begin(),tmp.end(),greater<int>());
    answer += tmp;
    
    return answer;
}