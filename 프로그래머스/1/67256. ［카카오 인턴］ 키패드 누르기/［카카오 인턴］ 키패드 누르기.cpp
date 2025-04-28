#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    
    vector<vector<int>> pad = {{1,2,3},{4,5,6},{7,8,9},{11,0,12}};
    
    int lastlx = 0, lastly = 3;
    int lastrx = 2, lastry = 3;
    int numx = 0,numy = 0;
    int distancel = 0, distancer = 0;
        
    for(int i = 0; i<numbers.size(); i++){
        if(numbers[i] == 1 ||numbers[i] == 4 ||numbers[i] == 7 ){
            answer+="L";
            for(int k = 0; k<3; k++){
                if(numbers[i] == pad[k][0]){
                    lastlx = 0;
                    lastly = k;
                }
                    
            }
        }
        else if(numbers[i] == 3 ||numbers[i] == 6 ||numbers[i] == 9 ){
            answer+="R";
            for(int k = 0; k<3; k++){
                if(numbers[i] == pad[k][2]){
                    lastrx = 2;
                    lastry = k;
                }     
            }
        }
        else{
            for(int j = 0; j<4; j++){
                    if(pad[j][1] == numbers[i]){
                        numx = 1; numy = j;
                        distancel = abs(numx-lastlx) + abs(numy - lastly);
                        distancer = abs(numx-lastrx) + abs(numy - lastry);
                        if(distancel<distancer){
                            answer+= "L";
                            lastlx = 1;
                            lastly = j;
                        }
                        else if(distancel>distancer){
                            answer+= "R";
                            lastrx = 1;
                            lastry = j;
                        }
                        else{
                            if(hand == "left"){
                                answer+= "L";
                                lastlx = 1;
                                lastly = j;                           
                            }
                            else{
                                answer+= "R";
                                lastrx = 1;
                                lastry = j;
                            }
                        }
                        
                    }
                    
        }
        
       
    }
    
    
    }
    return answer;
}