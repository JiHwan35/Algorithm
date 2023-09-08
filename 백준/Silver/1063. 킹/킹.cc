#include<iostream>
#include<string>
#include<vector>
using namespace std;

void movepiece(string&, string&, string&);

int main()
{
    int n = 0;

    string king, stone;
    cin >> king >> stone >> n;

    string* move = new string[n];


    for (int i = 0; i < n; i++)
    {
        cin >> move[i];

        movepiece(king, stone, move[i]);
    }

    cout << king << "\n" << stone << endl;

}


void movepiece(string& p1, string& p2, string& m)
{
    string tmp1 = p1;
    string tmp2 = p2;
    if (m.compare("R") == 0)
    {
        tmp1[0]++;
        if (tmp1[0] == tmp2[0] && tmp1[1] == tmp2[1])
            tmp2[0]++;

        if (tmp1[0] != 73 && tmp2[0] != 73)
        {
            p1 = tmp1;
            p2 = tmp2;
        }
    }
    else if (m.compare("L") == 0)
    {
        tmp1[0]--;
        if (tmp1[0] == tmp2[0] && tmp1[1] == tmp2[1])
            tmp2[0]--;

        if (tmp1[0] != 64 && tmp2[0] != 64)
        {
            p1 = tmp1;
            p2 = tmp2;
        }
    }
    else if (m.compare("B") == 0)
    {
        tmp1[1]--;
        if (tmp1[0] == tmp2[0] && tmp1[1] == tmp2[1])
            tmp2[1]--;

        if (tmp1[1] != 48 && tmp2[1] != 48)
        {
            p1 = tmp1;
            p2 = tmp2;
        }
    }
    else if (m.compare("T") == 0)
    {
        tmp1[1]++;
        if (tmp1[0] == tmp2[0] && tmp1[1] == tmp2[1])
            tmp2[1]++;

        if (tmp1[1] != 57 && tmp2[1] != 57)
        {
            p1 = tmp1;
            p2 = tmp2;
        }
    }
    else if (m.compare("RT") == 0)
    {
        tmp1[0]++;
        tmp1[1]++;
        if (tmp1[0] == tmp2[0] && tmp1[1] == tmp2[1])
        {
            tmp2[0]++;
            tmp2[1]++;
        }

        if (tmp1[0] != 73 && tmp2[0] != 73)
        {
            if (tmp1[1] != 57 && tmp2[1] != 57)
            {
                p1 = tmp1;
                p2 = tmp2;
            }
        }
    }
    else if (m.compare("LT") == 0)
    {
        tmp1[0]--;
        tmp1[1]++;
        if (tmp1[0] == tmp2[0] && tmp1[1] == tmp2[1])
        {
            tmp2[0]--;
            tmp2[1]++;
        }

        if (tmp1[0] != 64 && tmp2[0] != 64)
        {
            if (tmp1[1] != 57 && tmp2[1] != 57)
            {
                p1 = tmp1;
                p2 = tmp2;
            }
        }
    }

    else if (m.compare("RB") == 0)
    {
        tmp1[0]++;
        tmp1[1]--;
        if (tmp1[0] == tmp2[0] && tmp1[1] == tmp2[1])
        {
            tmp2[0]++;
            tmp2[1]--;
        }

        if (tmp1[0] != 73 && tmp2[0] != 73)
        {
            if (tmp1[1] != 48 && tmp2[1] != 48)
            {
                p1 = tmp1;
                p2 = tmp2;
            }
        }
    }
    else if (m.compare("LB") == 0)
    {
        tmp1[0]--;
        tmp1[1]--;
        if (tmp1[0] == tmp2[0] && tmp1[1] == tmp2[1])
        {
            tmp2[0]--;
            tmp2[1]--;
        }

        if (tmp1[0] != 64 && tmp2[0] != 64)
        {
            if (tmp1[1] != 48 && tmp2[1] != 48)
            {
                p1 = tmp1;
                p2 = tmp2;
            }
        }
     }
  
}
