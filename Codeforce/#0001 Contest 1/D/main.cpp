#include <iostream>
#include <vector>
using namespace std;

#define fi first
#define se second
#define int long long
int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1);
    while(test--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }
        int MAX = -1, ans = 0;
        for(int i = 0; i < n; ++i)
        {
            if(a[i] + i <= s)
            {
                if(b[i] > ans)
                {
                    MAX = i + 1;
                    ans = b[i];
                }
            }
        }
        cout << MAX << '\n';
    }
    return 0;
}
