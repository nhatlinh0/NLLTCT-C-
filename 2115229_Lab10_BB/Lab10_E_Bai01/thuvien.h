#pragma once
int DaoNguocSo(int n);
int DemSoLuongChuSo(int n, int dem);
int SoLonNhat(int n, int &kq);
void DoiNhiPhan(int n);
int TimSoDauTien(int n);


int DaoNguocSo(int n)
{
	
	if (n <= 10)
		return n;
	if (n > 10)
		cout << n % 10;
		return DaoNguocSo(n / 10);

 }

int DemSoLuongChuSo(int n, int dem)
{
	if (n < 10)
	{
		cout << dem + 1;
		return dem;
	}
	if (n >= 10)
	{
		dem++;
		return DemSoLuongChuSo(n / 10, dem);
	}

}

int SoLonNhat(int n, int &kq)
{
	int m;
	m = n % 10;
	if (n == 0)
		return kq;
	else
	{
		
		if (m > kq)
			kq = m;
	}
	return SoLonNhat(n / 10, kq);
	
}

void DoiNhiPhan(int n)
{
	if (n != 0)
	{
		cout << n % 2;
		return DoiNhiPhan(n / 2);
	}
}

int TimSoDauTien(int n)
{
	if (n <10)
		return n;
	else
		TimSoDauTien(n / 10);
}

