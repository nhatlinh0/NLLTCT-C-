#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, int* a, int n);

void XuatMenu()
{
	cout << endl << "===================CHON CHUC NANG====================";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap mang tu dong";
	cout << endl << "2. Xem mang";
	cout << endl << "3. Tinh gia tri lon nhat trong mang ";
	cout << endl << "4. Tinh tong cac phan tu trong mang ";
	cout << endl << "6. Dem so lan xuat hien cua x ";
	cout << endl << "=====================================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so khong khoang [0,..," << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, int* a, int n)
{
	int x;
	switch (menu)
	{

	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Nhap mang tu dong\n";
		NhapMang(a, n);
		XuatMang(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Xem mang\n";
		XuatMang(a, n);
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Tinh gia tri lon nhat trong mang ";
		TinhGiaTriLonNhat(a, n);
		cout << endl;
		XuatMang(a, n);
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Tinh tong cac phan tu trong mang ";
		TinhTong(a, n);
		cout << endl;
		XuatMang(a, n);
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Dem cac so duong trong day";
		DemCacSoDuong(a, n);
		cout << endl;
		XuatMang(a, n);
		break;
	case 6:
		system("CLS");
		cout << endl << "6. Dem so lan xuat hien cua x ";
		cout << "\nNhap x:";
		cin >> x;
		DemSoLanXuatHienCuaX(a, n, x);
		cout << endl;
		XuatMang(a, n);
		break;
	}
	_getch();
}