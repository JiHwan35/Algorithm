#include<iostream>
using namespace std;

int main()
{
	int n = 0, l = 0;

	cin >> n >> l;
	int a = -1, b = 0;

	for (int j = l; j <= 100; j++)
	{
		int t = ((j * j) - j) / 2;
		if ((n - t) % j == 0 && (n - t) / j > -1)
		{
			a = (n - t)/j;
			b = j;
			break;
		}

	}

	if (a < 0)
		cout << -1 << endl;
	else {
		for (int i = 0; i < b; i++)
		{
			cout << a + i << " ";
		}

		cout << endl;
	}
}

