#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1e9+7;
long long n,a,b,c;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin>>n;
    if(n<3)
    {
        cout<<1;
        return;
    }
    a=1; b=1;
    for(long long i=3;i<=n;i++)
    {
        c=(3*b-a)%MOD;
        a=b;
        b=c;
    }
    cout<<c%MOD;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
