#pragma once
typedef char* ChuoiDong;



void XuatChuoi(ChuoiDong a);
void DemSoLuongKhoangTrang(ChuoiDong a, int n);
void TimViTriXuatHienCuaChuoi(ChuoiDong a, char b[100]);
void TimViTriDauTien(ChuoiDong a, int n, char b);
void DaoVTTuDauVaCuoi(ChuoiDong &a);
void DoiKyTuDau(ChuoiDong a, int n);
void LietKeTungKyTu(ChuoiDong a, int n);
void DemSoTu(ChuoiDong a, int n);



void XuatChuoi(ChuoiDong a)
{
	for (int i = 0; *(a + i) != NULL; i++)
		cout << *(a+i);
}
void DemSoLuongKhoangTrang(ChuoiDong a, int n)
{
	int dem = 0;
	for (int i = 0; *(a+i) != NULL; i++)
	{
		
		if (*(a + i) == ' ')
		{
			dem++; 
		}
	}
	cout << "\nSo luong khoang trang la:" << dem;
}

void TimViTriXuatHienCuaChuoi(ChuoiDong a, char b[100])
{
	
	
}

void TimViTriDauTien(ChuoiDong a, int n, char x)
{
	int vt = 0;
	for (int i = 0; *(a + i) != NULL; i++)
	{
		if (*(a + i) == x)
		{
			vt = i;
			break;
		}
	}
	cout << "\nVi tri dau tien cua " << x << " la: " << vt;
}

void DaoVTTuDauVaCuoi(ChuoiDong &a)
{
	char x, y, *temp;
	temp = new char[2];
	int l;
	l = strlen(a);
	
	*temp = *(a + l - 1);
	*(a + l - 1) = *(a+0);
	*(a + 0)= *temp;
	XuatChuoi(a);
}

void DoiKyTuDau(ChuoiDong a, int n)
{
	if ('a' <= *a && *a <= 'z')
	{
		*a = *a - 32;
	}
	
}

void LietKeTungKyTu(ChuoiDong a, int n)
{
	int dem = 0;
	for (int i = 0; *(a + i) != NULL; i++)
	{
		dem = 0;
		for (int j = 0; a[j]!= NULL; j++)
		{
			if (*(a + i)== a[j]);
			{
				dem++;
				
				
			}
		}
		cout << "\nSo lan xuat hien:" << dem;
	}
}

void DemSoTu(ChuoiDong a, int n)
{
	int dem = 0;
	for (int i = 0; *(a + i) != NULL; i++)
	{
		dem++;
	}
	cout << "\nSo tu trong chuoi la: " << dem;
}