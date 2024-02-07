#include<bits/stdc++.h>
using namespace std;

long long a, b;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> a >> b;
    if(b == 0) cout << -1;
    else
    {
        if(a % b == 0) cout << "YES";
        else cout << "NO";
    }
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
