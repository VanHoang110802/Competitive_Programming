#include <iostream>
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
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test--)
    {
        int n; cin >> n;
        for(int i = 1; i <= n; ++i) cout << '*';
        cout << '\n';
        int temp = n - 2;
        while(temp--)
        {
            for(int i = 1; i <= n; ++i)
            {
                if(i == 1 || i == n) cout << '*';
                else cout << ' ';
            }
            cout << '\n';
        }
        for(int i = 1; i <= n; ++i) cout << '*';
    }
    return 0;
}
