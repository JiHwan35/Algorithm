#include <iostream>

using namespace std;

int main(void) {
    int n;
    string a;
    cin >> n;
    
    if(n%2 ==0)
        a = " is even";
    else
        a = " is odd";
    
    cout<<n<<a<<endl;
    return 0;
}