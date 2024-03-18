#include <iostream>
#include <unordered_map>
using namespace std;

const int MAXN = 1e6 + 7;
int a[MAXN];
int n;

void Nhap()
{
    cin >> n;
    //for(int i = 1; i <= n; ++i) cin >> a[i];
}

void XuLy()
{
    unordered_map<int,int> cnt;
    int cntmax = 0, maxx = -1e9;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        cnt[a[i]]++;
        if(cntmax < cnt[a[i]])
        {
            cntmax = cnt[a[i]];
            maxx = a[i];
        }
        else if(cntmax == cnt[a[i]] && maxx < a[i]) maxx = a[i];
    }
    cout << cntmax << ' ' << maxx;
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Nhap();
    XuLy();
    return 0;
}
