#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("CAU3.INP", "r", stdin);
    freopen("CAU3.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k;
    string s;
    cin >> k >> s;
    int n = s.size();
    string a[n+1], b[n+1];
    s = " " + s + s;
    for(int i =1; i<=n; ++i)
    {
        for(int j=i; j<=i+n-1; ++j)
        {
            a[i] += s[j];
        }
    }
    sort(a+1, a+n+1);
    int m = 0;
    for(int i=1; i<=n; ++i)
    {
        if(a[i] != b[m])
        {
            m++;
            b[m] = a[i];
        }
    }
    if(k<=m) cout << b[k];
    else cout << -1;
    return 0;
}
