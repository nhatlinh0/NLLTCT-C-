#pragma once



void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, MaTranVuong a, int& n);

void XuatMenu()
{
	cout << endl << "\n===================CHON CHUC NANG====================";
	cout << endl << "\n0. Nhap ma tran vuong";
	cout << endl << "\n1. Xem lai ma tran vuong";
	cout << endl << "\n2. Kiem tra ma tran co la ma tran doi xung";
	cout << endl << "\n3. Kiem tra ma tran co la ma tran tam giac tren";
	cout << endl << "\n4. Kiem tra ma tran co la ma tran tam giac duoi";
	cout << endl << "\n5. Kiem tra ma tran co la ma tran cheo";
	cout << endl << "\n6. Kiem tra ma tran co la ma tran don vi";
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
		if (0 <= stt & stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, MaTranVuong a, int& n)
{
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0. Nhap ma tran vuong";
		cout << "\nNhap kich thuoc";
		cin >> n;
		NhapMang(a, n);
		break;
	case 1:
		system("CLS");
		cout << endl << "\n1. Xem ma tran";
		cout << "\nMa tran hien hanh\n";
		XuatMang(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "\n2. Kiem tra ma tran co la ma tran doi xung";
		XuatMang(a, n);
		if (KTMaTranDoiXung(a, n))
			cout << "\nLa ma tran doi xung";
		if (!KTMaTranDoiXung(a, n))
			cout << "\nKhong la ma tran doi xung";
		break;
	case 3:
		system("CLS");
		cout << endl << "\n3. Kiem tra ma tran co la ma tran tam giac tren";
		XuatMang(a, n);
		if (KTMaTranTamGiacTren(a, n) == 1)
			cout << "\nLa ma tran tam giac tren";
		else
			cout << "\nKhong la ma tran tam giac tren";
		break;
	case 4:
		system("CLS");
		cout << endl << "\n4. Kiem tra ma tran co la ma tran tam giac duoi";
		XuatMang(a, n);
		if (KTMaTranTamGiacDuoi(a, n) == 1)
			cout << "\nLa ma tran tam giac duoi";
		if (KTMaTranTamGiacDuoi(a, n) == 0)
			cout << "\nKhong la ma tran tam giac duoi";
		break;
	case 5:
		system("CLS");
		cout << endl << "\n5. Kiem tra ma tran co la ma tran cheo";
		XuatMang(a, n);
		if (KTMaTranCheo(a, n))
			cout << "\nLa ma tran cheo";
		if (!KTMaTranCheo(a, n))
			cout << "\nKhong la ma tran cheo";
		break;
	case 6:
		system("CLS");
		cout << endl << "\n6. Kiem tra ma tran co la ma tran don vi";
		XuatMang(a, n);
		if (KTMaTranDonVi(a, n))
			cout << "\nLa ma tran don vi";
		if (!KTMaTranDonVi(a, n))
			cout << "\nKhong la ma tran don vi";
		break;
	}
	_getch();
}