// Viết hàm đệ quy tính số hạng thứ n của dãy Fibo

#include <iostream>
using namespace std;

int DeQuy(int n)
{
    if(n == 0 || n == 1) return 1;
    return DeQuy(n - 1) + DeQuy(n - 2);
}

//int Fibo_KhuDeQuy(int n)
//{
//	int f0, f1, fn;
//	f0 = f1 = 1;
//	if(n == 0 || n == 1)
//	{
//		return 1;
//	}
//	for(int i = 2; i<=n;++i)
//	{
//		fn = f0 + f1;
//		f0 = f1;
//		f1 = fn;
//	}
//	return fn;
//}

int main()
{
    int n = 5;
    cout << DeQuy(n);
    return 0;
}
