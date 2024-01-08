/*
5
2 1 4 3 5
*/
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

const int MAXN = 1e6 + 7;
int n;
int a[MAXN], L1[MAXN], L2[MAXN];

void QHD()
{
    L1[1] = 1;
    for(int i = 2; i <= n; ++i)
    {
        L1[i] = 1;
        for(int j = 1; j <= i - 1; ++j)
        {
            if(a[j] < a[i])
            {
                if(L1[i] < L1[j] + 1)
                {
                    L1[i] = L1[j] + 1;
                }
            }
        }
    }

    L2[n] = 1;
    for(int i = n - 1; i >= 1; --i)
    {
        L2[i] = 1;
        for(int j = i + 1; j <= n; ++j)
        {
            if(a[i] > a[j])
            {
                if(L2[i] < L2[j] + 1)
                {
                    L2[i] = L2[j] + 1;
                }
            }
        }
    }
}

void InKQ()
{
    int MAX = -1;
    for(int i = 1; i <= n; ++i)
    {
        MAX = max(L1[i] + L2[i] - 1, MAX);
    }
    cout << MAX << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    QHD();
    InKQ();
    return 0;
}
