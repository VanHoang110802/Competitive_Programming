//  Hàm tính căn bậc 3 của 1 số thực có thể cài đặt đệ quy theo 2 hàm exp và ln

#include <iostream>
#include <math.h>
using namespace std;
float DeQuy(float x)
{
	if(x == 0) return 0;
	if(x < 0) return (-DeQuy(-x));
	return (exp((log(x)/3)));
}
int main()
{
    int n = 27;
    cout << DeQuy(n);
    return 0;
}
