#pragma once
#define size 5

typedef int MaTranVuong[size][size];
void NhapMang(MaTranVuong a, int n);
void XuatMang(MaTranVuong a, int n);
bool KTMaTranDoiXung(MaTranVuong a, int n);
int KTMaTranTamGiacTren(MaTranVuong a, int n);
int KTMaTranTamGiacDuoi(MaTranVuong a, int n);
bool KTMaTranCheo(MaTranVuong a, int n);
bool KTMaTranDonVi(MaTranVuong a, int n);

void NhapMang(MaTranVuong a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[<<" << i << "][" << j << "]=";
			cin >> a[i][j];
		}
	}
}

void XuatMang(MaTranVuong a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j]<<"\t";
		}
	}
}

bool KTMaTranDoiXung(MaTranVuong a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			if (a[i][j] != a[j][i])
				return false;
		
	}
	return true;
}

int KTMaTranTamGiacTren(MaTranVuong a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j=0; j < n; j++)
		{
			if (i > j)
			{
				if (a[i][j] != 0)
					return 0;
			}
		}
	}
	return 1;
}

int KTMaTranTamGiacDuoi(MaTranVuong a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i < j)
			{
				if (a[i][j] != 0)
					return 0;
			}
		}
	}
	return 1;
}

bool KTMaTranCheo(MaTranVuong a, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)

		{
			if (a[i][j] != a[j][i] && a[i][j] != 0 && a[j][i] != 0)
				return false;
		}
	}
	return true;
}

bool KTMaTranDonVi(MaTranVuong a, int n)
{
	for (int i = 0; i < n; i++)
		if (a[i][i] != 1)
			return false;
			

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)

		{
			if (a[i][j] != a[j][i] && a[i][j] != 0 && a[j][i] != 0)
				return false;
		}
	}
	return true;
}