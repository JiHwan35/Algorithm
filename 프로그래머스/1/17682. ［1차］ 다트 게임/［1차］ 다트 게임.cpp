#include <string>
#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

int solution(string dartResult) {
    vector<int>score;
    int answer;
    
    int j = -1;
    for(int i = 0; i<dartResult.size(); i++){
        if(dartResult[i]>='0' && dartResult[i]<='9'){
            if(dartResult[i+1]=='0'){
                score.push_back(10);
                i++,j++; 
            }
            else{
                score.push_back(dartResult[i]-'0');
                j++;
            }
        }
        else if(dartResult[i] =='D'){
            
            score[j] = score[j]*score[j];
            
        }
        else if(dartResult[i] =='T'){
           score[j] = pow(score[j],3);
           
        } 
        else if(dartResult[i] == '#'){
           score[j] *=-1;
        } 
        else if(dartResult[i] == '*'){
            if(j == 0)
               score[j] *=2;
            else{
                score[j-1] *=2;
                score[j]*=2;
            }
        } 
      
    }
    
    answer = score[0]+score[1]+score[2];
    
    
    
    return answer;
}


