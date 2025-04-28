#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<int> date ={31,29,31,30,31,30,31,31,30,31,30,31};
    vector<string> week = {"FRI","SAT","SUN","MON","TUE","WED","THU"};
    int sum = 0;
    for(int i = 0; i<a-1; i++){
        sum+= date[i];
    }
    
    sum+=b-1;
        
    answer += week[sum%7];
    return answer;
}