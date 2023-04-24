#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, Dayso a, int &n);

void XuatMenu()
{
	cout << endl << "===================CHON CHUC NANG====================";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap mang tu dong";
	cout << endl << "2.Sap xep cac so duong tang dan, cac so khac giu nguyen thu tu";
	cout << endl << "3.Sap cac phan tu sao cho so 0 nam o cuoi mang, cac so khac o dau mang va tang dan";
	cout << endl << "4.Sap cac phan tu sao cho so 0 nam o dau mang, so am o giua va giam dan, so duong o cuoi va tang dan";
	cout << endl << "5.Sap cac so le nam o dau mang va tang dan, cac so chan nam o cuoi mang giam dan";
	cout << endl << "6.Sap cac so nguyen to o dau mang va tang, cac so con lai nam o cuoi va giam dan";
	cout << endl << "7.Xem du lieu day so";
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

void XuLyMenu(int menu, Dayso a, int &n)
{

	switch (menu)
	{

	case 0:
		system("CLS");
		cout << endl << "\nThoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "Nhap mang tu dong";
		cout << "\nNhap kich thuoc mang:";
		cin >> n;
		NhapMang(a, n);
		XuatMang(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "Sap xep cac so duong tang dan, cac so khac giu nguyen thu tu";
		cout << "\nMang truoc khi sap xep\n";
		XuatMang(a, n);
		cout << "\nMang sau khi sap xep\n";
		Cau1(a, n);
		XuatMang(a, n);
		break;
	case 3:
		system("CLS");
		cout << endl << "Sap cac phan tu sao cho so 0 nam o cuoi mang, cac so khac o dau mang va tang dan";
		cout << "\nMang truoc khi sap xep\n";
		XuatMang(a, n);
		cout << "\nMang sau khi sap xep\n";
		Cau2(a, n);
		XuatMang(a, n);
		break;
	case 4:
		system("CLS");
		cout << endl << "Sap cac phan tu sao cho so 0 nam o dau mang, so am o giua va giam dan, so duong o cuoi va tang dan";
		cout << "\nMang truoc khi sap xep\n";
		XuatMang(a, n);
		cout << "\nMang sau khi sap xep\n";
		Cau3(a, n);
		XuatMang(a, n);
		break;
	case 5:
		system("CLS");
		cout << endl << "Sap cac so le nam o dau mang va tang dan, cac so chan nam o cuoi mang giam dan";
		cout << "\nMang truoc khi sap xep\n";
		XuatMang(a, n);
		cout << "\nMang sau khi sap xep\n";
		Cau4(a, n);
		XuatMang(a, n);
		break;
	case 6:
		system("CLS");
		cout << endl << "Sap cac so nguyen to o dau mang va tang, cac so con lai nam o cuoi va giam dan";
		cout << "\nMang truoc khi sap xep\n";
		XuatMang(a, n);
		cout << "\nMang sau khi sap xep\n";
		Cau5(a, n);
		XuatMang(a, n);
		break;
	case 7:
		system("CLS");
		cout << endl << "Xem du lieu day so";
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		break;
	}
	_getch();
}