#include <iostream>
#include <map>
using namespace std;

#define int long long
const int MAXN = 1e6;
int a[MAXN];
int test;

void CinTest(int vanhoang)
{
	if (vanhoang > 0) cin >> test;
	else test = 1;
}

void HoangDepTraiVaiCut()
{
	int n, k, ans = 0;
	cin >> n >> k;
	map<int, int> MAP;
	for(int i = 1; i <= n; ++i)
    	{
        	cin >> a[i];
        	MAP[a[i]]++;
        	int x = k - (a[i] * a[i]);
        	if(MAP.find(x) != MAP.end()) ans += MAP[x];
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
