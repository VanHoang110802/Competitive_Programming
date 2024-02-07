#include<bits/stdc++.h>
using namespace std;
int n;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> n;
    int tong = 0;
    for(int i=1;i<=n*n;++i)
    {
        int x; cin >> x;
        tong += x;
    }
    cout << tong;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
