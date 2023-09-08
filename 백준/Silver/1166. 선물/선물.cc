#include<iostream>
using namespace std;

int main()
{
	int n = 0, l = 0, w = 0, h = 0;
	double a = 0;

	cin >> n >> l >> w >> h;

	double low = 0,high = 1000000000,mid = 0;

	for (int i = 0; i < 10000; i++)
	{
		mid = (low + high) / 2;
		
		if (n <= ((long long)(l / mid) * (long long)(w / mid) * (long long)(h / mid)))
			low = mid;
		else
			high = mid;
	}

	cout << fixed;
        cout.precision(9);
	
	cout << low << endl;


}
