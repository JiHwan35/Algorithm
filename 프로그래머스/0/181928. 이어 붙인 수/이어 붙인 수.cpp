#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string od = "";
    string ev = "";
    for(int i = 0; i<num_list.size(); i++){
        if(num_list[i]%2 == 1)
            od += to_string(num_list[i]);
        else
            ev += to_string(num_list[i]);
    }
    
    answer = stoi(od) + stoi(ev);
    return answer;
}