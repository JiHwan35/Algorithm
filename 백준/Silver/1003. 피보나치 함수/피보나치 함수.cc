#include<iostream>
using namespace std;



int main()
{
    int T = 0; 
    cin >> T;

    int N = 0;
    int zero[41] = { 1, 0 };
    int one[41] = { 0 ,1 };

    for (int i = 0; i < T; i++)
    {
        cin >> N;
        if (N > 1)
        {
            for (int j = 2; j <= N; j++)
            {
                zero[j] = one[j - 1];
                one[j] = one[j - 1] + zero[j - 1];
            }
        }

        cout << zero[N] << " " << one[N] << endl;
    }

	return 0;
}

