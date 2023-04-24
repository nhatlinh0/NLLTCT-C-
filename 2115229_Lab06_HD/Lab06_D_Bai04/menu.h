#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTranVuong a, MaTranVuong b, MaTranVuong c, int& n);

void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap ma tran vuong";
	cout << endl << "2. Xem ma tran vuong";
	cout << endl << "3. Tinh tong 2 ma tran cung cap";
	cout << endl << "4. Tinh hieu 2 ma tran cung cap";
	cout << endl << "5. Tich 2 ma tran";
	cout << endl << "==========================================";
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

void XuLyMenu(int menu, MaTranVuong a, MaTranVuong b, MaTranVuong c, int& n)
{
	
	switch (menu)
	{
		
	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		
		system("CLS");
		cout << endl << "1. Nhap ma tran vuong";
		cout << "\nNhap kich thuoc ma tran";
		cin >> n;
		cout << "\nNhap ma tran a";
		NhapMaTran(a, n);
		cout << "\nNhap ma tran b";
		NhapMaTran(b, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Xem ma tran vuong";
		cout << "\nMa tran a";
		XuatMaTran(a, n);
		cout << "\nMa tran b";
		XuatMaTran(b, n);
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Tinh tong 2 ma tran ";
		TinhTong_2_MaTran(a, b, c, n);
		XuatMaTran(c, n);
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Hieu 2 ma tran";
		TinhHieu_2_MaTran(a, b, c, n);
		XuatMaTran(c, n);
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Tinh tich 2 ma tran";
		TinhTich_2_MaTran(a, b, c, n);
		XuatMaTran(c, n);
		break;
		
	}
	_getch();
}
