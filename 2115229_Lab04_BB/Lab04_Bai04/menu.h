#pragma once

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);

void XuatMenu()
{
	cout << "\n             HE THONG CHUC NANG";
	cout << "\n===============================================";
	cout << "\n0. Thoat khoi chuong trinh ";
	cout << "\n1. Xuat tat ca ca uoc so cua n ";
	cout << "\n2. Dem so luong cac uoc so cua n ";
	cout << "\n3. Tinh tong cac uoc so cua n ";
	cout << "\n4. Tim so lon nhat nho hon hoac bang n ma la luy thua cua 2 ";
	cout << "\n5. Kiem tra n co phai so hoan hao ";
	cout << "\n===============================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap mot so (<=0 " << soMenu<<")";
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
		cout << "\n Thoat khoi chuong trinh ";
		return ;
	case 1: 
		cout << "\n Xuat tat ca ca uoc so cua n ";
		CauA();
		break;
	case 2:
		cout << "\n Dem so luong cac uoc so cua n ";
		CauB();
		break;
	case 3:
		cout << "\n Tinh tong cac uoc so cua n ";
		CauC();
		break;
	case 4:
		cout << "\n Tim so lon nhat nho hon hoac bang n ma la luy thua cua 2 ";
		CauD();
		break;
	case 5:
		cout << "\n Kiem tra n co phai so hoan hao ";
		CauE();
		break;

	}
	_getch();
}