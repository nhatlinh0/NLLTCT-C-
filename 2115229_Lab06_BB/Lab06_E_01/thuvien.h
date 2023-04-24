#pragma once
#define MAX 100

#define TAB '\t'

typedef int MaTranVuong[MAX][MAX];
void NhapMaTran(MaTranVuong a, int n);
void XuatMaTran(MaTranVuong a, int n);


void NhapMaTran(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++) // hang i
		for (j = 0; j < n; j++) //cot j
		{
			cout << "\na[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
}
void XuatMaTran(MaTranVuong a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		cout << '\n';
		for (j = 0; j < n; j++)
			cout << a[i][j] << TAB;
	}
}
double Tim_SoDuong_Min_Hangi(MaTranVuong a, int n, int i)
{
	double min = 0;//Phan tu dau tien cua dong i
	for (int j = 0; j < n; j++)
	{
		if (min <= 0 && a[i][j] > 0)
			min = a[i][j];
		else if (min > a[i][j] && a[i][j] > 0)
			min = a[i][j];
	}
	return min;
}

double TinhTongS(MaTranVuong a, int n)
{
	double min, tong = 0;
	//Tim so duong nho nhat cua moi hang
	for (int i = 0; i < n; i++)
	{
		min = Tim_SoDuong_Min_Hangi(a, n, i);
		tong += min;
	}
	return tong;
}

double Tim_SoAm_Max_Cotj(MaTranVuong a, int n, int j)
{
	double max = 0; //Phan tu dau tien cua cot j
	for (int i = 0; i < n; i++)
	{
		if (max >= 0 && a[i][j] < 0)
			max = a[i][j];
		else if (max < a[i][j] && a[i][j] < 0)
			max = a[i][j];
	}
	return max;
}

double TinhTongT(MaTranVuong a, int n)
{
	double max, tong = 0;
	for (int j = 0; j < n; j++)
	{
		max = Tim_SoAm_Max_Cotj(a, n, j);
		tong += max;
	}
	return tong;
}
