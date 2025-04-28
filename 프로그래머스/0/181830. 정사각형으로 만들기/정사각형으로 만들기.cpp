#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    vector<vector<int>> answer;
    
    if(arr.size() > arr[0].size()){
        for(auto v : arr){
            for(int i = 0; i<arr.size()-arr[0].size(); i++)
                v.push_back(0);   
            answer.push_back(v);
        }
    }    
    else{
        for(int i = 0; i<arr[0].size(); i++){
            if(i<arr.size())
                answer.push_back(arr[i]);
            else
                answer.push_back(vector<int>(arr[0].size()));
        }         
    
    }
        
        
    return answer;
}