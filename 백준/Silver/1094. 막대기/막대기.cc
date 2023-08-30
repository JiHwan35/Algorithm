#include<iostream>

using namespace std;

int main()
{
    int X = 0, result = 0;
    cin >> X;

    for (int i = 0; i <= 6; i++)
    {
        if (X == 1)
        {
            result++;
            break;
        }
        else if (X % 2) {
            result++;
            X = X / 2;
        }
        else
        {
            X = X / 2;
        }
    }

    cout << result << endl;

    return 0;
}