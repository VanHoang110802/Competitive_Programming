#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int test;
int n;
int a[MAXN];
int minn[MAXN], maxx[MAXN];

void CinTest(int vanhoang)
{
	if (vanhoang > 0) cin >> test;
	else test = 1;
}

void tao_min()
{
	minn[1] = a[1];
	for (int i = 2; i <= n; ++i)
	{
		minn[i] = min(minn[i - 1], a[i]);
	}
}

void tao_max()
{
	maxx[n] = a[n];
	for (int i = n - 1; i >= 1; --i)
	{
		maxx[i] = max(maxx[i + 1], a[i]);
	}
}

void HoangDepTraiVaiCut()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	tao_min();
	tao_max();
	int ans = 0;
	for (int i = 2; i <= n; ++i)
	{
		ans = max(ans, maxx[i] - minn[i - 1]);
	}
	cout << ans << '\n';
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
