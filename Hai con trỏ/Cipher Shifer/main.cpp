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
        int n;
        string s, temp;
        cin >> n >> s;
        int l = 0, r = l + 1;
        char c = s[l];
        while(r < n)
        {
            if(s[r] == c)
            {
                cout << c;
                c = s[r + 1];
                ++r;
            }
            ++r;
        }
        cout << '\n';
    }
    return 0;
}
