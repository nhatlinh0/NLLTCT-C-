#pragma once
void NhapMang(Dayso a, int n);
void XuatMang(Dayso a, int n);
int KiemTraNT(int x);
void NhapMangTuDong(Dayso a, int n);
void TinhTongCacPhanTu(Dayso a, int n);
void TinhTongBinhPhuong(Dayso a, int n);
void TinhDoLechMax(Dayso a, int n);
void TinhTongSoNT(Dayso a, int n);

void NhapMangTuDong(Dayso a, int n)
{
	srand((int)time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = 0 + rand() % (100 + 1 - 0);	//random [0..100]
	}
}
void XuatMang(Dayso a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
}

void NhapMang(Dayso a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}

void TinhTongCacPhanTu(Dayso a, int n)
{
	int tong = 0, tbc = 0;
	for (int i = 0; i < n; i++)
	{
		tong = (tong + a[i]);
	}
	tbc = tong / 2;
	cout << tbc;
}

void TinhTongBinhPhuong(Dayso a, int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong = tong + pow(a[i], 2);
	}
	cout << tong;
}

void TinhDoLechMax(Dayso a, int n)
{
	int max = 0, temp;
	for (int i = 0; i < n - 1; i++)
	{
		temp = 0;
		temp = abs(a[i] - a[i + 1]);
		if (temp > max)
		{
			max = temp;
		}
	}
	cout << "\n" << max;
}

void TinhTongSoNT(Dayso a, int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		if ((KiemTraNT(a[i]) == 1) && (10 <= a[i] && a[i] <= 99))
		{
			tong = tong + a[i];
		}
	}
	cout << "\n" << tong;
}

int KiemTraNT(int x)
{
	if (x < 1)
		return 0;
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
			return 0;
	}
	return 1;
}