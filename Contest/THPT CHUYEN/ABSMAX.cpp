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
    if(n == 1)
    {
        cout << 1;
        return;
    }
    vector <long long> a;
    for(int i=0;i<n;++i)
    {
        long long x; cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    long long x1 = abs(a[0] + a[1]);
    long long x2 = abs(a[a.size()-1] + a[a.size()-2]);
    if(x1 < x2) cout << x2;
    else cout << x1;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
