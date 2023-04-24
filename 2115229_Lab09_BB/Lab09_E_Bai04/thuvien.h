#pragma once
struct Sach
{
	char MaTaiLieu[11];
	char TuaDe[20];
	unsigned int NamXB;
	char Ho[11];
	char Ten[11];
	char NhaXB[20];
	long int Gia;
};

struct BaoKhoaHoc
{
	char MaTaiLieu[11];
	char TuaDe[20];
	unsigned int NamXB;
	char Ho[11];
	char Ten[11];
	char NhaXB[20];
	long int Gia;
};

struct TapChi
{
	char MaTaiLieu[11];
	char TuaDe[20];
	unsigned int NamXB;
	char NhaXB[20];
	long int Gia;
};

struct LuanVan
{
	char MaTaiLieu[11];
	char TuaDe[20];
	unsigned int NamXB;
	char Ho[11];
	char Ten[11];
	long int Gia;
};

void Nhap1TL(Sach a, BaoKhoaHoc b, TapChi c, LuanVan d, int& n);

void Nhap1TL(Sach a, BaoKhoaHoc b, TapChi c, LuanVan d, int &e)
{
	cout << "\n 1.Sach" << endl << "2.Bao Khoa Hoc" << endl << "3.Tap Chi" << endl << "4.Luan van";
	cin >> e;
	
	switch (e)
	{
	case 1:
		cout << "\nNhap ma tai lieu";
		cin.ignore();
		gets_s(a.MaTaiLieu, 11);
		
		cout << "\nNhap tua de";
		gets_s(a.TuaDe, 20);
		
		cout << "\nNhap Nam Xb";
		cin >> a.NamXB;
		cin.ignore();

		cout << "\nNhap Ho";
		gets_s(a.Ho,11);


		cout << "\nNhap ten";
		gets_s(a.Ten,11);


		cout << "\nNhap Nha xuat ban";
		gets_s(a.NhaXB, 20);
	

		cout << "\nNhap gia";
		cin >> a.Gia;
		cin.ignore();
		break;
	case 2:
		cout << "\nNhap ma tai lieu";
		cin.ignore();
		gets_s(b.MaTaiLieu, 11);
		
		cout << "\nNhap tua de";
		gets_s(b.TuaDe, 20);

		cout << "\nNhap Nam Xb";
		cin >> b.NamXB;
		cin.ignore();

		cout << "\nNhap Ho";
		gets_s(b.Ho, 11);

		cout << "\nNhap ten";
		gets_s(b.Ten, 11);
	
		cout << "\nNhap Nha xuat ban";
		gets_s(b.NhaXB, 20);
	
		cout << "\nNhap gia";
		cin >> b.Gia;
		cin.ignore();
		break;

	case 3:
		cout << "\nNhap ma tai lieu";
		cin.ignore();
		gets_s(c.MaTaiLieu, 11);
	
		cout << "\nNhap tua de";
		gets_s(c.TuaDe, 20);

		cout << "\nNhap Nam Xb";
		cin >> c.NamXB;
		cin.ignore();

		cout << "\nNhap Nha xuat ban";
		gets_s(c.NhaXB, 20);
	
		cout << "\nNhap gia";
		cin >> c.Gia;
		cin.ignore();
		break;
	case 4:
		cout << "\nNhap ma tai lieu";
		cin.ignore();
		gets_s(d.MaTaiLieu, 11);
		
		cout << "\nNhap tua de";
		gets_s(d.TuaDe, 20);
	
		cout << "\nNhap Nam Xb";
		cin >> d.NamXB;
		cin.ignore();

		cout << "\nNhap Ho";
		gets_s(d.Ho, 11);
	
		cout << "\nNhap ten";
		gets_s(d.Ten, 11);
		
		cout << "\nNhap gia";
		cin >> d.Gia;
		cin.ignore();
		break;
	}
}

void XuatDSTL(Sach a[10], BaoKhoaHoc b[10], TapChi c[10], LuanVan d[10] ,int &n)
{
	int e = 0;
	for (int i = 0; i < n; i++)
	{
		Nhap1TL(a[i], b[i], c[i], d[i], e);
	}
}