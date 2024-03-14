#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e6 + 7;
int minprime[MAXN];

void min_prime()
{
    for(int i = 2; i * i <= MAXN; ++i)
    {
        if(minprime[i] == 0)
        {
            minprime[i] = i;
            for(int j = i * i; j <= MAXN; j += i)
            {
                if(minprime[j] == 0)
                {
                    minprime[j] = i;
                }
            }
        }
    }
    for(int i = 2; i <= MAXN; ++i)
    {
        if(!minprime[i])
        {
            minprime[i] = i;
        }
    }
}

void factor(int m)
{
    while(m != 1)
    {
        if((m / minprime[m]) != 1)
        {
            cout << minprime[m] << '*';
        }
        else
        {
            cout << minprime[m] << '\n';
        }
        m /= minprime[m];
    }
}

void XuLy()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m;
        cin >> m;
        factor(m);
    }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    min_prime();
    XuLy();
    return 0;
}
