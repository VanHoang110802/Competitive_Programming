#include<bits/stdc++.h>
using namespace std;
long long n;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> n;
    long long truoc = n-1, sau = n + 1;
    long long ans= truoc * sau;
    cout << ans;
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
