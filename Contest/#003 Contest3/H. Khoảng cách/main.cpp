/*
DISTANCE Khoảng cách
Hai xâu kí tự được gọi là bạn bè của nhau nếu ta có thể sắp xếp các ký tự của một xâu để được xâu còn lại. 
Ví dụ: xâu 'banbe' là bạn bè của xâu 'beban', tuy nhiên xâu 'laptrinh' không phải là bạn bè của xâu 'thuattoan' (vì chữ ‘t’ chỉ xuất hiện 1 lần trong 'laptrinh' nhưng xuất hiện đến 3 lần trong xâu 'thuattoan').
Khoảng cách giữa hai xâu ký tự là số ký tự ít nhất cần phải xóa (trên cả hai xâu) để hai xâu còn lại là bạn bè của nhau. 
Ví dụ, khoảng cách giữa hai xâu 'ptnk' và 'thpt' là 4, còn khoảng cách giữa hai xâu 'tin' và 'hoc' là 6.
Yêu cầu: hãy tính khoảng cách giữa hai xâu cho trước.
Input: gồm 2 dòng, mỗi dòng chứa một xâu kí tự chỉ gồm các chữ cái tiếng Anh thường, mỗi dòng có không quá 10^6 ký tự.

Kết quả: một số nguyên duy nhất là độ đo giữa hai xâu trong file dữ liệu.
Giới hạn: 50% số test mỗi dòng có không quá 100 ký tự.

Input 	Output
begin	4
end

*/

/*
Để mà chuỗi A thành bạn bè của chuỗi B thì số lượng kí a, b, c, ..., z phải là bằng nhau.
Đếm số lượng mỗi loại kí tự xuất hiện trên chuỗi A, chuỗi B, xem chuỗi nào có nhiều kí tự cùng loại hơn chuỗi kia thì xóa đi
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

const int MAX = 1e6 + 10;
string s1, s2;
long long dem1[MAX], dem2[MAX], ans = 0;
int main()
{
	getline(cin, s1);
	getline(cin, s2);
	for (int i = 0; i < s1.length(); ++i)
	{
		dem1[(int)s1[i]]++;
	}
	for (int i = 0; i < s2.length(); ++i)
	{
		dem2[(int)s2[i]]++;
	}
	for (int i = 97; i <= 122; ++i)
	{
		ans += abs(dem1[i] - dem2[i]);
	}
	cout << ans;
	return 0;
}
