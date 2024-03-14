#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int c[MAXN], f[MAXN], sum[MAXN];
bool prime[MAXN];
int t, n, m;

void eratosthene()
{
    for(int i = 2; i * i <= MAXN; ++i)
    {
        if(!prime[i])
        {
            for(int j = i; j <= MAXN; j += i)
            {
                f[i] += c[j];
                prime[j] = true;
            }
        }
    }
}

void process()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> t;
        ++c[t];
    }
    eratosthene();
    for(int i = 2; i <= MAXN; ++i)
    {
        sum[i] = sum[i - 1] + f[i];
    }

    cin >> m;
    int li, ri;
    for(int i = 1; i <= m; ++i)
    {
        cin >> li >> ri;
        if(ri > 1e6) ri = 1e6;
        cout << sum[ri] - sum[li - 1] << '\n';
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    process();
    return 0;
}
