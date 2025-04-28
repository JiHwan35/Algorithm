#include <string>
#include <vector>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    vector<int> con (2);
    polynomial += " ";
    string tmp = "";
    
    for(int i = 0; i<polynomial.size(); i++)
    {
        if(polynomial[i] == ' ')
        {
            if(polynomial[i-1] == 'x')
            {   
                if(tmp == "")
                    tmp+="1";
                con[0] += stoi(tmp);
            }
            else if(polynomial[i-1] >='0' && polynomial[i-1] <='9')
                con[1] += stoi(tmp);
            
            tmp = "";
        }
        else if(polynomial[i] != '+'  && polynomial[i] != 'x')
            tmp += polynomial[i];
        
    }
    
  
    if(con[0] != 0){
        if(con[0] != 1)
            answer += to_string(con[0]);
        answer += "x";
    }
    if(con[0] != 0 && con[1] != 0)
        answer += " + ";
    
    if(con[1] != 0)
        answer += to_string(con[1]);
    
    return answer;
}