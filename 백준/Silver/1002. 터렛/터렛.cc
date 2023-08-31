#include<iostream>
using namespace std;

int main()
{
	int N = 0;
	int result = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
		int r1 = 0, r2 = 0;

		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		int d1 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2); //두 점사이의 거리
		int d2 = (r1 + r2) * (r1 + r2);
		int d3 = (r1 - r2) * (r1 - r2);
		if (x1 == x2 && y1 == y2)
		{
			if (r1 == r2)
			{
				if (r1 == 0)
					result = 1;
				else
					result = -1;
			}
			else
				result = 0;
		}
		else if (d1 == d2 || d1 == d3)
			result = 1;
		else if (d1 < d2 && d1 > d3)
			result = 2;
		else
			result = 0;

		cout << result << endl;
	}
	return 0;
}