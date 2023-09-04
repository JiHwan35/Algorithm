#include<iostream>
#include<deque>
using namespace std;

int main()
{
    int N = 0, M = 0;
    cin >> N >> M;

    int index = 0;
    int calc = 0;
    int* a = new int[M];

    for (int i = 0; i < M; i++)
    {
        cin >> a[i];
    }

    deque<int> dq;

    for (int i = 0; i < N; i++)
    {
        dq.push_back(i+1);
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < dq.size(); j++)
        {
            if (a[i] == dq[j])
            {
                index = j;
                break;
            }
        }
        if ((dq.size() / 2) + 1 >= index + 1)
        {
            while (a[i] != dq.front())
            {
                dq.push_back(dq.front());
                dq.pop_front();
                index--;
                calc++;
            }
        }
        else
        {
            while (a[i] != dq.front())
            {
                dq.push_front(dq.back());
                dq.pop_back();
                index++;
                calc++;
            }
        }
        dq.pop_front();
    }

    cout << calc << endl;
}
