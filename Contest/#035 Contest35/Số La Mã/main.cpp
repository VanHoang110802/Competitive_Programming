#include <iostream>
#include <map>
using namespace std;

#define int long long
string soLaMa;
map<char, int> MAP;

void KhoiTaoGiaTri()
{
    MAP['I'] = 1;
    MAP['V'] = 5;
    MAP['X'] = 10;
    MAP['L'] = 50;
    MAP['C'] = 100;
    MAP['D'] = 500;
    MAP['M'] = 1000;
}

int LAMA(string s, int i = 0)
{
    if(i == s.size() - 1) return MAP[s[i]];
    else
    {
        if(MAP[s[i]] < MAP[s[i + 1]]) return ((-1 * MAP[s[i]]) + LAMA(s, i + 1));
        else return (MAP[s[i]] + LAMA(s, i + 1));
    }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    KhoiTaoGiaTri();
    cin >> soLaMa;
    cout << LAMA(soLaMa) << '\n';
    return 0;
}
