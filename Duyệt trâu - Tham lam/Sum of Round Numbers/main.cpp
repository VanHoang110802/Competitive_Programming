#include <iostream>
using namespace std;

int w[5] = {1, 10, 100, 1000, 10000};
int test;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test;
    while(test--)
    {
        int n; cin >> n;
        int temp = n, cnt = 0, i = 0;
        while(temp)
        {
            if(temp % 10) cnt++;
            temp /= 10;
        }
        cout << cnt << '\n';
        while(n)
        {
            if(n % 10)  cout << (n % 10) * w[i] << ' ';
            n /= 10;
            ++i;
        }
        cout << '\n';
    }
    return 0;
}
