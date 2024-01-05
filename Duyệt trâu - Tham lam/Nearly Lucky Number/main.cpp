#include <iostream>
using namespace std;

#define int long long
int n, cnt = 0;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    while(n != 0)
    {
    	int num = n % 10;
        if(num == 4 || num == 7)
        {
            cnt++;
        }
        n/=10;
    }
    if(cnt ==7 || cnt == 4) cout << "YES";
    else cout << "NO";
    return 0;
}
