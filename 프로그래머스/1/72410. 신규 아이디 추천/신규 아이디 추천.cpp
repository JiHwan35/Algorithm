#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string new_id) {
    
    string answer = "";
    
    for(int i = 0; i<new_id.size(); i++){
        char &c = new_id[i];
    
        if(c>='A' && c<= 'Z' )
            c = tolower(c);
    }

    for(int i = 0; i<new_id.size(); i++){
        char c = new_id[i];
        if( ((c>='0'&&c<='9')||(c>='a'&&c<='z')||c=='-'||c=='.'||c=='_') == false){
            new_id.erase(i,1);
            i--;
        }
    }
    
    for(int i = 0; i<new_id.size(); i++){
        char c = new_id[i];
        if(c =='.' && i>0){
            if(new_id[i-1] == '.'){
                new_id.erase(i,1);
                i--;
            }
        }
    
    }
   
    for(int i = 0; i<new_id.size(); i++){
        char c = new_id[i];
        if(c == '.' &&(i==0 || i == new_id.size()-1) ){
            new_id.erase(i,1);
            i--;
        }
       
    }
    
    
    if(new_id.empty())
        new_id+='a';
    

    
    if(new_id.size()>15){
        new_id = new_id.substr(0,15);
        if(new_id[14] == '.')
            new_id.pop_back();
    }
   
    
    while(new_id.size()<=2){
        char c = new_id.back();
        new_id+=c;
    }
  
  

        
    answer+=new_id;
            
    
    return answer;
}