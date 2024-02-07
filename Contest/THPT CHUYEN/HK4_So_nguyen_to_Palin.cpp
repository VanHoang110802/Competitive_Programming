#include<bits/stdc++.h>
using namespace std;

int n;
const int MAXN = 1e6;
bool isPrime[MAXN];

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void calcSieve()
{
    for(int i = 0; i <= MAXN;++i)
    {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= MAXN; ++i)
    {
        if(isPrime[i] == true)
        {
            for(int j = i * i; j <= MAXN; j += i)
                isPrime[j] = false;
        }
    }
}

bool KiemTraDoiXung(int n)
{
	ostringstream oss;
	oss << n;
	string s = oss.str();

	int len = s.size(); /// 5
	for (int i = 1; i <= len/2; i++)
        if (s[i - 1] != s[len - i])
            return false;

    return true;
}

void GiaiBai()
{
    calcSieve();
    cin >> n;
    for(int i=n;i>=2;--i)
    {
        if(isPrime[i] && KiemTraDoiXung(i))
        {
            cout << i;
            break;
        }
    }
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
