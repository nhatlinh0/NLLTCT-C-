#pragma once

typedef int Dayso [100];

void NhapMang(Dayso a, int n);
void XuatMang(Dayso a, int n);
int kiemTraNT(int x);
void ViTriSoNT(Dayso a, int n);
void PhanTuXuatHienNhieuNhat(Dayso a, int n);
void PhanTuNhoNhat(Dayso a, int n);
void TimSoAmLonNhat(Dayso a, int n);
void TimSoDuongNhoNhat(Dayso a, int n);


void NhapMang(Dayso a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}

void XuatMang(Dayso a, int n)
{
	cout << "Cac phan tu hien hanh\n";
	for (int i = 0; i < n; i++)
	{
		
		cout << a[i] << "\t";
	}
}

int kiemTraNT(int x )
{
	if (x <= 1)
		return 0;
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}

void ViTriSoNT(Dayso a, int n)
{
	int vt = 0;
	for (int i = 0; i < n; i++)
	{
		if (kiemTraNT(a[i]) == 1)
		{
			a[vt] = a[i];
			vt = i;
		}
	}
	cout << "\nVi tri so nguyen to cuoi cung trong mang a la:" << vt + 1;
	if (vt == 0)
	{
		system("CLS");
		XuatMang(a, n);
		cout << "\nKhong co so nguyen to nao trong mang a";
	}
}

void PhanTuXuatHienNhieuNhat(Dayso a, int n)
{
	int dem = 0, max = 0, x;
	for (int i = 0; i < n; i++)
	{
		dem = 0;
		for (int j = i; j < n; j++)
		{
			if (a[i] == a[j])
				dem = dem + 1;
		}
		if (max < dem)
		{
			max = dem;
			x = a[i];
		}
	}
	cout << "\nPhan tu xuat hien nhieu nhat trong mang a la:" << x;
	cout << "\nSo lan xuat hien la:" << max;
}

void PhanTuNhoNhat(Dayso a, int n)
{
	int min = a[0];
	int vt = 0;
	int i = 0;
	min = a[0];
	for (i = n - 1; i >=0;i--)
	{
		if (min >=a[i])
		{
			min = a[i];
			a[vt] = a[i];
			vt = i;
		}
	}
	
	cout << "\nPhan tu nho nhat trong mang la:" << min;
	cout << "\nCo vi tri dau tien la:" << vt + 1;
}

void TimSoAmLonNhat(Dayso a, int n)
{
	int max=0, vt = 0;
	for (;;)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] < 0)
			{
				max = a[i];
				vt = i;
			}
		}
		if (max == 0)
		{
			cout << "\nKhong co so am trong mang";
			return;
		}
		break;
	}
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max && a[i] < 0)
		{
			max = a[i];
			a[vt] = a[i];
			vt = i;
		}
	}
	cout << "\nSo am lon nhat trong mang la:" << max;
	cout << "\nCo vi tri:" << vt + 1;
}

void TimSoDuongNhoNhat(Dayso a, int n)
{
	int min = 0, vt = 0;
	for (;;)
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i] > 0)
			{
				min = a[i];
				vt = i;
			}
		}
		if (min == 0)
		{
			cout << "\nKhong co so nguyen duong nao trong mang";
			return;
		}
		break;
	}

	for (int i = 0; i < n; i++)
	{
		if (min > a[i] && a[i] > 0)
		{
			min = a[i];
			vt = i;
		}
		
	}
	cout << "\nSo duong nho nhat trong mang la:" << min;
	cout << "\nCo vi tri:" << vt + 1;
}