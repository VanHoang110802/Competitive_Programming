#include <iostream>
using namespace std;

#define int long long
int test;

void CinTest(int vanhoang)
{
	if (vanhoang > 0) cin >> test;
	else test = 1;
}

void HoangDepTraiVaiCut()
{
    int n; cin >> n;
    int cnt_1 = 0, cnt_2 = 0;
    for(int i = 1; i <= n; ++i)
    {
        string x; cin >> x;
        if((x[0] - '0') > 0) cnt_1++;
        else if((x[0] - '0') < 0) cnt_2++;
    }
    cout << cnt_2 << ' ' << cnt_1 << '\n';
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
// 7 780748587317959495820 37019177967658 0 -5887 3725181120 -93981418 0
