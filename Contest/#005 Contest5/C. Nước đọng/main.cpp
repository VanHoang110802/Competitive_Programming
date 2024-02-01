#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int test;
int n;
int a[MAXN], b[MAXN], trai[MAXN], phai[MAXN];

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
	trai[1] = a[1];
	for (int i = 2; i <= n; ++i)
	{
		if (a[i] > trai[i - 1])
		{
			trai[i] = a[i];
		}
		else
		{
			trai[i] = trai[i - 1];
		}
	}
	phai[n] = a[n];
	for (int i = n - 1; i >= 1; --i)
	{
		if (a[i] > phai[i + 1])
		{
			phai[i] = a[i];
		}
		else
		{
			phai[i] = phai[i + 1];
		}
	}
	for (int i = 2; i <= n - 1; ++i)
	{
		if (min(trai[i - 1], phai[i + 1]) > a[i])
		{
			b[i] = min(trai[i - 1], phai[i + 1]) - a[i];
		}
		else
		{
			b[i] = 0;
		}
	}
	int t = 0;
	for (int i = 2; i <= n - 1; ++i)
	{
		t += b[i];
	}
	cout << t << '\n';
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
