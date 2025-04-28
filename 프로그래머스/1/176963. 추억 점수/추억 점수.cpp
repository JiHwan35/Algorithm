#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    for(auto v : photo){
         int tmp = 0;
        for(int i = 0; i<v.size(); i++){
           int n = find(name.begin(),name.end(),v[i]) - name.begin();
            if(find(name.begin(),name.end(),v[i]) != name.end())
                tmp+= yearning[n];
            
           
        }
         answer.push_back(tmp);
    
    }
    
    
    
    return answer;
}