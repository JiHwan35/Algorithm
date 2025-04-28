#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    int tmp = 0;
    
    vector<int> v(100);

    for(char c : my_string)
    {
       
        if(c>=97)
            tmp = 97;
        else if(c>=65)
            tmp = 35;
        else
            tmp = -66;
        if (v[c - tmp] == 0){
            answer+= c;
            v[c-tmp]++;
            continue;
        }
    }
    
    
    
    return answer;
}