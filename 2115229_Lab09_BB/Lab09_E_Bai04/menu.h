#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, Sach a[10], BaoKhoaHoc b[10], TapChi c[10], LuanVan d[10], int& n);

void XuatMenu()
{
	cout << endl << "===================CHON CHUC NANG====================";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Kiem tra x nam trong mang a";
	cout << endl << "2. Tim vi tri dau tien x xuat hien trong a";
	cout << endl << "3. Kiem tra mang a la day tang";
	cout << endl << "4. Tim phan tu lon nhat";
	cout << endl << "5. Tim vi tri cuoi cung gia tri lon nhat xuat hien";
	cout << endl << "6. Neu a chua x thi cung chua -x";
	cout << endl << "7. Xem du lieu day so";
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

void XuLyMenu(int menu, Sach a[10], BaoKhoaHoc b[10], TapChi c[10], LuanVan d[10], int &n)
{
	int e = 0;
	switch (menu)
	{

	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Kiem tra x nam trong mang a";
		XuatDSTL(a, b, c, d, e);
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Tim vi tri dau tien x xuat hien trong a";
		//Bo sung sau
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Kiem tra mang a la day tang";
		//Bo sung sau
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Tim phan tu lon nhat";
		//Bo sung sau
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Tim vi tri phan tu lon nhat";
		//Bo sung sau
		break;
	case 6:
		system("CLS");
		cout << endl << "6. Neu a chua x thi cung chua -x";
		//Bo sung sau
		break;
	case 7:
		system("CLS");
		cout << endl << "7. Xem du lieu day so";
		cout << "\nDay so hien hanh:\n";
	
		break;
	}
	_getch();
}