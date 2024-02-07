#include<bits/stdc++.h>
using namespace std;
int n;
map <char, int> MAP;
struct KiTu
{
    char x;
    int y;
} a[101];

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

bool cmp(const KiTu &dem1, const KiTu &dem2)
{
    if(dem1.y > dem2.y) return true;
    return false;
}

void GiaiBai()
{
    cin >> n;

    for(int i=0;i<n;++i)
    {
        char x; cin >> x;
        MAP[x]++;
    }
    int idx = 0;
    for(auto x: MAP)
    {
        a[idx].x = (char)x.first;
        a[idx].y = (int)x.second;
        idx++;
    }
    sort(a, a+n, cmp);
    cout << a[0].x;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}

