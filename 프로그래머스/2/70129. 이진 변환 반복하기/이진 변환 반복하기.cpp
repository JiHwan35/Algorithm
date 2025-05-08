#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int sum = 0;
    int num = 0;
    
    while(s != "1"){
        string tmp = "";

        for(char c :  s){
            if(c == '1')
                tmp+=c;
            else
                sum++;
        }
               
        int n = tmp.size();
        string bn = "";
        
        while(n>0){
            if( n%2 == 0 )
                bn ='0'+bn;
            else
                bn = '1'+bn;

            n/=2;
        }

        s = bn;
        num++;
    }
        answer.push_back(num);
        answer.push_back(sum);

        return answer;
    }