#include <iostream>
using namespace std;

//#define int long long
double t;

void Nhap()
{
    cin >> t;
}

void XuLy()
{
    if(t < 5) cout << "SAFE";
    else if(t < 9) cout << "TOXIC";
    else cout << "VERY TOXIC";
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    Nhap();
    XuLy();
    return 0;
}
