#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int c[MAXN], checkNT[MAXN];

void SangNT()
{
    fill(checkNT + 2, checkNT + MAXN + 1, 1);
    for(int i = 2; i * i <= MAXN; ++i)
    {
        if(checkNT[i] == 1)
        {
            for(int j = i * i; j <= MAXN; j += i)
            {
                checkNT[j] = 0;
            }
        }
    }
}

int DemUoc(int x)
{
    int n = (int)(sqrt(x));
    int souoc = 1;
    for(int i = 2; i * i <= n; ++i)
    {
        int d = 0;
        while(n % i == 0)
        {
            d++;
            n /= i;
        }
        souoc *= (2 * d + 1);
    }
    if(n > 1) souoc *= 3;
    return souoc;
}

void F()
{
    SangNT();
    for(int i = 2; i <= MAXN; ++i)
    {
        if(checkNT[i])
        {
            c[i] = 1;
        }
        else
        {
            int k = (int)(sqrt(i));
            if(k * k == i)
            {
                int d = DemUoc(i);
                if(checkNT[d] == 1) c[i] = 1;
            }
        }
    }
    for(int i = 2; i <= MAXN; ++i)
    {
        c[i] = c[i - 1] + c[i];
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    F();
    int t; cin >> t;
    for(int i = 1, l, r; i <= t; ++i)
    {
        cin >> l >> r;
        cout << c[r] - c[l - 1] << '\n';
    }
    return 0;
}
