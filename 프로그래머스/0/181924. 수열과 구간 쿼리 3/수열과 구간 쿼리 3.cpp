#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    for(auto v : queries)
    {
        int tmp = arr[v[0]];
        arr[v[0]] = arr[v[1]];
        arr[v[1]] = tmp; ;
    }
    
    answer = arr;
    
    return answer;
}