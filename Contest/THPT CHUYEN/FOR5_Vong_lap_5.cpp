#include<bits/stdc++.h>
using namespace std;
const long long MOD = 1e9+7;
long long n;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> n;
    long long tich = 1;
    for(long long i=1;i<=n;++i)
    {
        tich = (tich * i) % MOD;
    }
    cout << tich;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}

