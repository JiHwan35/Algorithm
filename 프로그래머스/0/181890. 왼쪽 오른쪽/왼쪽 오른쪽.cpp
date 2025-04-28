#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    int dm = 0;
    for(auto v : str_list)
    {
        if(v == "d" || v == "u")
            answer.push_back(v);
        else if(v == "l"){
            if(dm == 0)
                break;
            else
                answer.push_back(v);
        }
        else{
            if(dm == 0){
                dm = 1;
                answer.clear();
            }
            else
                answer.push_back(v);
        }
    }
    
     if(answer == str_list)
        answer.clear();

    
    
    
    return answer;
}