#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int maxn = 1e6 + 1;
ll check[maxn];
map<ll, ll> m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    if (fopen("THUASONT.INP", "r"))
    {
        freopen("THUASONT.INP", "r", stdin);
        freopen("THUASONT.OUT",  "w", stdout);
    }
    ll n; cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            n /= i;
            m[i]++;
        }
    }
    if (n > 1)
    {
        m[n] = 1;
    }
    cout << m.size() << '\n';
    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}
