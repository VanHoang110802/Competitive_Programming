#include <iostream>
#include <vector>
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    k--;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int j = 0; j < m; ++j)
    {
        int b;
        cin >> b;
        int l = -1, r = -1;
        for(int i = k; i >= 0; --i)
        {
            if(a[i] == b && (l == -1 || a[l] != b))
            {
                l = i;
            }
            if (a[i] > b && l == -1)
            {
                l = i;
            }
        }
        for(int i = k + 1; i < n; ++i)
        {
            if(a[i] == b && (r == -1 || a[r] != b))
            {
                r = i;
            }
            if (a[i] > b && r == -1)
            {
                r = i;
            }
        }
        int res = -1;
        if(l == -1 && r != -1)
        {
            res = r;
        }
        else if(l != -1 && r == -1)
        {
            res = l;
        }
        else
        {
            res = l;
            if (a[l] != b && a[r] == b)
            {
                res = r;
            }
            if(((a[l]==b && a[r]==b) || (a[l]!=b && a[r]!=b))&&k-l>r-(k+1))
            {
                res = r;
            }
        }
        if (res != -1)
        {
            a[res] = 0;
            res++;
        }
        cout << res << ' ';
    }
    return 0;
}
