#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTranVuong a, MaTranVuong b, int n);

void XuatMenu()
{
	cout << endl << "===================CHON CHUC NANG====================";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap ma tran a va b";
	cout << endl << "2. Tong 2 ma tran: ";
	cout << endl << "3. Tinh Hieu 2 ma tran ";
	cout << endl << "4. Tinh Tich 2 ma tran ";
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

void XuLyMenu(int menu, MaTranVuong a, MaTranVuong b, int n)
{
	MaTranVuong c, d, e;
	switch (menu)
	{

	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Nhap ma tran a va b";
		NhapMaTran(a, n, 'a');
		XuatMaTran(a, n);
		NhapMaTran(b, n, 'b');
		XuatMaTran(b, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Tong 2 ma tran: ";
		c = TinhTong_2_MaTran(a, b, n);
		XuatMaTran(c, n);
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Tinh Hieu 2 ma tran ";
		d = TinhHieu_2_MaTran(a, b, n);
		XuatMaTran(d, n);
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Tinh Tich 2 ma tran ";
		e = TinhTich_2_MaTran(a, b, n);
		XuatMaTran(e, n);
		break;
	}
	_getch();
}
