#include<bits/stdc++.h>
using namespace std;

const int N = 1000005;
int n, m, a[N], ans = 0;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

int scp(int n)
{
    m = sqrt(n);
    return m * m == n;
}

void GiaiBai()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(scp(a[i]) && a[i] % 2 != 0)
        {
            ans++;
        }
    }
    cout << ans;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
