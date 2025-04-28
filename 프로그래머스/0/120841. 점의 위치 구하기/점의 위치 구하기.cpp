#include <string>
#include <vector>

using namespace std;

int solution(vector<int> dot) {
    int a = 0;
    
    if(dot[0]>0 && dot[1]>0) a = 1;
    else if(dot[0]<0 && dot[1]>0) a = 2;
    else if(dot[0]<0 && dot[1]<0) a = 3;
    else a = 4;
    
    return a;
}