#include<bits/stdc++.h>
using namespace std;

long long n;
long long h, sn;
long long a[1001];
long long dc[1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    if (fopen("CAU2.INP", "r"))
    {
        freopen("CAU2.INP", "r", stdin);
        freopen("CAU2.OUT",  "w", stdout);
    }
    cin >> n >> h;
    for(long long i=1;i<=n;++i)
    {
        cin >> a[i];
    }
    memset(dc, 0, sizeof(dc));

    sn = 0;
    for(long long i=1;i<=n;++i)
    {
        if(dc[i] == 0)
        {
            dc[i] = 1;
            for(long long j=1;j<=n;++j)
            {
                if ((dc[j] == 0) && (abs(a[j]-a[i])<=h))
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
/*
6 3 -7 27 -5 26 28 -6
2
6 1 -7 27 -5 26 28 -6
3
7 3 -7 27 -5 26 28 -6 30
2
8 1 -7 27 -5 26 28 -6 30 22
5
9 3 -7 27 -5 26 28 -6 -4 -8
3
10 1 -7 27 -5 26 28 -6 -4 -8  30 22
5
11 3 -7 27 -5 26 28 -6 30 -4 -8  29 22
3
12 1 -7 27 -5 26 28 -6 30 22 -4 -8  31 22
5
*/
