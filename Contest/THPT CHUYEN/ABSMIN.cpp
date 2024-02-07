#include<bits/stdc++.h>
using namespace std;

int n;
const long long MIN = LONG_MAX/2;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> n;
    vector <long long> a;
    for(int i=0;i<n;++i)
    {
        long long x; cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    long long temp = MIN;
    for(int i=0;i<n-1;++i)
    {
        temp = min(temp, abs(a[i] - a[i+1]));
    }
    cout << temp;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
