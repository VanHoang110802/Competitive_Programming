/*
5 2 2
5 4 3 2 2

5 2 2
5 4 3 2 4

5 2 2
5 4 3 2 7
*/
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

const int MAXN = 1e6 + 7;
int n, L1, U1;
int a[MAXN], L[MAXN], P[MAXN];

void QHD()
{
    L[1] = 1;
    P[1] = 1;
    for(int i = 2; i <= n; ++i)
    {
        L[i] = 1;
        P[i] = 1;
        for(int j = 1; j <= i - L1; ++j)
        {
            if(a[j] > a[i])
            {
                if(a[j] <= a[i] + U1)
                {
                    if(L[i] < P[j] + 1)
                    {
                        L[i] = P[j] + 1;
                    }
                }
            }
            else if(a[j] < a[i])
            {
                if(a[i] - U1 <= a[j])
                {
                    if(P[i] < L[j] + 1)
                    {
                        P[i] = L[j] + 1;
                    }
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
        MAX = max(L[i], MAX);
        MAX = max(P[i], MAX);
    }
    cout << MAX << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> L1 >> U1;
    for(int i = 1; i <= n; ++i) cin >> a[i];
    QHD();
    InKQ();
    return 0;
}
