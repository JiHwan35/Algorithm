#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    string num1 = "",num2 = "",op = "";
    
    for(auto c : my_string)
    {
        if(c >='0' && c<= '9')
            num1+=c;
        else if( c == '+'){
            if(op == ""){
                answer+=stoi(num1);
                num1 = "";
            }
            else{
                answer-=stoi(num1);
                num1 = "";
                op ="";
            }
        }
        else if( c== '-')
        {
           if(op == ""){
                op += "-";
                answer+=stoi(num1);
                num1 = "";
            }
            else{
                op += "-";
                answer-=stoi(num1);
                num1 = "";
            }
        }
    }

     if(op == "-")
            answer-=stoi(num1);
         else{
               answer+=stoi(num1);
         }
         
    return answer;
}