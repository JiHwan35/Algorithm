#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    string num = "";
    
    for(int i = 0; i<numbers.size(); )
    {
        if(numbers[i] == 'z'){
            num+= '0';        
            i+=4;
        }
        else if(numbers[i] == 'o'){
            num+= '1';        
            i+=3;
        }
         else if(numbers[i] == 't'){
            if(numbers[i+1] == 'w'){   
                num+= '2';        
                i+=3;
            }
             else{
                num+= '3';        
                i+=5;    
             }
        }
         else if(numbers[i] == 'f'){
          if(numbers[i+1] == 'o'){   
                num+= '4';        
                i+=4;
            }
             else{
                num+= '5';        
                i+=4;    
             }
        }
        else if(numbers[i] == 's'){
          if(numbers[i+1] == 'i'){   
                num+= '6';        
                i+=3;
            }
             else{
                num+= '7';        
                i+=5;    
             }
        }
        else if(numbers[i] == 'e'){
            num+= '8';        
            i+=5;
        }
          else if(numbers[i] == 'n'){
            num+= '9';        
            i+=4;
        }   
    }
    
   
    answer = stoll(num);
    return answer;
}