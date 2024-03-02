#include <bits/stdc++.h>
using namespace std;
const double epsilon = 1e-3;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    if(fopen("TAMGIAC.INP", "r"))
    {
        freopen("TAMGIAC.INP", "r", stdin);
        freopen("TAMGIAC.OUT", "w", stdout);
    }
	int tc; cin >> tc;
	while (tc != 0)
	{
		double a, b, c; cin >> a >> b >> c;
		double check = abs(a + b + c - 180) < epsilon;
		if (a > 0 && b > 0 && c > 0 && check)
		{
			if (a > 90 || b > 90 || c > 90) cout << "TU";
			else if (a == 90 || b == 90 || c == 90) cout << "VUONG";
			else cout << "NHON";
		}
		else cout << 0;
		tc--;
		cout << '\n';
	}
	return 0;
}
