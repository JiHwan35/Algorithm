#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> answer;
    
    num_list.erase(num_list.begin(),num_list.begin()+n-1);
    
    answer = num_list;
    
    return answer;
}