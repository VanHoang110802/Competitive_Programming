#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int test;
int m, n, k, a[1005][1005], f[1005][1005];

void CinTest(int vanhoang)
{
	if (vanhoang > 0) cin >> test;
	else test = 1;
}

void taof()
{
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
			f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + a[i][j];
}

void HoangDepTraiVaiCut()
{
	char x;
	cin >> m >> n >> k;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> x;
			//  cout<<x;
			if (x == '.') a[i][j] = 0;
			else a[i][j] = 1;
		}
	}
	taof();
	long long maxx = 0, s = 0;
	int x1, x2, y1, y2;
	k = k - 2;
	//cout<<k<<endl;
	for (int x1 = 2; x1 <= m - k; x1++)
	{
		for (int y1 = 2; y1 <= n - k; y1++)
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
