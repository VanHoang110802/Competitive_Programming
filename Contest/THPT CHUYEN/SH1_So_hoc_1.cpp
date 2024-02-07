#include<bits/stdc++.h>
using namespace std;
long long a, b;
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

template <typename vanhoang>
vanhoang LCM(vanhoang a, vanhoang b)
{
    return a / GCD(a, b) * b;
}

void GiaiBai()
{
    cin >> a >> b;
    cout << GCD(a, b) << '\n';
    cout << LCM(a, b);
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
