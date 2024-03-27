#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

const int MAX_N = 100005;
long long F[MAX_N], revF[MAX_N];
int a[MAX_N];
const long long MOD = 68718952446LL;

long long mult(long long a, long long b)
{
    if (b == 0)
    {
        return 0LL;
    }
    long long tmp = mult(a, b / 100000);
    (tmp *= 1LL * 100000LL) %= MOD;
    if (b % 100000)
    {
        (tmp += 1LL * (b % 100000) * a) %= MOD;
    }
    return tmp;
}

void XuLy()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    F[0] = 1LL;
    revF[n + 1] = 1LL;
    for (int i = 1; i <= n; i++)
    {
        F[i] = (F[i - 1] * a[i]) % MOD;
    }
    for (int i = n; i >= 1; i--)
    {
        revF[i] = (revF[i + 1] * a[i]) % MOD;
    }
    for (int i = 1; i <= n; i++)
    {
        long long x = F[i - 1];
        x = mult(x, revF[i + 1]);
        cout << x << ' ';
    }
    cout << endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int test;
    cin >> test;
    while(test--)
    {
        XuLy();
    }
    cout << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
