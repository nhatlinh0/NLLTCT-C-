#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, ChuoiDong a, int n);

void XuatMenu()
{
	cout << endl << "===================CHON CHUC NANG====================";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Xem chuoi ";
	cout << endl << "2. Dem so khoang trang";
	cout << endl << "3. Tim vi tri xuat hien cua chuoi b trong chuoi a";
	cout << endl << "4. Tim vi tri xuat hien dau tien cua x";
	cout << endl << "5. Doi vi tri cua tu dau va tu cuoi";
	cout << endl << "6. Doi ky tu dau tien sang chu hoa";
	cout << endl << "7. Liet ke tung ky tu va so lan xuat hien ";
	cout << endl << "8. Dem so tu ";
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
		cin.ignore();
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, ChuoiDong a, int n)
{
	char b[100];
	char x;
	switch (menu)
	{

	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Xem chuoi ";
		
		XuatChuoi(a);
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Dem so khoang trang";
		DemSoLuongKhoangTrang(a, n);
		break;
	case 3:
		system("CLS");
		cout << endl << "Tim vi tri xuat hien cua chuoi b trong chuoi a";
		cout << "\nNhap Chuoi b:";
		gets_s(b, 100);
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Tim vi tri xuat hien dau tien cua x";
		cout << "\nNhap x:";
		cin >> x;
		TimViTriDauTien(a, n, x);
		XuatChuoi(a);
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Doi vi tri cua tu dau va tu cuoi\n";
		DaoVTTuDauVaCuoi(a);
		break;
	case 6:
		system("CLS");
		cout << endl << "6. Doi ky tu dau tien sang chu hoa\n";
		DoiKyTuDau(a, n);
		XuatChuoi(a);
		break;
	case 7:
		system("CLS");
		cout << endl << "7. Liet ke tung ky tu va so lan xuat hien ";
		LietKeTungKyTu(a, n);
		break;
	case 8:
		system("CLS");
		cout << endl << "8. Dem so tu ";
		DemSoTu(a, n);
		break;
	}
	_getch();
}
