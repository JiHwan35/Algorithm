#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool compareword(string, string);

int main()
{
	int N = 0;
	string temp;
	cin >> N;
	vector<string> v;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end(),compareword);


	for (int i = 0; i < v.size(); i++)
	{
		if (i > 0 && v[i] == v[i - 1])
			continue;
		cout << v[i] << endl;
	}
	
	return 0;
}

bool compareword(string a, string b)
{
	if (a.size() == b.size())
	{
		return a < b;
	}
	else
		return a.size() < b.size();

}
