#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = false;
    int p = 0,y = 0;
    
    for(auto c : s){
        if(c == 'p' || c == 'P')
            p++;
        else if(c == 'y' || c == 'Y')
            y++;
    }
    
    if(p == y)
        return true;
    
    cout << "Hello Cpp" << endl;

    return answer;
}