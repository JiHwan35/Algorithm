#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    
    if(arr.size()<2){
        answer.push_back(-1);
        return answer;
    }
    int min = arr[0];
    int minnum = 0;
    for(int i = 1; i<arr.size(); i++){
            
        if(arr[i]<min){
            min = arr[i];
            minnum = i;
        }
    }
    
    arr.erase(arr.begin()+minnum);
    answer = arr;
    return answer;
}