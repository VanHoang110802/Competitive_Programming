#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int test;
int m, n, a[1002][1002], s, f[1002][1002];

void CinTest(int vanhoang)
{
	if (vanhoang > 0) cin >> test;
	else test = 1;
}

void tinhf()
{
	for (int i = 0; i <= m; i++) f[i][0] = 0;
	for (int j = 0; j <= n; j++) f[0][j] = 0;
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + a[i][j];
		}
	}

}

int tinhtong(int x1, int y1, int x2, int y2)
{
	long long s;
	//cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
	s = f[x2][y2] - f[x1 - 1][y2] - f[x2][y1 - 1] + f[x1 - 1][y1 - 1];
	return s;
}

void HoangDepTraiVaiCut()
{
	cin >> m >> n;
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];
	}
	tinhf();
	int k, x1, y1, x2, y2, res;
	cin >> k;
	//cout<<k<<endl;
	for (int i = 1; i <= k; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		res = tinhtong(x1, y1, x2, y2);
		cout << res << '\n';
	}
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
