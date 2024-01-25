Tìm “một vị trí mà giá trị tại vị trí đó là giá trị nhỏ nhất” trong mảng một chiều các số thực.

#include <iostream>
using namespace std;
template <typename vanhoang>
void NhapMang(vanhoang *a, int n)
{
	for (int i = 0; i < n;++i)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}

template <typename vanhoang>
void XuatMang(vanhoang* a, int n)
{
	for (int i = 0; i < n;++i)
	{
		cout << a[i] << " ";
	}
}

template <typename vanhoang>
vanhoang TimViTriMin(vanhoang* a, int n)
{
	vanhoang min = a[0];
	vanhoang vitri = 0;
	for (int i = 0; i < n;++i)
	{
		if (a[i] < min)
		{
			min = a[i];
			vitri = i;
		}
	}
	return vitri;
}
int main()
{
	int n;
	do
	{
		cout << "\nNhap so luong phan tu: ";
		cin >> n;

		if (n < 1)
		{
			cout << "\nSo luong phan tu nhap khong hop le! Xin hay nhap lai!\n";
		}
	} while (n < 1);
	float* a = new float[n];
	NhapMang(a, n);
	XuatMang(a, n);
	float minvt = TimViTriMin(a, n);
	cout << "\nVi tri co so nho nhat trong mang: " << minvt + 1;
	delete[] a;
	return 0;
}
