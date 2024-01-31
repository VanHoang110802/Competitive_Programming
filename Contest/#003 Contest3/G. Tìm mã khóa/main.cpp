/*
Với các số từ 0-9, chúng sẽ mang trong mình mã ascii từ 49...57
Ta sẽ dùng mảng đếm d[48...57] để đếm số lần xuất hiện của các chữ số trong xâu s1,
d[48] đếm chữ số 0,
d[49] đếm chữ số 1,
...
d[57] đếm chữ số 9
Tương tự tạo d2 cũng làm y như vậy.
Sau đó, cuối cùng là duyệt ngược từ '9' -> '0', xuất các chữ số có là d1[c] > 0 && d2[c] > 0 để thu được số lớn nhất
*/

#include <iostream>
#include <string>
using namespace std;
string s1, s2;
long long dem1[256], dem2[256];
int main()
{
	cin >> s1 >> s2;
	for (int i = 0; i <= s1.size(); ++i)
	{
		dem1[(int)s1[i]]++;
	}
	for (int i = 0; i <= s2.size(); ++i)
	{
		dem2[(int)s2[i]]++;
	}
	for (int i = 57; i >= 48; --i)
	{
		if (dem1[i] > 0 && dem2[i] > 0)
		{
			cout << (char)i;
		}
	}
	return 0;
}
