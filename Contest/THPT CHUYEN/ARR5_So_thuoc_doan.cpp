#include <bits/stdc++.h>
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
    int cnt = 0;
    for(int i=0;i<n;++i)
    {
        int x;
        cin >> x;
        if(x >= 500 && x <= 3000) cnt++;
    }
    cout << cnt;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
