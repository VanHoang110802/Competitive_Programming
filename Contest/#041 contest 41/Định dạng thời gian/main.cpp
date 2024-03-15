#include <iostream>
using namespace std;
 
#define int long long
int s;
 
void Nhap()
{
    cin >> s;
}
 
void XuLy()
{
	cout << s / 3600 << ' ';
	s = s % 3600;
	cout << s / 60 << ' ' << s % 60;
}
 
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Nhap();
    XuLy();
    return 0;
}
