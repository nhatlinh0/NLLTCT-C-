#pragma once
void NhapMang(int* &a, int n);
void XuatMang(int* a, int n);
void TinhGiaTriLonNhat(int* a, int n);
void TinhTong(int* a, int n);
void DemCacSoDuong(int* a, int n);
void DemSoLanXuatHienCuaX(int* a, int n, int x);

void NhapMang(int* &a, int n)
{
	srand((int)time(NULL));
	for (int i = 0; i < n; i++)
	{
		
		*(a+i)= -20 + rand() % (41);
	}
	
}

void XuatMang(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << *(a + i) << "\t";
	}
}

void TinhGiaTriLonNhat(int* a, int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (*(a + i) > max)
		{
			max = *(a+i);
		}
	}
	cout << "\nGia tri lon nhat:" << max;
}

void TinhTong(int* a, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + *(a + i);
	}
	cout << "\nTong cua mang: " << sum;
}

void DemCacSoDuong(int* a, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (*(a + i) > 0)
			dem++;
	}
	cout << "\nTat ca so duong trong day la:" << dem;
}

void DemSoLanXuatHienCuaX(int* a, int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (*(a + i) == x)
			dem++;
	}
	cout << "\nSo lan xuat hien cua " << x <<"la:" << dem;
}