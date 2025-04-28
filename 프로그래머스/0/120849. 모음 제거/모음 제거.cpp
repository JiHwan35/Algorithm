#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    string vowel = "aeiou";
    for(int i = 0; i<vowel.size(); i++){
        if(my_string.find(vowel[i]) != string :: npos){
            my_string.erase(my_string.find(vowel[i]),1);
            i--;
            continue;
        }
    }
    answer = my_string;
    return answer;
}