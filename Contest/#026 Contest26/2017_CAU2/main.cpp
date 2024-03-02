#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    if(fopen("CAU2.INP", "r"))
    {
        freopen("CAU2.INP", "r", stdin);
        freopen("CAU2.OUT", "w", stdout);
    }
    int n, k; cin >> n >> k;
    int a[n];
    int s = 0;
    for(int i=1;i<=n;++i)
    {
        cin >> a[i];
        s += a[i];
    }
    sort(a+1, a+n+1, greater<int>());
    for(int i=k;i<=n;i+=k)
    {
        s = s - a[i];
    }
    cout << s;
    return 0;
}
