#pragma once

struct sinhvien
{
	char MSSV[8];
	char HoVaTen[27];
	unsigned int NamSinh;
	char Lop[11];
	double DTB;
	char XepLoai[6];
};
void XuatKeNgang();
void XuatTieuDe();
void Xuat1SV(sinhvien p);
void XuatDSSV(sinhvien a[100], int n); 
void XuatKeDon();
void XuatDSTheoLop(sinhvien a[100], int n);
void HoanVi(sinhvien& a, sinhvien& b);
void SapXepTheoLop(sinhvien a[100], int n);
void SapXepGiamDanTheoDTB(sinhvien a, int n);
void SapXepTangDanTheoTen(sinhvien a[100], int n);
void ThongTinSVCoTen(sinhvien a[100], int n, char Ten[27]);
void XuatSVCoDTBCaoNhat(sinhvien a[100], int n);
void XepLoaiHocLuc(sinhvien a[100], int n);

void XuatKeNgang()
{
	int i;
	cout << "\n";
	cout << setiosflags(ios::left)
		<< ':';
	for (i = 1; i <= 76; i++)
		cout << '=';
	cout << ':';
}

void XuatTieuDe()
{
	XuatKeNgang();
	cout << endl;
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(8) << "Ma SV"
		<< ':'
		<< setw(29) << "Ho va ten"
		<< ':'
		<< setw(10) << "Nam sinh"
		<< ':'
		<< setw(9) << "Lop "
		<< ':'
		<< setw(5) << "DTB"
		<< ":"
		<< setw(10) << "XLoai"
		<< ":";
	XuatKeNgang();
}



void Xuat1SV(sinhvien p)
{
	cout << setiosflags(ios::left)
		<< ':'
		<< setw(8) << p.MSSV
		<< ':'
		<< setw(29) << p.HoVaTen
		<< ':'
		<< setw(10) << p.NamSinh
		<< ':'
		<< setw(9) << p.Lop 
		<< ':'
		<< setw(5)  << setiosflags(ios::fixed) << setprecision(1) <<p.DTB
		<< ":"
		<< setw(10) << p.XepLoai
		<< ":";
}

void XuatDSSV(sinhvien a[100], int n)
{
	int dem = 0;
	XuatTieuDe();
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		Xuat1SV(a[i]);
		dem++;
		if (dem == 5)
		{
			cout << endl;
			XuatKeDon();
			dem = 0;
		}
	}
	XuatKeNgang();
}

void XuatKeDon()
{
	cout<< setiosflags (ios::left);
	cout << ":";
	for (int i = 1; i <= 76; i++)
		cout<<"-";
	cout << ":";
}

void SapXepTheoLop(sinhvien a[100], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (strcmp(a[i].Lop , a[j].Lop) > 0)
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
	XuatDSTheoLop(a, n);
}

void HoanVi(sinhvien &a, sinhvien &b)
{
	sinhvien tam;
	tam = a;
	a = b;
	b = tam;
}
void XuatDSTheoLop(sinhvien a[100], int n)
{
	XuatTieuDe();
	for (int i = 0; i < n-1; i++)
	{
		cout << endl;
		Xuat1SV(a[i]);
		if (strcmp(a[i].Lop, a[i + 1].Lop) != 0)
		{
			cout << endl;
			XuatKeDon();
		}
	}
	cout << endl;
	Xuat1SV(a[n - 1]);
	XuatKeNgang();
}

void SapXepGiamDanTheoDTB(sinhvien a[100], int n)
{
	XuatTieuDe();
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i].DTB < a[j].DTB)
			{
				HoanVi(a[i], a[j]);
			}


		}
	}
	XuatDSSV(a, n);
}
	
void SapXepTangDanTheoTen(sinhvien a[100], int n)
{
	XuatTieuDe();
	for (int k = 0; k < n - 1; k++)
	{
		for (int l = k + 1; l < n; l++)
		{
			if (_strcmpi(a[k].HoVaTen, a[l].HoVaTen) > 0)
				HoanVi(a[k], a[l]);
		}
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (_strcmpi(a[i].HoVaTen, a[j].HoVaTen) == 0)
			{
				if (_strcmpi(a[i].MSSV, a[j].MSSV) >0)
				{
					HoanVi(a[i], a[j]);
				}
			}
				
		}
	}


	
	XuatDSSV(a, n);
}

void ThongTinSVCoTen(sinhvien a[100], int n, char Ten[27])
{
	int i;
	int dem = 0;
	
	for (i = 0; i < n; i++)
	{
		if (_strcmpi(a[i].HoVaTen, Ten) == 0)
			dem++;
			
	}
	if (dem==0)
	{
		cout << "\nKhong co sinh vien nao ten " << Ten;
		return;
	}
	if (dem > 0)
	{
		cout << "\nCo " << dem << " sinh vien co ten " << Ten << endl;
		XuatTieuDe();
		for (i = 0; i < n; i++)
		{
			if (_strcmpi(a[i].HoVaTen, Ten) == 0)
			{

				cout << endl;
				
				Xuat1SV(a[i]);
				
			}
		}
		XuatKeNgang();
	}
}

void XuatSVCoDTBCaoNhat(sinhvien a[100], int n)
{
	double max = 0;
	int kq = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].DTB > max)
		{
			max = a[i].DTB;
			kq = i;
		}
	}
	XuatTieuDe();
	cout << endl;
	Xuat1SV(a[kq]);
	XuatKeNgang();
}

void XepLoaiHocLuc(sinhvien a[100], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (0.0 <= a[i].DTB && a[i].DTB < 4.0)
		{
			strcpy_s(a[i].XepLoai, "Kem");
		}
		if (4.0 <= a[i].DTB && a[i].DTB < 5.5)
		{
			strcpy_s(a[i].XepLoai, "Yeu");
		}
		if (5.5 <= a[i].DTB && a[i].DTB < 7.0)
		{
			strcpy_s(a[i].XepLoai, "TB");
		}
		if (7.0 <= a[i].DTB && a[i].DTB < 8.5)
		{
			strcpy_s(a[i].XepLoai, "Kha");
		}
		if (8.5 <= a[i].DTB && a[i].DTB <= 10.0)
		{
			strcpy_s(a[i].XepLoai, "Gioi");
		}
	}
	XuatTieuDe();
	XuatDSSV(a, n);
}