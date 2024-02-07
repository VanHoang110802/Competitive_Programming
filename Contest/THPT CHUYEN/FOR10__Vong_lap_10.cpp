#include<bits/stdc++.h>
using namespace std;
char ch;
int n, m;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> n >> m >> ch;
    for(int i=1;i<=n*m;++i)
    {
        cout << ch;
        if(i%m ==0) cout << '\n';
    }
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
