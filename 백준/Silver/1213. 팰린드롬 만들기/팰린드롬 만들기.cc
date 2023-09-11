#include<iostream>
using namespace std;

int main()
{

	string hs, pd;
	cin >> hs;

	int tmp[26] = { 0, };
	int odd = 0;
	int oddnum = 0;

	for (int i = 0; i < hs.size(); i++)
	{
		tmp[hs[i] - 65]++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (tmp[i] % 2 == 1)
		{
			odd++;
			oddnum = i;
		}
	}

	if (odd > 1)
	{
		cout << "I'm Sorry Hansoo" << endl;
		return 0;
	}

	for (int i = 0; i < 26; i++)
	{
		if (tmp[i] > 1)
		{
			for (int j = 0; j < (tmp[i] / 2); j++)
				pd.push_back(i + 65);
		}
	}
	if (odd == 1)
	{
		pd.push_back(oddnum + 65);
	}
	for (int i = 26; i > 0; i--)
	{
		if (tmp[i - 1] > 1)
		{
			for (int j = 0; j < (tmp[i - 1] / 2); j++)
				pd.push_back(i + 64);
		}
	}

	cout << pd << endl;

}