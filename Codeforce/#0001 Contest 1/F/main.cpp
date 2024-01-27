#include <iostream>
#include <queue>
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
        int n, k;
        cin >> n >> k;
        deque<int> d;
        int x;
        for(int i = 0; i < n; ++i)
        {
            cin >> x;
            d.push_back(x);
        }
        int cnt = 0;
        while(d.size() && d.front() <= k)
        {
            d.pop_front();
            cnt++;
        }
        while(d.size() && d.back() <= k)
        {
            d.pop_back();
            cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}
