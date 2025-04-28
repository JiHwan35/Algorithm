#include <string>
#include <vector>

using namespace std;

int solution(int hp) {
    int answer = 0;
    int ant = 0;
    
    ant = hp/5;
    hp = hp%5;
    
    ant += hp/3;
    hp = hp%3;
    
    ant += hp;
    
    answer = ant;
    
    
    return answer;
}