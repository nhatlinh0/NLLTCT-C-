#pragma once

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, Dayso a, int &n);

void XuatMenu()
{
	cout << "\n====================HE THONG CHUC NANG======================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Dem so luong so co 3 chu so";
	cout << "\n2. Dem cac so nam ngoai pham vi [min..max] cho truoc";
	cout << "\n3. Dem so luong so chinh phuong";
	cout << "\n4. Dem so lan xuat hien cua x tu vi tri vt cho truoc";
	cout << "\n5. Dem so luong cac duong chay trong day";
	cout << "\n6. Xem lai cac phan tu trong mang";
	cout << "\n7. Nhap mang tu dong";
	cout << "\n============================================================";
}
int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap mot so tu [0.." << soMenu << "] de chon chuc nang";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}
void XuLyMenu(int menu, Dayso a, int &n)
{
	switch (menu)
	{
	case 0:
		return;
		break;
	case 1:
		system("CLS");
		cout << "\nDem so luong so co 3 chu so\n";
		XuatMang(a, n);
		DemSoCo3ChuSo(a, n);
		break;
	case 2:
		system("CLS");
		cout << "\nDem cac so nam ngoai pham vi [min..max] cho truoc";
		XuatMang(a, n);
		DemCacSoNamNgoaiPhamVi(a, n);
		break;
	case 3:
		system("CLS");
		cout << "\nDem so luong so chinh phuong\n";
		XuatMang(a, n);
		DemSoChinhPhuong(a, n);
		break;
	case 4:
		int x, vt;
		system("CLS");
		cout << "\nDem so lan xuat hien cua x tu vi tri vt cho truoc";
		cout << "\nNhap x:";  cin >> x;
		cout << "\nNhap vi tri:"; cin >> vt;
		XuatMang(a, n);
		DemSoLanXuatHien(a, n, vt, x);
		break;
	case 5:
		
		system("CLS");
		cout << "\nDem so luong cac duong chay trong day";
		XuatMang(a, n);
		break;
	case 6:
		system("CLS");
		cout << "\nXem lai cac phan tu trong mang";
		XuatMang(a, n);
		break;
	case 7:
		system("CLS");
		cout << "\nNhap mot so nguyen duong:";
		cin >> n;
		NhapMang(a, n);
		cout << "\nCac phan tu vua nhap:";
		system("CLS");
		XuatMang(a, n);
		break;
	}
	_getch();
}

