#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define int long long
#define fi first
#define se second

const int MAXN = 5 * 1e5 + 10;
int a[MAXN], b[MAXN];


void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    if (n == 1)
    {
        cout << "First\n";
        return;
    }

    bool all1 = true;
    for(int i = 0; i < n; ++i)
    {
        if (a[i] != 1)
        {
            all1 = false;
        }
    }

    if (all1)
    {
        if (n % 2 == 0)
        {
            cout << "Second\n";
        }
        else
        {
            cout << "First\n";
        }
        return;
    }


    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 1)
        {
            break;
        }
        cnt++;
    }

    if (cnt % 2 == 0)
    {
        cout << "First\n";
    }
    else
    {
        cout << "Second\n";
    }
    return;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
