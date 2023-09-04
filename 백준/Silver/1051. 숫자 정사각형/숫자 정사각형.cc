#include<iostream>
#include<deque>
using namespace std;

int main()
 {
      int N = 0, M = 0;
    int max = 1;
    int len = 0;
    cin >> N >> M;

    if (N > M)
        len = M;
    else
        len = N;

    int** rec = new int* [N];
    string tmp;

    for (int i = 0; i < N; i++)
        rec[i] = new int[M];

    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        for (int j = 0; j < M; j++)
            rec[i][j] = tmp[j]-48;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            for (int k = 1; k < len; k++)
            {
                if (i + k < N && j + k < M)
                    if (rec[i][j] == rec[i][j + k])
                        if (rec[i][j] == rec[i + k][j])
                            if (rec[i][j] == rec[i + k][j + k])
                                if ((k + 1) * (k + 1) > max)
                                    max = (k + 1) * (k + 1);
            }

        }
    }
    cout << max << endl;
}

    

