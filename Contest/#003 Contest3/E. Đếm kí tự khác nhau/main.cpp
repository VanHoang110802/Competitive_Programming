/*
Vẫn tiếp tục dùng mảng d[] để đếm số lần xuất hiện mỗi kí tự.
d[c] = số lần xuất hiện kí tự c
ta sẽ đi xét ví dụ: NANGKHIEUTINHOC có:
d['N'] = 3 vì có 3 kí tự N trong chuỗi
d['B'] = 0 vì trong chuỗi không có kí tự B
Ta đã biết rằng: mỗi kí tự đều có mang trong mình một mã acscii cố định.
Ví dụ như là: 'A' -> 65, 'B' -> 66, ... ,'Z' -> 90
Mảng nó sẽ chỉ được chấp nhận các idx là dạng số, chứ nếu mà là dạng kí tự sẽ rất khó để giải
Vậy ta sẽ khai báo mảng d[100] và sẽ mặc định cho các phần tử mảng = 0 hết
d[65] sẽ dùng để đếm kí tự A
d[66] sẽ dùng để đếm kí tự B
....
d[90] sẽ dùng để đếm kí tự Z

*/

#include <iostream>
#include <string>
using namespace std;
int t, temp, ans, dem[100];
string s;

int main()
{
	cin >> t;
	while (t--)
	{
		cin >> s;
		for (int i = 'A'; i <= 'Z'; ++i) // chương trình sẽ lập tức ép kiểu dữ liệu char về kiểu dữ liệu int, -> mã ascii
		{
			dem[i] = 0;
		}

		for (int i = 0; i < s.size(); ++i)
		{
			dem[s[i]]++;
		}

		ans = 0;
		for (int i = 'A'; i <= 'Z'; ++i)
		{
			if (dem[i] != 0)ans++;
		}
		cout << ans << '\n';
	}

	return 0;
}
