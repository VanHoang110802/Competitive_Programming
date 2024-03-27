#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

const int MAX_N = 100005;
int a[MAX_N];

void XuLy()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    long long deno = 0, nume = 1LL * n;
    sort(a + 1, a + n + 1);
    long long S = 0LL;
    for (int i = 1; i <= n; i++)
    {
        S += 1LL * a[i];
    }
    deno = S;
    long long curSum = 0LL;
    for (int i = 1; i <= n; i++)
    {
        curSum += 1LL * a[i];
        deno += 1LL * S;
        deno -= 2LL * curSum;
        deno += 1LL * (2 * i - n) * a[i];
    }
    long long gcd = __gcd(deno, nume);
    deno /= gcd;
    nume /= gcd;
    cout << deno << ' ' << nume << '\n';
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
