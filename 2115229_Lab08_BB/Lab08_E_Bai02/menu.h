#pragma once

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, thuebao a[100], int& n);

void XuatMenu()
{
	cout << endl << "===================CHON CHUC NANG====================";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1.Nhap danh sach thue bao";
	cout << endl << "2.Xuat danh sach thue bao";
	cout << endl << "3. Tim SDT khi biet ten ";
	cout << endl << "4. Tim thong tin thue bao khi biet SDT";
	cout << endl << "5. Xuat cac thue bao co cung dia chi";
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

void XuLyMenu(int menu, thuebao a[100], int& n)
{

	switch (menu)
	{

	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "1.Nhap danh sach thue bao";
		cout << "\nNhap so luong thue bao ";
		cin >> n;
		NhapDSTB(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "2.Xuat danh sach thue bao";
		XuatDSTB(a, n);
		break;
	case 3:
		char Ten[50];
		system("CLS");
		cout << endl << "3. Tim SDT khi biet ten ";
		cout << "\nNhap ho va ten";
		gets_s(Ten,50);
		TimSDT(a, n, Ten);
		break;
	case 4:
		char SDT[12];
		system("CLS");
		cout << endl << "4. Tim thong tin thue bao khi biet SDT";
		cout << "\nNhap SDT:";
		gets_s(SDT, 12);
		TimTBKhiBietSDT(a, n, SDT);
		break;
	case 5:
		char DC[100];
		system("CLS");
		cout << endl << "5. Xuat cac thue bao co cung dia chi";
		cout << "\nNhap dia chi";
		gets_s(DC, 100);
		cout << "\nCac thue bao co cung dia chi:";
		CacTBCungDiaChi(a, n, DC);
		break;
	
	}
	_getch();
}


