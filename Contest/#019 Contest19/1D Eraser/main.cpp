// bai nay dung ki thuat cua so truot cung duoc

#include <iostream>
using namespace std;

int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1);
    while(test--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;
        int i = 0, cnt = 0;
        while(i < n)
        {
            if(s[i] == 'B')
            {
                cnt++;
                i += k;
            }
            else ++i;
        }
        cout << cnt << '\n';
    }
    return 0;
}
