#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <algorithm>
using namespace std;

#define int long long
int test;
string ss;

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

void ChuyenSoThanhChuoi(int n)
{
    if(n)
    {
        ChuyenSoThanhChuoi((n - 1) / 26);
        ss += ('A' + (n - 1) % 26);
    }
}

int ans = 0;
void DoiChuoiThanhSo(string s)
{
    for(int i = 0; i < s.size(); ++i)
    {
        ans = ans * 26 + s[i] - 'A' + 1;
    }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); CinTest(1);
    while(test--)
    {
        ss = "";
        ans = 0;
        string s;
        cin >> s;
        vector<string> v;
        vector<string> v2;
        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                string s1;
                while(s[i] >= 'A' && s[i] <= 'Z')
                {
                    s1 += s[i];
                    ++i;
                }
                v.push_back(s1);
            }
            else
            {
                string s1;
                while(s[i] >= '0' && s[i] <= '9')
                {
                    s1 += s[i];
                    ++i;
                }
                v2.push_back(s1);
            }
            --i;
        }
        if(v.size() > 1 && v2.size() > 1)
        {
            string ans1, ans2;
            ans1 = v2[0];
            ans2 = v2[1];
            int x = stoi(ans2);
            ChuyenSoThanhChuoi(x);
            cout << ss << ans1 << '\n';
        }
        else
        {
            string ans1, ans2;
            ans1 = v[0];
            ans2 = v2[0];
            DoiChuoiThanhSo(ans1);
            cout << 'R' << ans2 << 'C' << ans << '\n';
        }
    }
    return 0;
}
