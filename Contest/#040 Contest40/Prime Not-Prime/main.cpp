#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e7 + 7;
const int MOD = 1e9 + 7;
#define check(n) (prime[n >> 6] & (1 << ((n & 63) >> 1)))
#define set(n) prime[n >> 6] |= (1 << ((n & 63) >> 1))
typedef long long ll;
int prime[MAXN >> 6];

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

void process()
{
    int test, n;
    int allPrime;
    int leftPrime, leftNotPrime;
    int rightPrime, rightNotPrime;

    cin >> test;
    while(test--)
    {
        cin >> n;
        allPrime = 1;
        for(int i = 3; i <= n; i += 2)
        {
            if(!check(i))
            {
                allPrime ++;
            }
        }

        leftPrime = 0;
        leftNotPrime = 1;
        rightPrime = allPrime;
        rightNotPrime = n - allPrime - 1;

        ll i = 1;
        ll res = 0;
        while(i < n)
        {
            res = (res + leftPrime * rightNotPrime) % MOD;
            res = (res + leftNotPrime * rightPrime) % MOD;
            ll tmp = i + 1;
            if((tmp == 2) ||(tmp % 2) && (!check(tmp))) //i+1 is prime
            {
                leftPrime++;
                rightPrime--;
            }
            else
            {
                leftNotPrime++;
                rightNotPrime--;
            }
            i++;
        }
        cout << res << '\n';
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
