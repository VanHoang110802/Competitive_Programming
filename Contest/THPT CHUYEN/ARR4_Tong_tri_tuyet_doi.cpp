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
        a.push_back(abs(x));
    }
    int tong = 0;
    for(auto i:a) tong += i;
    cout << tong;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}

