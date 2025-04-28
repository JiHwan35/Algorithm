#include <string>
#include <vector>
#include <cctype>
#include <algorithm> 
using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> v;
    
    for(int i =0; i<strArr.size(); i++){
        if(i%2==0) {
            transform(strArr[i].begin(),strArr[i].end(),strArr[i].begin(),::tolower);
            v.push_back(strArr[i]);
        }
        else {
            transform(strArr[i].begin(),strArr[i].end(),strArr[i].begin(),::toupper);
            v.push_back(strArr[i]);
        }
    }
    
    v = strArr;
    return v;
}