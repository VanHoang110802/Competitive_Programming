#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int p, n;
int64_t d, b, a[120000];
set<pair<int64_t, int64_t> > ss;

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> p >> n >> d >> b;
    for(int i = 0; i < n; ++i) cin >> a[i];
    if(p == 1)
    {
        int lb = -1, rb = n;
        while(rb - lb > 1)
        {
            int mid = (lb + rb) >> 1;
            ss.clear();
            for(int i = 0; i < n; ++i)
                if(a[i]) ss.insert({i, a[i]});
            int fl = 0;
            for(int i = mid; !fl && i < n; ++i)
            {
                int x = i;
                int64_t t = i + 1, nd = b;
                while(nd)
                {
                    auto it = ss.lower_bound({x - d * t, 0});
                    if (it == ss.end() || it->first > x + d * t)
                    {
                        fl = 1;
                        break;
                    }
                    int64_t go = min(nd, it->second);
                    nd -= go;
                    pair<int64_t,int64_t>nw= {it->first,it->second-go};
                    ss.erase(it);
                    if (nw.second) ss.insert(nw);
                }
            }
            if (fl) lb = mid;
            else rb = mid;
        }
        cout << rb << "\n";
    }
    else
    {
        int lb = -1;
        int rb = (n + 1) / 2;
        while (rb - lb > 1)
        {
            int mid = (lb + rb) >> 1;
            ss.clear();
            for (int i = 0; i < n; ++i)
                if (a[i]) ss.insert({i, a[i]});
            int fl = 0;
            for (int i = mid; !fl && i * 2 < n; ++i)
            {
                int x = i, y = n - 1 - i;
                int64_t t = i + 1, nd = b;
                while (nd)
                {
                    auto it = ss.lower_bound({x - d * t, 0});
                    if (it==ss.end()||it->first>x+d*t)
                    {
                        fl = 1;
                        break;
                    }
                    int64_t go = min(nd, it->second);
                    nd -= go;
                    pair<int64_t,int64_t> nw = {it->first,it->second- go};
                    ss.erase(it);
                    if (nw.second) ss.insert(nw);
                }
                if (!fl && x != y)
                {
                    int64_t nd = b;
                    while (nd)
                    {
                        auto it=ss.lower_bound({y+d*t+1,0});
                        if (it==ss.begin()||prev(it)->first<y-d*t)
                        {
                            fl = 1;
                            break;
                        }
                        --it;
                        int64_t go = min(nd, it->second);
                        nd -= go;
                        pair<int64_t, int64_t> nw= {it->first,it->second-go};
                        ss.erase(it);
                        if (nw.second) ss.insert(nw);
                    }
                }
            }
            if (fl) lb = mid;
            else rb = mid;
        }
        cout << rb;
    }
    return 0;
}
