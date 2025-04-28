#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    
    map<int,vector<int>> datamap;
    map<string,int> sb;
    sb["code"] = 0; 
    sb["date"] = 1;
    sb["maximum"] = 2;
    sb["remain"] = 3;
    
    
    for(vector v : data){
        int n = sb[ext];
        int n1 = sb[sort_by];
        if(v[n]<val_ext){
            datamap[v[n1]] = v;      
        }
    }
    
    
    for(auto it = datamap.begin(); it != datamap.end(); it++){
       
        answer.push_back(it->second);
        
    }
    
    return answer;
}