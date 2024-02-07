#include<bits/stdc++.h>
using namespace std;
long long n, k;
long long a[102];
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> n >> k;
    for(long long i=0;i<n;++i)
    {
        cin >> a[i];
    }
    int cnt = 0;
    for(long long i=0;i<n-1;++i)
    {
        for(long long j=i+1;j<n;++j)
        {
            if(((a[i]* a[j])/ __gcd(a[i], a[j]) <= k)) ++cnt;
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
