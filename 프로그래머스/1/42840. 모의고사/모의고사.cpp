#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> result;
    vector<int> a ={1,2,3,4,5};
    vector<int> b ={2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> c ={3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    vector<int> f(3);
    
    
    for(int i = 0; i<answers.size(); i++){
        if(answers[i] == a[i%5])
            f[0]++;
        if(answers[i] == b[i%8])
            f[1]++;
        if(answers[i] == c[i%10])
            f[2]++;
    }
    
    int max_score = *max_element(f.begin(),f.end());
    
    for(int i = 0; i<3; i++){
        if(f[i]==max_score)
            result.push_back(i+1);
    }
    
    
    return result;
}