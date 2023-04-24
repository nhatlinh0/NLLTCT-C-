#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);

void XuatMenu()
{
	cout << "\n=====================HE THONG CHUC NANG=============================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Tinh e mu x ";
	cout << "\n2. Tinh sin(x) ";
	cout << "\n3. Tinh cos(x) ";
	cout << "\n====================================================================";
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
	double x;
	switch (menu)
	{
	case 0:
		cout << "\n Thoat khoi chuong trinh\n";
		return;
		break;
	case 1:
		cout << "\n Tinh e mu x ";
		cout << "\nNhap x";
		cin >> x;
		cout<<EMuX(x);
		break;
	case 2:
		cout << "\n Tinh sin(x) ";
		cout << "\nNhap x";
		cin >> x;
		cout << SinX(x);
		break;
	case 3:
		cout << "\n Tinh cos(x) ";
		cout << "\nNhap x";
		cin >> x;
		cout << CosX(x);
		break;
	}
	_getch();
}