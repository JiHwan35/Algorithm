#include<iostream>
using namespace std;

int main()
{
	long long int x = 0, y = 0, z = 0;
	long long int low = 1, high = 1000000000,mid = 0;
	long long int result = -1, cnt = 0;
	
	cin >> x >> y;
	
	z = (y * 100) / x;
	cnt = z;

	if (z >= 99)
	{
		result = -1;
	}
	else
	{
        while (low <= high)
		{ 
			mid = (low + high) / 2;
  			z = ((y + mid) * 100) / (x + mid);
			
			if (z == cnt)
				low = mid + 1;
			else
				high = mid - 1;
		}
		result = low;
	}

	cout << result << endl;
}