#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTran a, int& n);

void XuatMenu()
{
	cout << endl << "\n===================CHON CHUC NANG====================";
	cout << endl << "\n0. Nhap ma tran";
	cout << endl << "\n1. Xem lai ma tran";
	cout << endl << "\n2. Hoan vi 2 cot j va h cua ma tran";
	cout << endl << "\n3. Hoan vi 2 hang i va k cua ma tran";
	cout << endl << "\n4. Tim ma tran hoan vi";
	cout << endl << "\n=====================================================";
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

void XuLyMenu(int menu, MaTran a, int& n)
{
	int j, k, i, h;
	switch (menu)
	{

	case 0:
		system("CLS");
		cout << endl << "\n0. Nhap ma tran";
		cout << "\nNhap kich thuoc ma tran";
		cin >> n;
		NhapMang(a, n);
		XuatMang(a, n);
		break;
	case 1:
		system("CLS");
		cout << endl << "\n1. Xem lai ma tran";
		XuatMang(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "\n2. Hoan vi 2 cot j va h cua ma tran";
		cout << "\nMa tran truoc khi hoan vi";
		XuatMang(a, n);
		do
		{
			cout << "\nNhap cot j";
			cin >> j;
			cout << "\nNhap cot h";
			cin >> h;
		} while (j < 0 || j >= n || h < 0 || h >= n);
		HoanVi2Cot(a, n, j, h);
		cout << "\nMa tran sau khi hoan vi";
		XuatMang(a, n);
		break;
	case 3:
		system("CLS");
		cout << endl << "\n3. Hoan vi 2 hang i va k cua ma tran";
		cout << "\nMa tran truoc khi hoan vi";
		XuatMang(a, n);
		do
		{
			cout << "\nNhap hang i";
			cin >> i;
			cout << "\nNhap hang k";
			cin >> k;
		} while (i < 0 || i >= n || k < 0 || k >= n);
		HoanVi2Hang(a, n, i, k);
		cout << "\nMa tran sau khi hoan vi";
		XuatMang(a, n);
		break;
	case 4:
		system("CLS");
		cout << endl << "\n4. Tim ma tran hoan vi";
		MaTran b;
		cout << "\nNhap kich thuoc ma tran";
		cin >> n;
		NhapMang(a, n);
		XuatMang(a, n);
		MaTranHoanVi(a,b,n);
		cout << "\n";
		XuatMang(b, n);
		break;
	}
	_getch();
}

