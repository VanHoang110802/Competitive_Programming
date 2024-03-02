#include <bits/stdc++.h>
using namespace std;
long long n;
string s;
int main()
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> n >> s;
    long long dem = 0, tong = 0;
    for(long long i = 0;i<n;++i)
    {
        if(s[i] == '1')
        {
           dem++;
           tong += dem;
        }
        else
        {
            dem = 0;
        }
    }
    cout << tong;
	return 0;
}
