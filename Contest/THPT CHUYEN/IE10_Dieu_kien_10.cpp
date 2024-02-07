#include<bits/stdc++.h>
using namespace std;
int ngay1, thang1, nam1, ngay2, thang2, nam2;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> ngay1 >> thang1 >> nam1 >> ngay2 >> thang2 >> nam2;
    if(nam1 < nam2) cout << 1;
    else if(nam1 > nam2) cout << -1;
    else
    {
        if(thang1 < thang2) cout << 1;
        else if (thang1 > thang2) cout << -1;
        else
        {
            if(ngay1 < ngay2) cout << 1;
            else if(ngay1 > ngay2) cout << -1;
            else cout << 0;
        }

    }
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
