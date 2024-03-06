#include <iostream>
#include <map>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN];
int n, MAX = -1e18;
map<int, int> MAP;

void Nhap()
{
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		MAP[a[i]]++;
		MAX = max(MAX, a[i]);
	}
}

void XuLy()
{
	cout << MAP[MAX] << ' ' << MAX << '\n';
}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	Nhap();
	XuLy();
	return 0;
}
