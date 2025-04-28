#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare_abs(int a, int b)
{
    if(abs(a) == abs(b))
        return a>b;
    else
        return abs(a)<abs(b);
}
vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    vector<int> tmp;
    
     for(int i : numlist){
         tmp.push_back(i-n);
     }
    
    sort(tmp.begin(),tmp.end(),compare_abs);
    
    
     for(int i : tmp){
        answer.push_back(i+n);
     }
    
    return answer;
}