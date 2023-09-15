#include<iostream>
#include<cstring>
using namespace std;

bool arr[51][51];
bool isvisited[51][51];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };
int T = 0, m = 0, n = 0, k = 0;

bool dfs(int , int);

int main()
{
	cin >> T;
	
	for (int t = 0; t < T; t++)
	{
        memset(arr, 0, sizeof(arr));
	    memset(isvisited, 0, sizeof(isvisited));
		int worm = 0;
		cin >> m >> n >> k;
		for (int i = 0; i < k; i++)
		{
			int x = 0, y = 0;
			cin >> x >> y;
			arr[y][x] = 1;
		}
		
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (arr[i][j] == 1 && isvisited[i][j] == 0)
				{
					if (dfs(j, i) == 1)
						worm++;
				}
			}
		}
		cout << worm << endl;
	}
}

bool dfs(int x, int y) 
{
	int addX = 0, addY = 0;

	if (isvisited[y][x] == 1)
		return false;
	else
		isvisited[y][x] = 1;
	
	for (int i = 0; i < 4; i++)
	{
		addX = x + dx[i];
		addY = y + dy[i];

		if (addX >= 0 && addY >= 0 && addX < m && addY < n && arr[addY][addX] == 1)
		{
				dfs(addX, addY);
		}
	}
	return true;
}