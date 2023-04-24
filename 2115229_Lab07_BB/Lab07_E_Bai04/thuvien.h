#pragma once
typedef char String[100];

void SoLanxXuatHien(String a, char x);
void XuatCacGiaTriPhanBiet(String a);
void TimVTXuatHien(String a, char x);
int TimVTXuatHienCuaChuoi(String a, String b);
int DemSoTuTrongChuoi(String a);
void DaoTu(String s);

void SoLanxXuatHien(String a, char x)
{
	int dem = 0;
	for (int i = 0; a[i] != NULL; i++)
	{
		if (a[i] == x)
			dem++;
	}
	cout << "\nSo lan xuat hien cua x trong chuoi la:" << dem;
}


void XuatCacGiaTriPhanBiet(String a)
{
	int result = 0; 
	for (int i = 0; a[i]!=NULL; i++)
	{
		bool isOccur = false;  
		for (int j = 0; j < i; j++)
			if (a[i] == a[j])
			{
				isOccur = true; 
				break;
			}
		if (!isOccur) result++; 
	}
	cout<<"\nSo cac ky tu phan biet la:" << result;
	int dem = 0;

	for (int i = 0; a[i] != NULL; i++)
	{
		dem = 0;
		for (int j = 0; a[j] != NULL; j++)
		{
			if (a[i] == a[j])
				dem++;

		}
		cout << "\nSo lan xuat hien cua " << a[i] << " la:" << dem;
	}
}

void TimVTXuatHien(String a, char x)
{
	int vt = 0;
	int l;
	l=strlen(a);
	for (int i = l-1; i>=0; i--)
	{
		if (a[i] == x)
		{
			vt = i;
		}
			
	}
	cout << "\nVi tri xuat hien dau tien cua x la:" << vt+1;
}

int TimVTXuatHienCuaChuoi(String a, String b)
{
	int vt = -1;
	int la, lb;
	la = strlen(a);
	lb = strlen(b);
	for (int j =lb-1; j>=0; j--)
	{
		for (int i = la-1; i>=0; i--)
		{
			if (a[i] == b[j])
			{
				vt = i;
				break;
			}
		}
	}
	return vt+1;
}

int DemSoTuTrongChuoi(String a)
{
	int dem = 1;
	for (int i = 0; a[i] != NULL; i++)
	{
		if (a[i] == ' ' && a[i + 1] != ' ')
			dem++;
	}
	return dem;
}

