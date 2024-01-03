#include <iostream>
#include <string>
using namespace std;

#define int long long
int nb, ns, nc, pb, ps, pc, k;
string s;
int db, ds, dc, ans;

bool Check(int x)
{
    /// tinh voi x banh thi can bao nhieu B, can bao nhieu S va bao nhieu C
    int banhMy = x * db;
    int xucXich = x * ds;
    int phoMat = x * dc;
    /// tinh so B, S, C can mua them
    if(banhMy > nb) banhMy -= nb;
    else banhMy = 0;
    if(xucXich > ns) xucXich -= ns;
    else xucXich = 0;
    if(phoMat > nc) phoMat -= nc;
    else phoMat = 0;
    int soTien = banhMy * pb + xucXich * ps + phoMat * pc;
    return (soTien <= k);
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> s >> nb >> ns >> nc >> pb >> ps >> pc >> k;
    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] == 'B') db++;
        if(s[i] == 'S') ds++;
        if(s[i] == 'C') dc++;
    }
    int l = 0, r = k + nb + nc + ns;
    while(r - l > 1)
    {
        int m = (l + r) / 2;
        if(Check(m))
        {
            ans = m;
            l = m;
        }
        else
        {
            r = m;
        }
    }
    cout << ans << '\n';
    return 0;
}
