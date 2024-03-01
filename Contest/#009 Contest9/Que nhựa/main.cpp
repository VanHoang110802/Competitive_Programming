#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef int64_t ll;
const ll m9 = (ll)1e9;
ll st[8];
ll r1, r2, a, b, c, d, e;

vector<ll> area(4,0LL);

vector<ll> multp(ll x, ll y)
{
    vector<ll> ans(4, 0);
    ll aa[2] = {x % m9, x / m9};
    ll bb[2] = {y % m9, y / m9};
    for(int i = 0; i < 2; ++i)
    {
        for(int j = 0; j < 2; ++j)
        {
            ans[i + j] += aa[i] * bb[j];
        }
    }
    for(int k = 0; k < 3; ++k)
    {
        ans[k + 1] += ans[k] / m9;
        ans[k] %= m9;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

void calc(ll x, ll y)
{
    if (area < multp(x, y))
    {
        area = multp(x, y);
        r1 = x;
        r2 = y;
    }
}

void init()
{
    st[0] = d;
    st[1] = c;
    st[2] = b;
    st[3] = a;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int i = 0; i < 4; ++i) cin >> st[i];
    sort(st, st + 4);
    a = st[3];
    b = st[2];
    c = st[1];
    d = st[0];
    calc(b, d);
    init();
    st[3] /= 2;
    st[4] = a - st[3];
    st[1] /= 2;
    st[5] = c - st[1];
    sort(st, st + 6, greater<ll>());
    calc(st[1], st[3]);
    init();
    st[3] /= 2;
    st[4] = a - st[3];
    st[2] /= 2;
    st[5] = b - st[2];
    sort(st, st + 6,greater<ll>());
    calc(st[1], st[3]);
    init();
    st[3] = a - b;
    st[4] = b;
    sort(st, st + 5, greater<ll>());
    calc(st[1], st[3]);
    init();
    st[3] = a - c;
    st[4] = c;
    sort(st, st + 5, greater<ll>());
    calc(st[1], st[3]);
    init();
    st[3] = a / 4;
    st[4] = (a - 2 * (a / 4)) / 2;
    st[5] = a - st[3] - st[4];
    sort(st, st + 6, greater<ll>());
    calc(st[1], st[3]);
    init();
    st[3] = (a - b) / 2;
    st[4] = a - st[3];
    sort(st, st + 5, greater<ll>());
    calc(st[1], st[3]);
    init();
    st[3] = b - 1;
    st[4] = (a - b + 1) / 2;
    st[5] = a - st[3] - st[4];
    sort(st, st + 6, greater<ll>());
    calc(st[1], st[3]);
    init();
    st[3] = b;
    st[4] = (a - b) / 2;
    st[5] = a - st[3] - st[4];
    sort(st, st + 6, greater<ll>());
    calc(st[1], st[3]);
    init();
    st[2] /= 2;
    st[4] = b - st[2];
    sort(st, st + 5, greater<ll>());
    calc(st[1], st[3]);
    init();
    st[1] /= 2;
    st[4] = c - st[1];
    sort(st, st + 5, greater<ll>());
    calc(st[1], st[3]);
    init();
    st[3] /= 2;
    st[4] = (a-a/2)/2;
    st[5] = a - st[3] - st[4];
    sort(st, st + 6, greater<ll>());
    calc(st[1],st[3]);
    init();
    st[3] = a / 2 + 1;
    st[4] = (a - a / 2 - 1)/2;
    st[5] = a - st[3] - st[4];
    sort(st, st + 6, greater<ll>());
    calc(st[1], st[3]);
    init();
    st[3] = a / 2;
    st[4] = a - st[3];
    sort(st, st + 5, greater<ll>());
    calc(st[1], st[3]);
    cout << r1 << ' ' << r2;
    return 0;
}
