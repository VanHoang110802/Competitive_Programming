#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN];
int n, MAX = -1e18;

void Nhap()
{
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
}

void XuLy()
{
	int i = 1, j = 2;
	int cnt = 1, cnt_max = 1;
	while (i <= n && j <= n)
	{
		if (a[i] != a[j])
		{
			cnt = 1;
			i = j;
			j++;
		}
		else
		{
			cnt++;
			j++;
		}
		cnt_max = max(cnt_max, cnt);
		if (a[i] >= MAX) MAX = a[i];
	}
	cout << cnt_max << ' ' << MAX << '\n';
}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	Nhap();
	XuLy();
	return 0;
}
