#pragma once

typedef int Dayso[100];

void NhapMang(Dayso a, int n);
void XuatMang(Dayso a, int &n);
void DemSoCo3ChuSo(Dayso a, int n);
void DemCacSoNamNgoaiPhamVi(Dayso a, int n);
void DemSoLanXuatHien(Dayso a, int& n, int vt, int x);

void NhapMang(Dayso a, int n)
{
	
	srand((unsigned int)time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = 50+rand()%(200+1-50);		//sinh so ngau nhien [50..200]
	}
}

void XuatMang(Dayso a, int &n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}

void DemSoCo3ChuSo(Dayso a, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (99 < a[i] && a[i] < 1000)
			dem++;
	}
	cout << "\nSo luong so co 3 chu so la:" << dem;
}

void DemCacSoNamNgoaiPhamVi(Dayso a, int n)
{
	int min, max, dem = 0;
	cout << "\nNhap min va max:";
	cin >> min >> max;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < min || max < a[i])
			dem++;
	}
	cout << "\nCac so nam ngoai pham vi [min..max] cho truoc:" << dem;
}

void DemSoChinhPhuong(Dayso a, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i] == pow(j, 2))
				dem++;
		}
	}
	cout << "\nSo luong so chinh phuong la:" << dem;
}

void DemSoLanXuatHien(Dayso a, int &n, int vt, int x)
{
	int dem = 0;
	if (0 < vt && vt < n)
	{
		for (int i = vt - 1; i < n; i++)
		{
			if (a[i] == x)
			{
				dem++;
			}
		}
	}
	cout << "\nSo lan xuat hien cua "<< x << "tu vi tri " << vt << " la " << dem;
} 