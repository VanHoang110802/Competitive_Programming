#include <bits/stdc++.h>
using namespace std;

const int64_t h = 30007;
int64_t p[27], q;
string s;
int n, k;
bool good;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    p[0] = 1;
    for(int i = 1; i < 27; ++i) p[i] = p[i - 1] * h;
    cin >> s;
    n = s.size();
    vector<int64_t> f(n + 1);
    f[0] = 0;
    k = n;
    for(int i = 0; i < n; ++i) f[i+1] = f[i] + p[s[i] - 96];
    for(int i = 1; i <= n / 2; ++i)
    {
        if(n % i == 0)
        {
            q = f[i];
            good = true;
            for(int j = i; j <= n; j += i)
                if(f[j] - f[j - i] != q)
                {
                    good = false;
                    break;
                }
            if(good)
            {
                k = i;
                break;
            }
        }
    }
    cout << n/ k;
    return 0;
}
