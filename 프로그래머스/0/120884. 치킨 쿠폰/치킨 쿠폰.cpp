#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = -1;
    int coupon = 0;
    int sum = 0;
    
    while(chicken>=10)
    {
        coupon += (chicken%10);
        chicken/=10;
        sum += chicken;
    }
    
    coupon+=chicken;
    
    if(((coupon/10) + (coupon%10)) >= 10)
        sum++;
    
    sum+= coupon/10;
    
    
    return sum;
}