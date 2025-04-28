#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int max1 = 0,max2 = 0;
    
    for(int i = 0; i<sizes.size(); i++)
        sort(sizes[i].begin(),sizes[i].end());
    
    for(auto v : sizes){
        
        
        if (v[0]>max1)
            max1 = v[0];
        if (v[1]>max2)
            max2 = v[1];
    }
    
    answer = max1 * max2;
    return answer;
}