#pragma once

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);

void XuatMenu()
{
	cout << "=He Thong Chuc Nang=";
	cout << "\n0. thoat khoi chuong trinh";
	cout << "\n1. Xuat cac so tu 1 toi n";
	cout << "\n2. Cac so chia het cho 3 nhung khong chia het cho 4";
	cout << "\n3. Dem so luong chu so cua n";
	cout << "\n4. Dao nguoc so";
	cout << "\n5. Tinh tong cac chu so trong n";
	cout << "\n6. Cho biet chu so dau tien trong n";
	cout << "\n7. Tim so nguyen lon nhat sao cho tong 1+2+..+m<=n";
}

int ChonMenu(int soMenu)
{
	int stt;
		for (;;)
		{
			system("CLS");
			XuatMenu();
			cout << "\nNhap mot stt (1<= stt <=" << soMenu << ")";
			cin >> stt;
			if (0 <= stt && stt <= soMenu)
				break;
	    }
		return stt;
}

void XuLyMenu(int menu)
{
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat khoi chuong trinh";
		return;
		break;
	case 1:
		cout << "\n1. Xuat cac so tu 1 toi n ";
		CauA();
		break;
	case 2:
		cout << "\n2. Cac so chia het cho 3 nhung khong chia het cho 4 ";
		CauB();
		break;
	case 3:
		cout << "\n3. Dem so luong chu so cua n ";
		CauC();
		break;
	case 4:
		cout << "\n4.Dao nguoc so ";
		CauD();
		break;
	case 5:
		cout << "\n5. Tinh tong cac chu so trong n ";
		CauE();
		break;
	case 6:
		cout << "\n6. Cho biet chu so dau tien trong n ";
		CauF();
		break;
	case 7:
		cout << "\n7. Tim so nguyen lon nhat sao cho tong 1+2+..+m<=n ";
		CauG();
		break;
	}
	_getch();
}
