#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 4;
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
        vector<int> a(MAXN);
        int cnt = 0;
        for(int i = 0; i < MAXN; ++i) cin >> a[i];
        if(a[0] < a[1] && a[2] < a[3] || a[0] > a[1] && a[2] > a[3]) cnt++;
        if(a[0] < a[2] && a[1] < a[3] || a[0] > a[2] && a[1] > a[3]) cnt++;
        if(cnt == 2) cout << "YES";
        else cout << "NO";
        cout << '\n';
    }
    return 0;
}
