#include <bits/stdc++.h>
using namespace std;

const int MAXN = 301;
int a[MAXN][MAXN], d[1000007];
int m, n, k;

bool cmp(int x, int y)
{
    return x > y;
}

void XuLy()
{
    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=m; ++j)
        {
            d[a[i][j]]++;
        }
    }
    sort(d+1, d+100000+1, cmp);
    long long ans = 0;
    for(int i=1; i<=k; ++i)
    {
        ans += d[i];
    }
    cout << ans;
}

int main()
{
    if (fopen("CAU4.INP", "r"))
    {
        freopen("CAU4.INP", "r", stdin);
        freopen("CAU4.OUT",  "w", stdout);
    }
    cin >> m >> n >> k;
    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=m; ++j)
        {
            cin >> a[i][j];
        }
    }
    XuLy();
    return 0;
}
