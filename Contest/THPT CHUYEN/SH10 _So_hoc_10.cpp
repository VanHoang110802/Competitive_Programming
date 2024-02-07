#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6+1;
bool Check[MAXN];
long long a, b;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void SangNT()
{
    for(int i=0; i<=MAXN; ++i)
    {
        Check[i] = true;
    }
    Check[0] = false;
    Check[1] = false;
    for(int i=2; i*i<=MAXN; ++i)
    {
        if(Check[i])
        {
            for(int j=i*i; j<=MAXN; j+=i)
            {
                Check[j] = false;
            }
        }
    }
}
long long TichCS(long long n)
{
    long long tong = 0;
    while(n)
    {
        tong += n % 10;
        n/=10;
    }
    return tong;
}

void GiaiBai()
{
    int cnt = 0;
    SangNT();
    cin >> a >> b;
    for(long long i=a;i<=b;++i)
    {
        if(Check[TichCS(i)]) cnt++;
    }
    cout << cnt;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
