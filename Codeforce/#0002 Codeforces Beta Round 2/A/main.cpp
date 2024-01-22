#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int test;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(0);
    while(test--)
    {
        int n;
        string a[1000];
        int b[1000];
        map<string, int>s, t;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
            s[a[i]] += b[i];
        }
        int MAX = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[a[i]] > MAX) MAX = s[a[i]];
        }
        for (int i = 0; i < n; i++)
        {
            t[a[i]] += b[i];
            if (t[a[i]] >= MAX && s[a[i]] == MAX)
            {
                cout << a[i];
                break;
            }
        }
    }
    return 0;
}
