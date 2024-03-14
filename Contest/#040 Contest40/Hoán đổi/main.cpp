#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define int long long
#define check(n) (prime[n >> 6] & (1 << ((n & 63) >> 1)))
#define set(n) prime[n >> 6] |= (1 << ((n & 63) >> 1))
const int MAXN = 1e6 + 7;
int y[MAXN], c = 0, a[MAXN], n, t, j;
vector<pair <long, long> > v;
int prime[MAXN];

void eratos()
{
    for(int i = 3; i * i <= MAXN; i += 2)
    {
        if(!check(i))
        {
            int t = 2 * i;
            for(int j = i * i; j <= MAXN; j += t)
            {
                set(j);
            }
        }
    }
}

bool checkprime(int m)
{
    if((m == 1) || ((m > 2) && (!(m % 2))) || ((m % 2) && check(m))) return false;
    return true;
}

void process()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        y[a[i]] = i;
    }

    for(int i = 1; i <= n; ++i)
    {
        for(j = y[i]; j > i;)
        {
            t = i;
            while(!checkprime(j - t + 1))
            {
                t++;
            }
            c++;
            y[a[t]] = j;
            y[a[j]] = t;
            v.push_back(make_pair(t, j));
            swap(a[t], a[j]);
            j = t;
        }
    }
    cout << c << '\n';
    for(int i = 0; i < c; ++i)
    {
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    eratos();
    process();
    return 0;
}
