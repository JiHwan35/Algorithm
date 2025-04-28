#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    vector<int> mode;
    vector<int> num;
    int max = 0;
    for(int i = 0; i<array.size(); i++)
    {
        if(find(mode.begin(),mode.end(),array[i])==mode.end()){   
                mode.push_back(array[i]);
                num.push_back(1);
            }
        else
            num[find(mode.begin(),mode.end(),array[i])-mode.begin()]++;
    }
    
    
    for(int i = 0; i<num.size(); i++)
    {
        if (num[i]>max){
            max = num[i];
            answer = mode[i];
        }
        else if(num[i] == max)
            answer = -1;
    }
    
    
    
    return answer;
}