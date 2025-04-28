#include <string>
#include <vector>
#include <iostream>
using namespace std;

string tobinary(int n,int a){
    string tmp = "";
    
    while(1)
    {
        if(n%2 == 0)
            tmp.insert(0," ");
        else
            tmp.insert(0,"#");
        
        n = n/2;
        
        if(tmp.size() == a)
            break;
    }
    
    return tmp;
    
}


vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for(int i = 0; i<n; i++){
        string s1 = tobinary(arr1[i],n);
        string s2 = tobinary(arr2[i],n);
        string s3 ="";
        
        for(int j = 0; j<n; j++){
            if(s1[j] == ' ' && s2[j] == ' ')
                s3+= ' ';
            else
                s3+='#';
        }
        
        answer.push_back(s3);
    }
    
    return answer;
}