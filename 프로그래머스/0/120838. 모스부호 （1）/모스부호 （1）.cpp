#include <string>
#include <vector>

using namespace std;

string solution(string letter) {
    string answer = "";
    string tmp = "";
    string morse[30]=  { 
    ".-","-...","-.-.","-..",".","..-.",
    "--.","....","..",".---","-.-",".-..",
    "--","-.","---",".--.","--.-",".-.",
    "...","-","..-","...-",".--","-..-",
    "-.--","--.." };
    
    
    for(int i = 0; i<letter.size(); i++)
    {
      if(letter[i] == ' ')
      {
          for(int j = 0; j<27; j++)
          {
              if(morse[j] == tmp)
              {
                  answer += j+97;
              }
          }
          tmp = "";
      }  
      else if(i == letter.size()-1)
      {
          tmp+=letter[i];
          for(int j = 0; j<27; j++)
          {
              if(morse[j] == tmp)
              {
                  answer += j+97;
              }
          }
          tmp = "";
      } 
      else
      {
          tmp+=letter[i];
      }
        
    
    }
    
  
    
    return answer;
}