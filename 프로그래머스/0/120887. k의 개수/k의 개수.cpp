#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    string tmp = "";
    
    for(int a = i; a<=j; a++)
    {
        tmp += to_string(a);
    }
    
    for(auto  c : tmp)
    {
        if( (c-48) == k)
            answer++;
    }
    
    return answer;
}