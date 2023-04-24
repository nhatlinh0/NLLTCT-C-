#pragma once

typedef char String[100];

void ChuyenKT_Thuong(String a);
void ChuyenKT_Hoa(String a);
void DaoNguocChuoi(String a);
int ChuoiDoiXung(String a);

void ChuyenKT_Thuong(String a)
{
	for (int i = 0; a[i] != NULL; i++)
	{
		if ('A' <= a[i] && a[i] <= 'Z')
			a[i] = a[i] + 32;
	}
}

void ChuyenKT_Hoa(String a)
{
	for (int i = 0; a[i] != NULL; i++)
	{
		if ('a' <= a[i] && a[i] <= 'z')
			a[i] = a[i] - 32;
	}
}

void DaoNguocChuoi(String a)
{
	int l;
	l = strlen(a);
	for (int i = l; i >= 0; i--)
	{
		cout << a[i];
	}
}

int ChuoiDoiXung(String a)
{
	int l = strlen(a);
	for (int i = 0; i < l; i++)
	{
		if (a[i] != a[l - 1-i])
		{
			return 0;
		}
	}
	return 1;
}