#include <iostream>
using namespace std;

int main()
{
    int T = 0;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int n = 0, m = 0;
        int result = 1;

        cin >> n >> m;
            
        for (int i = m-n, j = 1; i < m; i++,j++)
        {
            result *= i+1;   
            result /= j;
        }

        cout << result << endl;
    }

    return 0;
}