#include<bits/stdc++.h>
using namespace std;

long long n;
long long h, sn;
long long a[1001];
long long dc[1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if (fopen("CAU2.INP", "r"))
    {
        freopen("CAU2.INP", "r", stdin);
        freopen("CAU2.OUT",  "w", stdout);
    }
    cin >> n >> h;
    for(long long i=1; i<=n; ++i)
    {
        cin >> a[i];
    }
    memset(dc, 0, sizeof(dc));

    sn = 0;
    for(long long i=1; i<=n; ++i)
    {
        if(dc[i] == 0)
        {
            dc[i] = 1;
            for(long long j=1; j<=n; ++j)
            {
                if ((dc[j] == 0) && (abs(a[j]-a[i])<h))
                {
                    dc[j] = 1;
                }
            }
            sn++;
        }
    }
    cout << sn;
    return 0;
}
