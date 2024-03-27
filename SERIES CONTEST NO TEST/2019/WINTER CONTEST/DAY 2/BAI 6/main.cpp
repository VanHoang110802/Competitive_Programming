#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

const int MAX_N = 500005;
int a[MAX_N];
int F[MAX_N];

void XuLy()
{
    int n;
    cin >> n;
    long long sum = 0LL;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += 1LL * a[i];
    }
    if (sum % 3 != 0)
    {
        cout << "0\n";
    }
    else
    {
        long long part = sum / 3;
        sum = 0;
        F[n + 1] = 0;
        for (int i = n; i >= 1; i--)
        {
            sum += a[i];
            F[i] = F[i + 1];
            if (part == sum)
            {
                F[i]++;
            }
        }
        long long res = 0LL;
        sum = 0LL;
        for (int i = 1; i <= n - 2; i++)
        {
            sum += a[i];
            if (sum == part)
            {
                res += F[i + 2];
            }
        }
        cout << res << '\n';
    }
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
