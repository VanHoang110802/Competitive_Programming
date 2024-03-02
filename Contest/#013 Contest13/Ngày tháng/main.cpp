#include <bits/stdc++.h>
using namespace std;

int dd[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int y, m, d, a[8];
string sa, sb, sc;
set<tuple<int, int, int> > s;

bool check()
{
    int t;
    if(y == 0 || m == 0 || m > 12 || d == 0 || d > 31) return 0;
    if(y > 0 && y % 3328 == 0) t = 2;
    else t = (y % 400 == 0)||(y % 100 != 0 && y % 4 == 0);
    if(m != 2 && d > dd[m - 1]) return 0;
    if(m == 2 && d > 28 + t) return 0;
    return 1;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> sa >> sb >> sc;
    sa += sb + sc;
    for(int i = 0; i < 8; ++i) a[i] = sa[i] - 48;
    sort(a, a + 8);
    do
    {
        y = ((a[0] * 10 + a[1]) * 10 + a[2]) * 10 + a[3];
        m = a[4] * 10 + a[5];
        d = a[6] * 10 + a[7];
        if(check()) s.insert(make_tuple(y, m, d));
    }
    while(next_permutation(a, a + 8));
    cout << s.size() << '\n';
    for(auto i : s)
    {
       cout << setw(4) << setfill('0') << get<0>(i) << ' ';
       cout << setw(2) << setfill('0') << get<1>(i) << ' ';
       cout << setw(2) << setfill('0') << get<2>(i) << '\n';
    }
    return 0;
}
