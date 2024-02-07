#include<bits/stdc++.h>
using namespace std;
int n;
string s;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> n;
    if(n == 1) cout << 1;
    else
    {
        int a[n+1];
        for(int i=1;i<=n;++i) cin >> a[i];
        for(int i=1;i<=n;++i) if(a[i] < 0) a[i] *= -1;
        sort(a+1, a+n+1);
        cout << (a[n] * a[n]) + (a[n-1] * a[n-1]);
    }
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
