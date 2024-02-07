#include<bits/stdc++.h>
using namespace std;

const long long m = 1e9+7;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

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

void GiaiBai()
{
    long long x, n; cin >> x >> n;
    cout << GCD(x, n);
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
