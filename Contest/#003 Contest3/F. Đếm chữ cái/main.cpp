/*
Ta sẽ làm giống hệt bài trên, dùng một mảng d['A', ... 'Z'] để đếm số lần xuất hiện của 1 kí tự
Duyệt các kí tự của chuỗi, nếu gặp 1 kí tự là chữ cái viết hoa thì lập tức cập nhật dem[].
Sau khi cập nhật, ta duyệt dem[] và xuất ra các phần tử dem[c] > 0 (tức là nó có xuất hiện ký tự)
*/

#include <iostream>
#include <string>
using namespace std;
int dem[100];
string s;
int main()
{
	cin >> s;
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			dem[(int)s[i]]++;
		}
	}
	for (int i = 65; i <= 90; ++i)
	{
		if (dem[i] > 0)
		{
			cout << (char)i << ' ' << dem[i] << '\n';
		}
	}
	return 0;
}
