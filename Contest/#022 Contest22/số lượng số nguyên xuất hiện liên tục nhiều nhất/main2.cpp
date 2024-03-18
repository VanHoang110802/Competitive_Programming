#include <iostream>
using namespace std;

const int MAXN = 1e6 + 7;
int a[MAXN], cnt[MAXN];
int n, max_number = -1e9, max_count = 0;

void Nhap()
{
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
}

void XuLy()
{
    for(int i = 1; i <= n; i++)
    {
        if(a[i] == a[i - 1])
        {
            cnt[i] = cnt[i - 1] + 1;
        }
        else
        {
            cnt[i] = 1;
        }

        if(cnt[i] > max_count)
        {
            max_count = cnt[i];
            max_number = a[i];
        }
        else if(max_count == cnt[i] && max_number < a[i])
        {
            max_number = a[i];
        }
    }

    cout << max_count << ' ' <<max_number;
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
