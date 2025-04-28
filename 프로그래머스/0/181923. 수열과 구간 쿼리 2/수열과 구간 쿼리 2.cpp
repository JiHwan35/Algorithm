#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    
    for(auto v : queries){
        int min = -1;
        for(int i = v[0]; i<=v[1]; i++ ){
            if(arr[i]>v[2] && i == v[0]){
                min = arr[i];
            }
            else if(arr[i]>v[2]){
                if(min == -1 || arr[i]<min)
                    min = arr[i];
            }       
        }
        answer.push_back(min);
    }
    
    
    
    return answer;
}