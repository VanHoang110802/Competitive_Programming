#include<bits/stdc++.h>
using namespace std;

long long n;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

bool KiemTraNguyenTo(long long n)
{
	if(n < 2)
    {
		return false;
	}
	else
	{
		if(n!= 2 && n % 2 == 0)
		{
			return false;
		}
		for(long long i=3;i*i<=n;i+=2)
		{
			if(n%i == 0)
			{
				return false;
			}
		}
	}
	return true;
}

void GiaiBai()
{
    cin >> n;
    if(KiemTraNguyenTo(n)) cout << "YES";
    else cout << "NO";
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
