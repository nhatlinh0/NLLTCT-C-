#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, char* filename, int a[100], NhanVien b[100], int& n);

void XuatMenu()
{
	cout << endl << "===================CHON CHUC NANG====================";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Chuyen du lieu tu tap tin sang mang 1 chieu (1)";
	cout << endl << "2. Chuyen du lieu tu tap tin sang mang 1 chieu (2)";
	cout << endl << "3. Chuyen du lieu tu tap tin sang mang cau truc";
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

void XuLyMenu(int menu, char* filename, int a[100], NhanVien b[100], int& n)
{

	switch (menu)
	{

	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Chuyen du lieu tu tap tin sang mang 1 chieu (1)";
		cout << "\nNhap ten tep:";
		cin >> filename;
		ChuyenTuTapTinSangMang1(filename, a, n);			//text1.txt
		cout << endl << n << endl;
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << "\t";
		}
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Chuyen du lieu tu tap tin sang mang 1 chieu (2)";
		cout << "\nNhap ten tep:";
		cin >> filename;
		ChuyenTuTapTinSangMang2(filename, a, n);			//text2.txt
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << "\t";
		}
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Chuyen du lieu tu tap tin sang mang cau truc";
		cout << "\nNhap ten tep:";
		cin >> filename;
		ChuyenDuLieuSangMangCauTruc(filename, b, n);		//text3.txt
		XuatTieuDe();
		XuatNV(b, n);
		XuatKeNgang();
		break;

	}
	_getch();
}