#include <bits/stdc++.h>

using namespace std;

long long a, b, u, v, t;

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> u >> v;
        if(__gcd(a, b)==__gcd(u, v)){
            cout << "YES" << "\n";
        }
        else cout << "NO" << "\n";
    }
}
