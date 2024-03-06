#include <bits/stdc++.h>
#define ll unsigned long long

using namespace std;

ll cnt = 0, nguyen = 0, spe = 1, sync = 0;

ll gcd(ll a, ll b)
{
    ll tmp;
    while(b != 0)
    {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int phan_nguyen(string s)
{
    ll ans = 0;
    for(int i = 0; i < s.size(); ++i)
        if(s[i] == '.') break;
        else ans = ans*10 + (int)(s[i]-'0');
    nguyen = ans;
    return ans;
}

int phan_thua(string s)
{
    ll ans = 0;
    int j = s.find('.', 0);
    if(j == -1) return ans;
    for(int i = j + 1; i < s.size(); ++i)
        if(s[i] == '(') break;
        else ans = ans*10 + (int)(s[i]-'0');
    return ans;
}

ll phan_ngoac(string s)
{
    ll ans = 0, v = 0;
    int j = s.find('.', 0), k = s.find('(', 0);
    if(j == -1) return ans;
    for(int i = j + 1; i < s.size(); ++i)
        if(s[i] == '(' || s[i] == ')') continue;
        else
        {
            ans = ans*10 + (int)(s[i]-'0');
            nguyen = nguyen*10 + (int)(s[i]-'0');
            //cout << nguyen << endl;
            //cout << nguyen << endl;
            spe *= 10;
            if(spe == 10) sync = (int)(s[i]-'0');
            if(i < k && k != -1) ++v;
            if(i > k && k != -1) cnt = cnt*10 + 9;
        }
    while(v--) cnt*=10;
    return ans;
}

int main()
{
    //freopen("phanso.inp", "r", stdin);
    //freopen("phanso.out", "w", stdout);
    string s;
    getline(cin, s);

    ll z = phan_nguyen(s), y = phan_thua(s), x = phan_ngoac(s), m = cnt;
    //cout << m << endl;
    if(m == 0)
    {
        ll a = nguyen;
        //cout << a << endl;
        if(spe == 10 && sync == 0) spe = 1, a /= 10;
        //cout << spe << endl;
        ll uc = gcd(a, spe);
        cout << a/uc << '/' << spe/uc;
        return 0;
    }
    ll a = x - y + z*m;
    //cout << a << endl;
    ll uc = gcd(a, m);
    //a += z*m;
    //cout << a << endl;
    //ll uc = gcd(a,m);
    //cout << uc << endl;
    cout << a/uc << '/' << m/uc;
}
