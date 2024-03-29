/*
Đề bài: Nhập vào mảng 2 chiều các số nguyên,
xuất ra mảng vừa nhập và thực hiện các thao
tác sau:
a/ Tính tổng các phần tử của mảng.
b/ Tìm Min - Max của mảng.
c/ Đếm số lượng các số chẵn trong mảng.
d/ Sắp xếp mảng tăng dần/giảm dần theo chiều từ trên xuống dưới, từ trái qua phải.

Yêu cầu: Làm hoàn toàn bằng đệ quy.
*/
#include <iostream>
#include <limits.h>
using namespace std;

void NhapMang(int **a, int dong, int cot, int i = 0)
{
	if(i == dong * cot)
	{
		return; // Kết thúc.
	}
	cout << "\na[" << i / cot << "][" << i % cot << "] = ";
	cin >> a[i / cot][i % cot];
	NhapMang(a, dong, cot, i + 1);
}

void XuatMang(int **a, int dong, int cot, int i = 0)
{
	if(i == dong * cot)
	{
		return;
	}
	if(i % cot == 0)
	{
		cout << '\n';
	}
	cout << " " << a[i / cot][i % cot];
	XuatMang(a, dong, cot, i + 1);
}

int TinhTong(int **a, int dong, int cot, int i = 0, int Tong = 0)
{
	if(i == dong * cot)
	{
		return Tong;
	}
	return TinhTong(a, dong, cot, i + 1, Tong + a[i / cot][i % cot]);
}

int TimMin(int **a, int dong, int cot, int i = 0, int Min = INT_MAX)
{
	if(i == dong * cot)
	{
		return Min;
	}
	return TimMin(a, dong, cot, i + 1, a[i / cot][i % cot] < Min ? a[i / cot][i % cot] : Min);
}

int TimMax(int **a, int dong, int cot, int i = 0, int Max = INT_MIN)
{
	if(i == dong * cot)
	{
		return Max;
	}
	return TimMax(a, dong, cot, i + 1, a[i / cot][i % cot] > Max ? a[i / cot][i % cot] : Max);
}

int DemSoLuongSoChan(int **a, int dong, int cot, int i = 0, int dem = 0)
{
	if(i == dong * cot)
	{
		return dem;
	}
	return DemSoLuongSoChan(a, dong, cot, i + 1, a[i / cot][i % cot] % 2 == 0 ? dem + 1 : dem);
}

void HoanVi(int &a, int &b)
{
	int Temp = a;
	a = b;
	b = Temp;
}

void SapTangDan(int **a, int dong, int cot, int i = 0)
{
	if(i == dong * cot - 1)
	{
		return;
	}

	for(int k = i + 1; k < dong * cot; k++)
	{
		if(a[i / cot][i % cot] > a[k / cot][k % cot])
		{
			HoanVi(a[i / cot][i % cot], a[k / cot][k % cot]);
		}
	}

	SapTangDan(a, dong, cot, i + 1);
}

void SapGiamDan(int **a, int dong, int cot, int i = 0)
{
	if(i == dong * cot - 1)
	{
		return;
	}

	for(int k = i + 1; k < dong * cot; k++)
	{
		if(a[i / cot][i % cot] < a[k / cot][k % cot])
		{
			HoanVi(a[i / cot][i % cot], a[k / cot][k % cot]);
		}
	}

	SapGiamDan(a, dong, cot, i + 1);
}

int main()
{
	int dong = 3, cot = 3;

	int **a = new int*[dong]; // Cấp phát số dòng.

	// Với mỗi dòng thì cấp phát số cột tương ứng.
	for(int i = 0; i < dong; i++)
	{
		a[i] = new int[cot];
	}

	NhapMang(a, dong, cot);
	XuatMang(a, dong, cot);

	cout << "\nTong la: " << TinhTong(a, dong, cot);
	cout << "\nMin = " << TimMin(a, dong, cot) << "\nMax = "  << TimMax(a, dong, cot);
	cout << "\nSo luong so chan = " << DemSoLuongSoChan(a, dong, cot);

	SapGiamDan(a, dong, cot);
	cout << "\nMang sau khi sap giam dan la: ";
	XuatMang(a, dong, cot);

	SapTangDan(a, dong, cot);
    cout << "\nMang sau khi sap tang dan la: ";
	XuatMang(a, dong, cot);

	// Giải phóng con trỏ cấp 2
	for(int i = 0; i < dong; i++)
	{
		delete[] a[i];
	}
	delete[] a;

	return 0;
}
