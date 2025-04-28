#include <vector>
#include <iostream>
#include <math.h>
using namespace std;

bool isprime(int n){
    int sum = 0;
    int rn = sqrt(n);
    for(int i = 2; i<=rn; i++){
        if(n%i == 0)
            sum++;
    }
    
    if(sum == 0)
        return true;
    else
        return false;
}


int solution(vector<int> nums) {
    int answer = 0;

    for(int i = 0; i<nums.size()-2; i++)
        for(int j = i+1; j<nums.size()-1; j++)
            for(int k = j+1; k<nums.size(); k++)
                if(isprime(nums[i]+nums[j]+nums[k]))
                    answer++;
    
    

    return answer;
}