#include<bits/stdc++.h>
using namespace std;
double a, b, c, delta, x1, x2;
void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> a >> b >> c;
    if(a == 0)
    {
        if(b == 0)
        {
            if (c == 0)
            {
                cout << "NOSOL";
            }
            else
            {
                cout << "NOSOL";
            }
        }
        else
        {
            cout << "ONE";
        }
    }
    else
    {
        delta = b*b - 4*a*c;
        if(delta > 0)
        {
            cout << "TWO";
        }
        else if( delta == 0)
        {
            cout << "ONE";
        }
        else
        {
            cout << "NOSOL";
        }
    }
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
