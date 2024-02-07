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
    vector <int> a;
    for(int i=0;i<n;++i)
    {
        int x; cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    for(auto x:a) cout << x << ' ';
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
