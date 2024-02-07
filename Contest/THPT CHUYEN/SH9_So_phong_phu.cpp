#include<bits/stdc++.h>
using namespace std;
const long long MAXN = 1000006;
long long L, R, A[MAXN];
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> L >> R;
    int cnt = 0;
    for(long i=1;i<=R;i++) A[i]=1;
    for(long i=2;i<=R;i++)
    {
        for(long j=2*i;j<=R;j+=i) A[j]+=i;
    }
    for(long i=L;i<=R;i++)
    {
        cnt += A[i]>i;
    }
    cout << cnt;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
