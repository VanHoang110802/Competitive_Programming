
#include<bits/stdc++.h>
using namespace std;

long long n;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> n;
    int cnt = 0;
    for(long long i=1;i*i<=n;++i)
    {
        if(n%i==0)
        {
            if(n/i == i) cnt++;
            else cnt += 2;
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

