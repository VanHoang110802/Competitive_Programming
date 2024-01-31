#include <iostream>
#include <algorithm>
#include <ctime>
#include <string>
using namespace std;

#define fi first
#define se second
#define int long long
int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1 - 1);
    while(test--)
    {
        string s;
        cin >> s;
        int n = s.size();
        s = ' ' + s;
        int d = 0;
        for(int i = 1; i <= n; i++)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                d++;
            }
        }
        cout << d * (n - d) << '\n';
    }
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
