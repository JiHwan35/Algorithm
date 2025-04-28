#include <string>
#include <vector>
#include <math.h>
using namespace std;


vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int x = 0;
    
    for(int i = 10; pow(2,i)-arr.size()>= 0; i--)
    {
        x = pow(2,i)-arr.size();
    }
    
    for(int i = 0; i<x; i++)
    {
        arr.push_back(0);
    }
    answer = arr;    
    return answer;
}