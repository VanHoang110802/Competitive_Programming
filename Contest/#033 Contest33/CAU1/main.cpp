/*
Hàm asin() trong C++ trả về sin nghịch đảo của một số tính bằng radian.
Cho rằng đối số nằm trong phạm vi [-1, 1], hàm asin() trả về giá trị trong phạm vi [-π/2, π/2].
Nếu đối số lớn hơn 1 hoặc nhỏ hơn -1, asin() trả về NaN, tức là không phải là một số.

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	double a, alpha, h; cin >> a >> alpha >> h;
	double temp = alpha * (2*asin(1) / 180.000);
    cout << fixed << setprecision(3) << a * tan(temp) + h;
	return 0;
}
