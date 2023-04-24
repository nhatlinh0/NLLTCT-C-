#pragma once
#define SIZE 5

typedef int MaTran [SIZE][SIZE];

void XuatMang(MaTran a, int n);
void NhapMang(MaTran a, int n);
void HoanVi(int &a, int &b);
void HoanVi2Cot(MaTran a, int n, int j, int h);
void MaTranHoanVi(MaTran a, MaTran b, int n);


void XuatMang(MaTran a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n";
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << "\t";
		}
	}
}

void NhapMang(MaTran a, int n)
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

void HoanVi2Cot(MaTran a, int n, int j, int h)
{
	for (int i = 0; i < n; i++)
	{
		HoanVi(a[i][j], a[i][h]);
	}
}

void HoanVi2Hang(MaTran a, int n, int i, int k)
{
	for (int u = 0; u < n; u++)
	{
		HoanVi(a[i][u], a[k][u]);
	}
}

void MaTranHoanVi(MaTran a, MaTran b, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			HoanVi(a[i][j], b[j][i]);
		}
	}
}


void HoanVi(int &a, int &b)
{
	int tam ;
	tam = a;
	a = b;
	b = tam;
}

