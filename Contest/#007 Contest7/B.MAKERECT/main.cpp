/*
Ta biết hình chữ nhật có các cặp cạnh đối bằng nhau
Nên số lần xuất hiện của các số phải >= 2
Xét tiếp trường hợp có số lần xuất hiện >= 4 thì là hình vuông
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

#define int unsigned long long
const int32_t MAXN = 1e5 + 7;
int test;

struct Diem
{
    int dau, cuoi;
} DIEM[MAXN];

void CinTest(int vanhoang)
{
    if(vanhoang > 0) cin >> test;
    else test = 1;
}

bool cmp(const Diem &a1, const Diem &b1)
{
    return a1.cuoi < b1.cuoi;
}

bool cmp2(const Diem &a1, const Diem &b1)
{
    return a1.dau < b1.dau;
}

void HoangDepTrai()
{
    int n; cin >> n;
    int res = 0;
    vector<int> v;
    map<int, int> MAP;

    for(int i = 1; i <= n; ++i)
    {
        int x; cin >> x;
        MAP[x]++;
    }

    {
        int32_t idx = 1;
        for(auto x : MAP)
        {
            if(x.second > 1)
            {
                DIEM[idx].dau = x.first;
                DIEM[idx].cuoi = x.second;
                idx++;
            }
        }
        sort(DIEM, DIEM + idx, cmp);
        //int res = 0;
        for(int i = idx; i >= 1; --i)
        {
            //cout << DIEM[i].dau << ' ' << DIEM[i].cuoi << '\n';
            if(DIEM[i].cuoi > 3)
            {
                res = max(res, DIEM[i].dau * DIEM[i].dau);
            }
            //res = max(res, DIEM[i].dau * DIEM[i - 1].dau);
        }
        sort(DIEM, DIEM + idx, cmp2);
        for(int i = idx; i >= 1; --i)
        {
            //cout << DIEM[i].dau << ' ' << DIEM[i].cuoi << '\n';
            res = max(res, DIEM[i].dau * DIEM[i - 1].dau);
        }
        cout << res << '\n';
    }
}
// 11 14 15 18
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("5.in", "r", stdin);
    //freopen("07.txt",  "w", stdout);
    //CinTest(-1);
    //while(test--)
    {
        HoangDepTrai();
    }
    return 0;
}
