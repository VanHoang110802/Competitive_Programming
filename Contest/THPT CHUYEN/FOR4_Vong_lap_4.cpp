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
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=i;++j)
        {
            cout << "0";
        }
        cout << '\n';
    }
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
