#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> isdivided(int a, int b)
{
    int m = max(a,b);
    
    for(int i = 2; i<=m; i++)
    {
        if(a%i == 0 && b%i == 0){            
            a /= i;
            b /= i;
            i--;
            continue;
        }
    }
    
    
    return vector<int>{a,b};
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    
    vector<int> sum;
    
    sum.push_back(numer1 * denom2 + numer2 * denom1);
    sum.push_back(denom1 * denom2);
    
    
    answer = isdivided(sum[0],sum[1]);
    
    
    return answer;
}