using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long int sum = 0;
    for(int i = 1; i<=count; i++){
        sum+=i*price;
    }
    
    if(money>=sum )
        answer = 0;
    else
        answer = sum-money;
            
    return answer;
}