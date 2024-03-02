#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

#define int long long
#define se second
#define fi first
const int MAXN = 2 * 1e6 + 7;
int a[MAXN], prefix[MAXN];
int test;

void CinTest(int vanhoang)
{
	if (vanhoang > 0) cin >> test;
	else test = 1;
}

void HoangDepTraiVaiCut()
{
    int n; cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        prefix[i] = prefix[i - 1] + a[i];
    }
    int nn = 1e18, ln = -1e18, MIN = -1e18;
    for(int i = 1; i <= n; ++i)
    {
        if (i < n) MIN = max(MIN, prefix[i] - nn);
        if (i > 1) MIN = max(MIN, prefix[n] - prefix[i - 1] + ln);
        ln = max(ln, prefix[i - 1]);
        nn = min(nn, prefix[i]);
    }
    cout << MIN << '\n';
}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	//freopen("01in.txt", "r", stdin);
	CinTest(0);
	while (test--)
	{
		HoangDepTraiVaiCut();
	}
	return 0;
}
