#include<bits/stdc++.h>
using namespace std;

int n;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}


void File()
{
    if (fopen("BAI2.INP", "r"))
    {
        freopen("BAI2.INP", "r", stdin);
        freopen("BAI2.OUT",  "w", stdout);
    }
}

void GiaiBai()
{
    cin >> n;
    long long a[n+1];
    for(int i=1;i<=n;++i)
    {
        cin >> a[i];
    }
    long long maxa = -1, chenhlech;

    for(int i=1;i<=n-2;++i)
    {
        chenhlech = a[i+2] - a[i];
        if (maxa < chenhlech) maxa = chenhlech;
    }
    cout << maxa;
}

int main()
{
    XuLyNhanh();
    File();
    GiaiBai();
    return 0;
}
