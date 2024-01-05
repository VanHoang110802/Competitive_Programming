#include <iostream>
#include <algorithm>
using namespace std;

#define int long long
const int MAXN = 1e5;
int tc;
int arr[MAXN];

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> tc;
    while(tc--)
    {
        int n, check = 0;
        cin >> n;
        for(int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for(int i = 0; i < n - 1; ++i)
        {
            if(arr[i] == arr[i + 1])
            {
                check = 1;
                break;
            }
        }
        if(check) cout << "NO\n";
        else cout << "YES\n";
        check = 0;
    }
    return 0;
}
