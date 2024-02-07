// http://thptchuyen.ntucoder.net/Problem/Details/4478

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
    vector<long long> a;
    for(int i=0;i<n;++i)
    {
        long long x; cin >> x;
        a.push_back(x);
    }
    int k; cin >> k;
    long long tong = 0;
    for(int i=0;i<k;++i)
    {
        tong += a[i];
    }
    cout << tong;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
