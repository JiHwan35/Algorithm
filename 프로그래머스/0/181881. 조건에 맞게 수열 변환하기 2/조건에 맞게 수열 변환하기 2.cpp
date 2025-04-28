#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    int n = 0;
    vector<int> x;
    
    while(x != arr)
    {
        x = arr;
       
        for(int i = 0; i<arr.size(); i++)
        {
            if(arr[i] >=50 && (arr[i]%2)==0)
                arr[i] /= 2;
            else if(arr[i]<50 && (arr[i]%2)==1)
                arr[i]= arr[i]*2 +1;
        }
        n++;
        
    }
    
    answer = n-1;

    return answer;
}