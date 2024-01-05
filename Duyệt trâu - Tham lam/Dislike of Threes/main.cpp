#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
int t;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> t;
    while(t--)
    {
        int k; cin >> k;
        for(int i = 1; i <= k; ++i)
        {
            if(i % 3 == 0 || i % 10 == 3) k++;
        }
        cout << k << '\n';
    }
    return 0;
}
