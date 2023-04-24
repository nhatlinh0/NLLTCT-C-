#pragma once

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);

void XuatMenu()
{
	cout << "               HE THONG CHUONG TRINH";
	cout << "\n======================================================";
	cout << "\n0. Thoat khoi chuong trinh ";
	cout << "\n1. Kiem tra n co phai so nguyen to ";
	cout << "\n2. Xuat ra cac so nguyen tu 1 toi n  ";
	cout << "\n3. Dem luong so nguyen to trong pham vi tu 1 toi n ";
	cout << "\n4. Tinh tong cac uoc so nguyen to cua n ";
	cout << "\n5. Phan tich n thanh cac thua so nguyen to ";
	cout << "\n======================================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\n Nhap mot so (0<= " << soMenu << ") de chon menu";
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
		cout << "Thoat khoi chuong trinh";
		return;
	case 1:
		cout << "\n Kiem tra n co phai so nguyen to ";
		CauA();
		break;
	case 2:
		cout << "\n Xuat ra cac so nguyen tu 1 toi n  ";
		CauB();
		break;
	case 3:
		cout << "\n Dem luong so nguyen to trong pham vi tu 1 toi n ";
		CauC();
		break;
	case 4:
		cout << "\n Tinh tong cac uoc so nguyen to cua n ";
		CauD();
		break;
	case 5:
		cout << "\n Phan tich n thanh cac thua so nguyen to ";
		CauE();
		break;
	}
	_getch();
}