#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int test;
int n, a[MAXN], f[MAXN], m[MAXN];

void CinTest(int vanhoang)
{
	if (vanhoang > 0) cin >> test;
	else test = 1;
}

void HoangDepTraiVaiCut()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	f[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		f[i] = f[i - 1] + a[i];
	}
	m[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		if (f[m[i - 1]] > f[i]) m[i] = i;
		else m[i] = m[i - 1];
	}

	int x = 1, y = 0;
	int maxx = 0;
	for (int j = 1; j <= n; j++)
	{
		if (f[j] - f[m[j - 1]] > maxx)
		{
			maxx = f[j] - f[m[j - 1]];
			y = j;
			x = m[j - 1] + 1;
		}
	}
	cout << x << ' ' << y - x + 1 << '\n';
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
