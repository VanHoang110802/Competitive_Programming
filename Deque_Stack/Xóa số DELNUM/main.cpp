#include <iostream>
#include <vector>
using namespace std;

int n;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = n;
    while(1)
    {
        bool found = false;
        for(int i = 1; i < a.size() - 1; i++)
        {
            if(a[i] < a[i - 1] && a[i] < a[i + 1])
            {
                a.erase(a.begin() + i);
                ans--;
                found = true;
                break;
            }
        }
        if (found == false) break;
    }

    cout << ans;
    return 0;
}
