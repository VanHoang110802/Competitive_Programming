#include <iostream>
#include <vector>
using namespace std;

int n, ans, k, p, q;
vector<int>a, b, c;

int calc(int x)
{
    int t = a[x], u = 0, v = n;
    while(v > 1) v /= t, u += v;
    return u;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    p = 2;
    while(p * p <= k)
    {
        if(k % p == 0)
        {
            q = 0;
            a.push_back(p);
            while(k % p == 0) k /= p, ++q;
            b.push_back(q);
        }
        ++p;
    }
    if(k > 1)
    {
        a.push_back(k);
        b.push_back(1);
    }

    for(int i = 0; i < a.size(); ++i)
        c.push_back(calc(i));
    ans = n;
    for(int i = 0; i < a.size(); ++i)
        ans = min(ans, c[i] / b[i]);
    cout << ans;
    return 0;
}
