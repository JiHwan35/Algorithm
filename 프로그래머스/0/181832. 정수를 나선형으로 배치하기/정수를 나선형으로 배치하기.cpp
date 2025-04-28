#include <string>
#include <vector>
#include <math.h>
using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n,vector<int>(n,0));
    int mode = 0;
    
    
     int a = 0, b = 0;
    for(int i = 0; i<pow(n,2); i++)
    {
        answer[a][b] = i+1;
        
        if(mode == 0){
             if(b == n-1)  
                mode = 1;
             else if(answer[a][b+1] != 0)
                 mode = 1;
        }
        else if(mode == 1){
             if(a == n-1)
                 mode  = 2;
             else if(answer[a+1][b] != 0)
                 mode = 2;
        }
        else if(mode == 2){
            if( b == 0 )
                mode = 3;
            else if(answer[a][b-1] != 0 )
                mode =3;
        }
        else{ 
            if(answer[a-1][b] != 0)
                mode = 0;
        }
        
        
        
        
        if(mode == 0) 
            b++;
        else if(mode == 1)
            a++;
        else if(mode == 2)
            b--;
        else 
            a--;
        
    
    }
    
    
    return answer;
}