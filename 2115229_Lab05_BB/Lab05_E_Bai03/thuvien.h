#pragma once
typedef int Dayso[100];
void NhapMang(Dayso a, int n);
void XuatMang(Dayso a, int n);
void HoanVi(int &a, int &b);
void Cau1(Dayso a, int n);
void Cau2(Dayso a, int n);
void Cau3(Dayso a, int n);
void Cau4(Dayso a, int n);
void Cau5(Dayso, int n);
bool KiemTraSoNT(int n);

void NhapMang(Dayso a, int n)
{
	srand((int)time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = -20 + rand() % (20 + 1 + 20);	//sinh so ngau nhien [-20..20]
	}
}

void XuatMang(Dayso a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}

void HoanVi(int &a, int &b)
{
	int tam;
	tam = a;
	a = b;
	b = tam;
}

void Cau1(Dayso a, int n)
{
	for (int i=0; i<n-1; i++)
	{
			for (int j = i+1; j < n; j++)
			{
				if (a[i] > a[j] && a[i]>0)
					HoanVi(a[i], a[j]);
			}

		
	}
}

void Cau2(Dayso a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
			if (a[j] == 0)
				HoanVi(a[j], a[n - 1]);
			if (a[i] == 0)
				HoanVi(a[i], a[n - 1]);
		}
	}
}

void Cau3(Dayso a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if ((a[i] != 0 && a[j] == 0) || (a[i] < 0 && a[j]<0 && a[i]>a[j]) || (a[i] > 0 && a[j] < 0) ||(a[i]>0&&a[j]>0&&a[i]>a[j]))
				HoanVi(a[i],a[j]);
			
		}
		
	}
}

void Cau4(Dayso a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if ((a[i] % 2 == 0 && a[j] % 2 != 0) ||
				(a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] > a[j]) ||
				(a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] < a[j]))
				HoanVi(a[i], a[j]);
			
		}
	}
}

void Cau5(Dayso a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
			if ((!KiemTraSoNT(a[i]) && KiemTraSoNT(a[j])) ||
				(KiemTraSoNT(a[i]) && KiemTraSoNT(a[j]) && a[i] < a[j]) ||
				(!KiemTraSoNT(a[i]) && !KiemTraSoNT(a[j]) && a[i] < a[j]))
				HoanVi(a[i],a[j]);
	}

}

bool KiemTraSoNT(int n)
{
	if (n <= 1)
		return false;
	else if (n == 2)
		return true;
	else
	{
		int m = sqrt(n);
		for (int i = 2; i <= m; i++)
			if (n % i == 0)
				return false;
		return true;
	}
}