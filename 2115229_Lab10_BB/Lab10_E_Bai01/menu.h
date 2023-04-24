#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, int n);

void XuatMenu()
{
	cout << endl << "===================CHON CHUC NANG====================";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Dao nguoc so nguyen duong";
	cout << endl << "2. Dem so luong chu so trong n";
	cout << endl << "3. Tim chu so lon nhat";
	cout << endl << "4. Doi so nguyen duong sang nhi phan";
	cout << endl << "5. Chu so dau tien cua n:";
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

void XuLyMenu(int menu, int n)
{
	int dem = 0;
	int kq = 0;
	switch (menu)
	{

	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Dao nguoc so nguyen duong";
		cout << n;
		cout << "\nSau khi dao nguoc so:";
		cout << DaoNguocSo(n);
		
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Dem so luong chu so trong n";
		cout << "\nSo luong chu so cua " << n << " la:";
		DemSoLuongChuSo(n, dem);
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Tim chu so lon nhat";
		cout<<"\nSo lon nhat trong n la:"<<SoLonNhat(n, kq);
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Doi so nguyen duong sang nhi phan\n";
		cout << "\nSo nhi phan cua n la:";
		DoiNhiPhan(n);
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Chu so dau tien cua n:";
		cout <<"\nChu so dau tien cua n la:" << TimSoDauTien(n);
		break;
	
	}
	_getch();
}