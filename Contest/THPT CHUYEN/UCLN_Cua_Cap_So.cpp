#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[1001];
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> n;
    for(long long i=0;i<n;++i)
    {
        cin >> a[i];
    }
    long long cnt = 0;
    for(long long i=0;i<n-1;++i)
    {
        for(long long j=i+1;j<n;++j)
        {
            if(__gcd(a[i], a[j]) > 1*1LL) ++cnt;
        }
    }
    cout << cnt;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
