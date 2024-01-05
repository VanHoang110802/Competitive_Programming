#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string a, b;

int main()
{
	ios_base::sync_with_stdio(0);
	cin >> a >> b;
	transform(a.begin(), a.end(), a.begin(), ::tolower);
	transform(b.begin(), b.end(), b.begin(), ::tolower);
	if(a == b) cout << 0 << '\n';
	else if(a < b) cout << -1 << '\n';
	else cout << 1 << '\n';
	return 0;
}
