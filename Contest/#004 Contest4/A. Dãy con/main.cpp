
#include <iostream>
using namespace std;

const int MAXs = 1e6 + 10;
const int MAXa = 1e5 + 10;
int n, a[MAXa], k;
long long s[MAXs], maxx;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= k; i++)
    {
        s[1] = s[1] + a[i];
    }
    for (int i = 2; i <= n - (k - 1); i++)
    {
        s[i] = s[i - 1] - a[i - 1] + a[i + (k - 1)];
    }
    maxx = s[1];
    for (int i = 2; i <= n - (k - 1); i++)
    {
        if (s[i] > maxx) maxx = s[i];
    }
    cout << maxx;
    return 0;
}
