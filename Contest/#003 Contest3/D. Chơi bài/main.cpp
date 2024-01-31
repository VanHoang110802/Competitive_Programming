/*
Bài này ta có thể dùng mảng đếm dem[] để đánh dấu các quân bài mà Tùng và Dương sở hữu.
d[i] = 0 nếu như Tùng có quân giá trị i
d[i] = 1 nếu như Dương có quân giá trị i
Theo ví dụ của đề bài cho, ta có thể thấy được rằng: 
d[] = 0 1 1 0
idx	= 1 2 3 4

nếu như mà mảng d[] có nhiều số 1 liên tiếp hơn thì Dương sẽ thắng, và ngược lại.
Nếu bằng nhau thì ta sẽ đi xét d[n]
Tìm đoạn liên tiếp dài nhất toàn số 1
Tìm đoạn liên tiếp dài nhất toàn số 0
So sánh để đưa ra input

*/

#include <iostream>
using namespace std;
const long long slpt = 1e6+10;
long long n, dem[slpt], x, t, max_1 = -1, max_2 = -1;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n;
	for (long long i = 1; i <= n/2; ++i)
	{
		cin >> x;
		dem[x]++;
	}

	t = 0; max_1 = 0;
	for (long long i = 1; i <= n; ++i)
	{
		if (dem[i] == 1) t++;
		else t = 0;
		if (t > max_1) max_1 = t;
	}

	t = 0; max_2 = 0;
	for (long long i = 1; i <= n; ++i)
	{
		if (dem[i] == 0) t++;
		else t = 0;
		if (t > max_2) max_2 = t;
	}

	if (max_1>max_2) cout << "DUONG";
	else
	{
		if (max_1 < max_2) cout << "TUNG";
		else
		{
			if (dem[n] == 1) cout << "DUONG";
			else cout << "TUNG";
		}
	}
	return 0;
}
