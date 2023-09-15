#include<iostream>
#include<vector>
using namespace std;

int main(void) {


    int n = 0;
    cin >> n;

    vector<int> v;
    vector<int> lu;
    vector<int>::iterator it = lu.begin();


    for (int i = 0; i < n; i++)
    {
        int left = 0;
        cin >> left;

        v.push_back(left);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        lu.insert(it + v[i], i + 1);
        it = lu.begin();
    }
    for (int i = 0; i < n; i++)
    {
        cout << lu[i] << " ";
    }
    cout << endl;
}