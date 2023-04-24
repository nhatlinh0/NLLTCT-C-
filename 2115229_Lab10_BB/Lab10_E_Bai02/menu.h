#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, int n);

void XuatMenu()
{
	cout << endl << "===================CHON CHUC NANG====================";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Tinh tong do le duong";
	cout << endl << "2. Tinh tich so le duong ";
	cout << endl << "3. Tinh tong 1+(1.2)+(1.2.3) + ...+ (1.2...n) ";
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
	int sum = 0;
	int product = 1;
	int P =1, S=0;
	switch (menu)
	{

	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Tinh tong do le duong\n";
		cout << TinhTongSoLeDuong(n, sum);
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Tinh tich so le duong \n";
		cout << TichSoLe(n, product);
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Tinh tong 1+(1.2)+(1.2.3) + ...+ (1.2...n) \n";
		cout << Cau3(n, P, S);
		break;
	
	
	}
	_getch();
}