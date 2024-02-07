#include<bits/stdc++.h>
using namespace std;

long long n;

void XuLyNhanh()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void GiaiBai()
{
    cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int k = 1; k <= i; k++)
		{
			cout << "@";
		}
		cout << '\n';
	}
}

int main()
{
    XuLyNhanh();
    GiaiBai();
    return 0;
}
