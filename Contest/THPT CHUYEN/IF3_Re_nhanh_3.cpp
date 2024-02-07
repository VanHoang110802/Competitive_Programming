#include<bits/stdc++.h>
using namespace std;

long long nam;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> nam;
    if(nam % 400 == 0 || (nam % 100 != 0 && nam % 4 == 0)) cout << "YES";
    else cout << "NO";
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
