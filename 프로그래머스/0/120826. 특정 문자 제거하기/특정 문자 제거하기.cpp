#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    
    while(my_string.find(letter) != string ::npos){
        my_string.erase(my_string.find(letter),1);
    }
    answer = my_string;
    
    return answer;
}