#pragma once
struct NgayThangNam
{
	unsigned int Ngay;
	unsigned int Thang;
	unsigned int Nam;
};
struct NhanVien
{
	char MaNV[8];
	char Ho[8];
	char tLot[8];
	char Ten[8];
	NgayThangNam ntn;
	char DiaChi[10];
	unsigned int Luong;
};
int ChuyenTuTapTinSangMang1(char* filename, int a[100], int& n);
int ChuyenTuTapTinSangMang2(char* filename, int a[100], int& n);
int ChuyenDuLieuSangMangCauTruc(char* filename, NhanVien b[100], int& n);
void Xuat1NV(NhanVien b);
void XuatTieuDe();
void XuatKeNgang();


int ChuyenTuTapTinSangMang1(char* filename, int a[100], int& n)
{
	ifstream in(filename);
	if (!in)
	{
		cout << "\nLoi mo file!";
		return 0;
	}
	in >> n;
	for (int i = 0; i < n; i++)
	{
		in >> a[i];
		
	}
	in.close();
	return 1;
}

int ChuyenTuTapTinSangMang2(char* filename, int a[100], int& n)
{
	ifstream in(filename);
	if (!in)
	{
		cout << "\nLoi mo file!";
		return 0;
	}
	n = 0;
	while (!in.eof())
	{
		in >> a[n];
		n++;
	}
	in.close();
	return 1;
}

int ChuyenDuLieuSangMangCauTruc(char* filename, NhanVien b[100], int& n)
{
	ifstream in(filename);
	if (!in)
	{
		cout << "\nLoi mo file!";
		return 0;
	}
	n = 0;
	while (!in.eof())
	{
		in >> b[n].MaNV;
		in >> b[n].Ho;
		in >> b[n].tLot;
		in >> b[n].Ten;
		in >> b[n].ntn.Ngay;
		in >> b[n].ntn.Thang;
		in >> b[n].ntn.Nam;
		in >> b[n].DiaChi;
		in >> b[n].Luong;
		n++;
	}
	
	in.close();
	return 1;
	
}

void Xuat1NV(NhanVien b)
{
	
	cout << setiosflags(ios::left)
		<<":"
		<< setw(10) << b.MaNV
		<<":"
		<< setw(8) << b.Ho
		<< setw(8) << b.tLot
		<< setw(8) << b.Ten
		<<":"
		<< setw(4) << b.ntn.Ngay
		<< setw(4) << b.ntn.Thang
		<< setw(6) << b.ntn.Nam
		<<":"
		<< setw(16) << b.DiaChi
		<<":"
		<< setw(8) << setiosflags(ios::fixed) << b.Luong
		<< ":";
}

void XuatTieuDe()
{
	XuatKeNgang();
	cout << endl;
	cout << setiosflags(ios::left)
		<< ":"
		<< setw(10) << "MaNV"
		<< ":"
		<< setw(8) << "Ho"
		<< setw(8) << "TLot"
		<< setw(8) << "Ten"
		<< ":"
		<< setw(14) << "NTNSinh"
		<< ":"
		<< setw(16) << "Dia chi"
		<< ":"
		<< setw(8) << "Luong"
		<< ":";
	XuatKeNgang();
}

void XuatKeNgang()
{
	cout << endl;
	cout << setiosflags(ios::left)
		<< ":";
	for (int i = 1; i <= 76; i++)

	{
		cout << "=";
	}
	cout << ":";
}

void XuatNV(NhanVien b[100], int& n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		Xuat1NV(b[i]);
	}
}