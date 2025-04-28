#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int> answer;
    
    if(arr.size()%2 == 1){
        for(int i = 0; i*2<arr.size(); i++){
            arr[i*2] += n;
        }
    }
    else{
        for(int i = 1; i<arr.size(); i++){
            arr[i] += n;
            i++;
        }
    }
    answer = arr;
    
    
    
    return answer;
}