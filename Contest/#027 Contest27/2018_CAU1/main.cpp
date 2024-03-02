#include <bits/stdc++.h>
using namespace std;

const long long s = 1e9;
const int MAXN = 1e7;
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
    if (fopen("CAU1.INP", "r"))
    {
        freopen("CAU1.INP", "r", stdin);
        freopen("CAU1.OUT",  "w", stdout);
    }
    SangNT();
    int n; cin >> n;
    while(true)
    {
        n++;
        int temp_n = n;
        int tong = 0;
        while(temp_n > 0)
        {
            int temp = temp_n % 10;
            temp_n /= 10;
            tong += pow(temp, 2);
        }
        if(!checkNT[tong])
        {
            cout << n;
            break;
        }
    }
    // 16 = 1^2 + 6^2 = 1 + 36 = 37
    return 0;
}
