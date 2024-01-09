
#include <iostream>
using namespace std;

const int MAXN = 1e5;
int test;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test;
    //test = 1;
    while(test--)
    {
        int n;
        int a[MAXN];
        cin >> n;
        for(int i = 1; i <= n; ++i) cin >> a[i];
        int l = 1, r = n;
        while(l < r)
        {
            cout << a[l] << ' ' << a[r] << ' ';
            ++l;
            --r;
        }
        if(n % 2) cout << a[r];
        cout << '\n';
    }
    return 0;
}
