#include <bits/stdc++.h>
using namespace std;

template <typename vanhoang>
vanhoang GCD(vanhoang a, vanhoang b)
{
    if (b == 0) return a;
    return GCD(b, a % b);
}

//template <typename vanhoang>
//vanhoang LCM(vanhoang a, vanhoang b)
//{
//    return a / GCD(a, b) * b;
//}

int main()
{
    freopen("VANNGHE.inp", "r", stdin);
    freopen("VANNGHE.out", "w", stdout);
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    long long a, b; cin >> a >> b;
    cout << GCD(a, b) << '\n' << (a/GCD(a, b)) << ' ' << (b/GCD(a, b));
    //cout << GCD(a, b) << '\n' << LCM(a, b);
    return 0;
}
