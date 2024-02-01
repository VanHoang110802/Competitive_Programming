#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int test;
int n, k, a[1005][1005], f[1005][1005];

void CinTest(int vanhoang)
{
	if (vanhoang > 0) cin >> test;
	else test = 1;
}

void taof()
{
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + a[i][j];
}

void HoangDepTraiVaiCut()
{
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++) cin >> a[i][j];

	}
	taof();
	int maxx = 0, s = 0, x1, x2, y1, y2;
	for (int x1 = 1; x1 <= n - k + 1; x1++)
	{
		for (int y1 = 1; y1 <= n - k + 1; y1++)
		{
			x2 = x1 + k - 1;
			y2 = y1 + k - 1;
			s = f[x2][y2] - f[x1 - 1][y2] - f[x2][y1 - 1] + f[x1 - 1][y1 - 1];
			if (maxx < s) maxx = s;
		}
	}
	cout << maxx << '\n';
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
