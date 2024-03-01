#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int a[MAXN], cnt_trung[MAXN];
int n, idx = 0, MAX = -1e9;
bool check_trung = false;
set<int> SET;

void Nhap()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        SET.insert(a[i]);
        cnt_trung[a[i]]++;
        if(cnt_trung[a[i]] == n) check_trung = true;
        else MAX = max(MAX, a[i]);
    }
}

void XuLy()
{
    if(n < 2)
    {
        cout << -1 << ' ' << -1 << '\n';
    }
    else
    {
        if(check_trung)
        {
            cout << -1 << ' ' << a[n - 1] << '\n';
        }
        else
        {
            cout << *SET.upper_bound(MAX) << ' ' << *SET.lower_bound(MAX) << '\n';
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Nhap();
    XuLy();
    return 0;
}
