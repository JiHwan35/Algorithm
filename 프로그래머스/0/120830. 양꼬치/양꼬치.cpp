#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {

    if(n>=10) 
        k -= n/10;
    
    return 12000*n + 2000*k;
 
}