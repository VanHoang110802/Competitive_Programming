#include <iostream>
#include <map>
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
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1 - 1);
    while(test--)
    {
        int n, k; cin >> n >> k;
        vector<int> a(n), b;
        for(int i = 0; i < n; ++i) cin >> a[i];

        map<int, int> MAP;
        for(int i = 0; i < n; ++i)
        {
            MAP[a[i]]++;
            if(MAP[a[i]] == 1) b.push_back(i + 1);
        }
        if(b.size() >= k)
        {
            cout<<"YES\n";
            for(int i = 0; i < k; ++i)
            {
                cout << b[i] << ' ';
            }
            cout << '\n';
        }
        else cout << "NO\n";
    }
    return 0;
}
