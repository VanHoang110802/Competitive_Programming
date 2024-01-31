#include <bits/stdc++.h>
using namespace std;

const int MAXC = 8;

void DichKiTuSangTrai(int k)
{
    string temp = "1234567812345678";
    for(int i = k; i < k + 8; ++i)
    {
        cout << temp[i];
    }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    string s;
    cin >> s;
    int left = 0, right = 0;
    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] == 'L')
        {
            left++;
        }
        else
        {
            right++;
        }
    }
    if(left >= right)
    {
        left = (left - right) % MAXC;
    }
    else
    {
        right = (right - left) % MAXC;
        left = MAXC - right;
    }
    DichKiTuSangTrai(left);
    return 0;
}
