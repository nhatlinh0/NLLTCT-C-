#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTranVuong a, int& n);


void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap ma tran vuong";
	cout << endl << "2. Xem ma tran vuong";
	cout << endl << "3. Tinh tong cac phan tu duong nho nhat cua i ";
	cout << endl << "4. Tinh tong cac phan tu am lon nhat cua j ";
	cout << endl << "============================================== ";
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
void XuLyMenu(int menu, MaTranVuong a, int& n)
{
	double ketQua = 0;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Nhap ma tran vuong";
		cout << "\nNhap cap ma tran vuong : n = ";
		cin >> n;
		NhapMaTran(a, n);
		cout << "\nMa tran vuong vua nhap:\n";
		XuatMaTran(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Xem ma tran vuong";
		cout << "\nMa tran vuong hien hanh:\n";
		XuatMaTran(a, n);

		break;
	case 3:
		system("CLS");
		cout << endl << "3. Tinh tong cac phan tu duong nho nhat cua i ";
		cout << "\nMa tran hien co la:\n";
		XuatMaTran(a, n);
		ketQua = TinhTongS(a, n);
		cout << "\nTong cac phan tu so duong nho nhat cua moi hang la " << ketQua;
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Tinh tong cac phan tu am lon nhat cua j";
		cout << "\nMa tran hien co la:\n";
		XuatMaTran(a, n);
		ketQua = TinhTongT(a, n);
		cout << "\nTong cac phan tu so am lon nhat cua moi cot la " << ketQua;
		break;
	default:
		break;
	}
	_getch();
}



