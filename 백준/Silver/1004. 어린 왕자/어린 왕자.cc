#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int T = 0;
    cin >> T;

   
    for (int i = 0; i < T; i++)
    {
        int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        
        int N = 0;
        cin >> N;
        int interstellar = 0;

        for (int j = 0; j < N; j++)
        {
            int cx = 0, cy = 0, r = 0;
            cin >> cx >> cy >> r;

            int d1 = 0, d2 = 0;

            d1 = (cx - x1) * (cx - x1) + (cy - y1) * (cy - y1);
            d2 = (cx - x2) * (cx - x2) + (cy - y2) * (cy - y2);

            if (d1 < (r * r) || d2 < (r * r))
            {
                if (d1 < (r * r) && d2 < (r * r))
                {
                }
                else
                    interstellar++;
            }
        }

        cout << interstellar << endl;
    }

}

