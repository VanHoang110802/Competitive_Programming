#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int test;
int m, n, k, a[101][101], f[101][101] = { 0 }, S_max = -99999999, S, i_min, i_max, j_min, j_max;

void CinTest(int vanhoang)
{
	if (vanhoang > 0) cin >> test;
	else test = 1;
}

void taof()
{
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
		{
			f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + a[i][j];
		}
}

void HoangDepTraiVaiCut()
{
	cin >> m >> n;
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	taof();
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
		{
			int u = i + 2;
			int v = j + 2;
			if (u <= m && v <= n)
			{
				S = f[u][v] - f[i - 1][v] - f[u][j - 1] + f[i - 1][j - 1];
				if (S > S_max)
				{
					S_max = S;
					i_min = i;
					i_max = u;
					j_min = j;
					j_max = v;
				}
			}
		}
	cout << S_max << endl;
	cout << i_min << ' ' << j_min << '\n';
}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
	while (test--)
	{
		HoangDepTraiVaiCut();
	}
	return 0;
}
