#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 10;
bool checkNT[MAXN];

void SangNT()
{
	checkNT[1] = true;
	for (int i = 2; i < MAXN; i++)
	{
		if (!checkNT[i])
		{
			for (int j = 2 * i; j < MAXN; j += i)
				checkNT[j] = true;
		}
	}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    if (fopen("TPRIME.INP", "r"))
    {
        freopen("TPRIME.INP", "r", stdin);
        freopen("TPRIME.OUT", "w", stdout);
    }
    SangNT();
    long long n;
    cin >> n;
    int cnt=0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(!checkNT[i])
	{
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
