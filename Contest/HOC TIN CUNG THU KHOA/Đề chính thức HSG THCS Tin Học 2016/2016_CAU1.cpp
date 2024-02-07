#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("CAU1.INP", "r", stdin);
    freopen("CAU1.OUT",  "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long long a, b, c; cin >> a >> b >> c;
    long long tich = 1;
    for(long long i=a;i<=b;++i)
    {
        tich = ((tich %c) * (i % c));
    }
    //cout << tich << '\n';
    long long ans = tich % c;
    cout << ans;
    return 0;
}
