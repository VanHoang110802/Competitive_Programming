// hoangtvph31092

/*
KB Sự khác biệt
An nhận được một xâu S chỉ gồm các kí tự viết thường trong bảng chữ cái La Tinh (như bảng chữ cái tiếng Anh). An rất thích sự khác biệt nên muốn biến đổi xâu S sao cho mọi xâu con của nó trở thành khác nhau.
Một xâu gồm một số kí tự liên tiếp của xâu cho trước được gọi là xâu con
Ví dụ: xâu 'aba' có các xâu con: '' (xâu rỗng), 'a', 'b', 'a', 'ab', 'ba' và 'aba'.
Nếu có hai xâu con S trùng nhau thì An sẽ thay đổi các kí tự ở một số vị trí bằng các chữ cái viết thường khác. Việc thay đổi kí tự là công việc khá mệt mỏi nên An muốn số lần thay đổi là ít nhất có thể.
Yêu cầu: hãy xác định số lần thay đổi ít nhất sao cho tất cả xâu con của xâu S trở thành khác nhau hoặc cho biết việc thay đổi theo yêu cầu như trên là không thể thực hiện được.
Input
- Dòng đầu tiên ghi số ngyên n cho biết chiều dài của xâu S (1 <= n <= 255)
- Dòng thứ hai ghi xâu S gồm n kí tự viết thường.
Output: Nếu không thể biến đổi được xâu S sao cho tất cả xâu con của nó đều khác nhau thì ghi số -1. Ngược lại thì ghi số lần biến đổi ít nhất có thể.

Input 	Output 	Giải thích
2	1 	Có thể thay chữ đầu tiên bằng 'b'.
aa
4	2	Có thể thay kí tự đầu bằng 'b', thay kí tự thứ hai bằng 'c'
haha
6	0
friend

*/

/*
Vì An muốn tất cả chuỗi con S của mình đều khác nhau, mà chuỗi có 1 kí tự cũng là chuỗi con của S.
Vậy nên, tất cả kí tự trong chuỗi S đều phải khác nhau -> chuỗi s không thể nhiều hơn 26 kí tự (bảng tiếng anh có 26 chữ cái).
Nên là nếu mà nhiều hơn 26 kí tự xuất -1
Vì tất cả kí tự trong chuỗi s phải khác nhau nên chỉ cần kiểm tra số lượng từng kí tự, ta sẽ dùng mảng đếm d['a'...'z'] để đếm số lượng mỗi kí tự.
Rồi sau đó, duyệt mảng d['a'...'z'], nếu d[c] > 1 thì ta phải d[c] - 1 kí tự c bằng kí tự khác (chỉ giữ lại 1 kí tự)
Do đó ta tăng ans thêm d[c] - 1.
Tuy nhiên, với ngôn ngữ c không dùng được kí tự để làm chỉ số mảng được nên ta sẽ phải tạo d[97...122] để đếm, với d[(int)c]
đếm số lượng kí tự c.
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

const int MAX = 1e6 + 10;
string s;
long long n, a[MAX];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n >> s;
	if (n > 26)
	{
		cout << -1;
		return 0;
	}
	for (int i = 0; i < n; ++i)
	{
		a[(int)s[i]]++;
	}
	int cnt = 0;
	for (int i = 97; i < 123; ++i)
	{
		if (a[i] > 1)
		{
			cnt += (a[i] - 1);
		}
	}
	cout << cnt;
	return 0;
}
