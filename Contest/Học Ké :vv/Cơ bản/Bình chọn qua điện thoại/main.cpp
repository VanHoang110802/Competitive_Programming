// có thể dùng *max_element(a.begin(), a.end()); để tìm giá trị lớn nhất có trong mảng
#include <iostream>
using namespace std;

#define int long long
const int MAXN = 1e3 + 7;
int a[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, MAX = -1e9, cnt = 0; cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if(MAX < a[i]) MAX = a[i];
    }
    for(int i = 1; i <= n; ++i)
    {
        if(a[i] == MAX) cnt++;
    }
    cout << cnt << '\n' << MAX << '\n';
    return 0;
}
