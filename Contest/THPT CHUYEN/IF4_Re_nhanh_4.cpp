#include<bits/stdc++.h>
using namespace std;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    vector <long long> a;
    for(int i=0;i<4;++i)
    {
        long long x; cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    cout << a[3];
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
