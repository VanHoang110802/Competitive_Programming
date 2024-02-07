#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[102];
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
    int cnt = 0;
    for(long long i=0;i<n-1;++i)
    {
        for(long long j=i+1;j<n;++j)
        {
            if(a[i]> a[j]) ++cnt;
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
