#include <string>
#include <vector>

using namespace std;

string solution(string a, string b) {
    string answer = "";
    string tmp = "";
    int n = 0;
    int k = a.size();
    if(a.size()>b.size()){
        n = a.size() - b.size();
        tmp.append(n,'0');
        tmp+=b;
        b = tmp;
    }
    else{
        n = b.size() - a.size();
        tmp.append(n,'0');
        tmp+=a;
        a= tmp;
    }
    
    
    for(int i = a.size()-1; i>=0; i--)
    {
        if(a[i]+b[i]-96>=10){
            if(i == 0){
                string tmp2 = to_string(a[i]+b[i] -106);
                answer.insert(0,tmp2);
                answer.insert(0,"1");
            }
            else{
                a[i-1]++;
                string tmp2 = to_string(a[i]+b[i] -106);
                answer.insert(0,tmp2);
            }
        }
        else{
            string tmp2 = to_string(a[i]+b[i]-96);
            answer.insert(0,tmp2);
        }
    }
    
    
    
    return answer;
}