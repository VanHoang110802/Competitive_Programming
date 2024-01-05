#include <iostream>
using namespace std;

int Limak, Bob, cnt = 0;

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> Limak >> Bob;
	while(Limak <= Bob)
    {
        cnt++;
        Limak *= 3;
        Bob *= 2;
    }
    cout << cnt;
    return 0;
}
