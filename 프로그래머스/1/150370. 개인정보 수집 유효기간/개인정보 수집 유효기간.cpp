#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

int datetoint(string); //string 점 없애서 int로 저장
int datecal(int n); // 날짜 초과 계산

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    
    vector<int> answer;
    map<char,int>p;
    
    int todayi = datetoint(today);
    todayi++;
    todayi = datecal(todayi); 
    
    //cout<<todayi<<endl;
    
    map<char,int> t;
    
    
    for(string s: terms){
        char key = s[0];
        int month = stoi(s.substr(2));
        
        p[key] = month;
    }
    
    int idx = 1;
    
    for(string s : privacies){
        char key = s.back();
        int month = p[key];
        int date = datetoint(s.substr(0,10));
        int n = 0;
        
        
        if( (month % 12) == 0  ){
            n+=(month/12)*10000;
        }
        else if(month >12){
            n+= (month/12)*10000;
            n+= (month % 12)*100;
        }
        else{
            n+=(month*100);
        }
        
            
        date += n;
       
        
        date = datecal(date);
        
        if(date<todayi){
            answer.push_back(idx);
        }
        
        idx++;
        
    }
    
    
    
    
    
    
    
    
    
    return answer;
}

int datetoint(string s){
    
    string s1 = s;
    int n = 0;
    
    s1.erase(4,1);
    s1.erase(6,1);
    
    
    n = stoi(s1);
    
  
    return n;    
}

int datecal(int n){
    int n1 = n;
    int day = n1%100;
    
    if( day  > 28 ){
        n1 = n1+72;
    }
    
    if((n1%10000) >1300 ){
        n1 = n1+8800;
    }
   
    return n1;
}

