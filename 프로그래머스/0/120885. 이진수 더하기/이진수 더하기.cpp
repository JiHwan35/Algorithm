#include <string>
#include <vector>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    string bi = "";
    unsigned int a = 0;
    
    a = stoi(bin1) +stoi(bin2);
    bi = to_string(a);
    
    if(bi[0] > '1')
        bi.insert(bi.begin(),'0');
    
    for(int i = bi.size(); i>0; i--)
    {
        if(bi[i]>'1')
        {
            bi[i] -= 2;
            bi[i-1]++;
        }
    }
    if(bi[0] > '1'){
        bi[0] -= 2;
        bi.insert(bi.begin(),'1');
    }
    answer = bi;
    
    return answer;
}