#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;

    for(int i = 0; i<str.length(); i++)
    {
        if(str[i]>='A'&&str[i]<='Z'){
            str[i] = str[i]+32;
        }
        else
            str[i] = str[i]-32;
    }
    
    cout<<str<<endl;
    return 0;
}