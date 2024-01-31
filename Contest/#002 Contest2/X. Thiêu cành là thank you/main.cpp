#include <iostream>
#include <ctime>
using namespace std;

#define int long long
int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1 - 1);
    while(test--)
    {
        int n; cin >> n;
        for(int i = 1; i <= n; ++i)
        {
            for(int j = 1; j <= 2 * n - 1; ++j)
            {
                if(i - j == -n + 1 || i + j == n + 1 || i == n) cout << '*';
                else cout << ' ';
            }
            cout << '\n';
        }

        for(int i = 1; i < n; ++i)
        {
            for(int j = 1; j <= n; ++j)
            {
                if(j == n) cout << '*';
                else cout << ' ';
            }
            cout << '\n';
        }

        for(int i = 1; i <= 2 * n - 2; ++i)
        {
            if(i == 1|| n == 1)
            {
                cout << ' ';
            }
            else
            {
                cout << '*';
            }
        }
        cout << '\n';
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
