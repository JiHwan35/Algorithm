#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    vector <double> icl;
    
    icl.push_back((double(dots[0][1]) - double(dots[1][1]) )/( double(dots[0][0]) - double(dots[1][0])));
    icl.push_back((double(dots[2][1]) - double(dots[3][1]) )/( double(dots[2][0]) - double(dots[3][0])));
    if(icl[0] == icl[1])
        answer = 1;

    icl.clear();
    
    icl.push_back((double(dots[0][1]) - double(dots[2][1]) )/( double(dots[0][0]) - double(dots[2][0])));
    icl.push_back((double(dots[1][1]) - double(dots[3][1]) )/( double(dots[1][0]) - double(dots[3][0])));
    if(icl[0] == icl[1])
        answer = 1;
    
    icl.clear();
    
    icl.push_back((double(dots[0][1]) - double(dots[3][1]) )/( double(dots[0][0]) - double(dots[3][0])));
    icl.push_back((double(dots[1][1]) - double(dots[2][1]) )/( double(dots[1][0]) - double(dots[2][0])));
    if(icl[0] == icl[1])
        answer = 1;
    
    

    
    return answer;
}