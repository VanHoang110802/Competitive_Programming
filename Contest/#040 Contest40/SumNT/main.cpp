
#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e7 + 7;
#define check(n) (prime[n >> 6] & (1 << ((n & 63) >> 1)))
#define set(n) prime[n >> 6] |= (1 << ((n & 63) >> 1))
int sum[MAXN];
int prime[MAXN >> 6];
int t;

void eratosthene()
{
    for(int i = 3; i * i <= MAXN; i += 2)
    {
        if (!check(i))
        {
            int tmp = 2 * i;
            for(int j = i * i; j <= MAXN; j += tmp)
            {
                set(j);
            }
        }
    }
    sum[1] = 2;
    int cs = 1;
    for(int i = 3; i <= MAXN; i += 2)
    {
        if (!check(i))
        {
            cs++;
            sum[cs] = sum[cs - 1] + i;
        }
    }
}

void process()
{
    cin >> t;
    while(t--)
    {
        int m;
        cin >> m;
        cout << sum[m] << '\n';
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    eratosthene();
    process();
    return 0;
}
