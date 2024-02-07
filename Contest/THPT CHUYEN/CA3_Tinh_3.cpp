#include<bits/stdc++.h>
using namespace std;
long long n, k;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> n >> k;
    cout << n/k << ' ' << n%k;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
