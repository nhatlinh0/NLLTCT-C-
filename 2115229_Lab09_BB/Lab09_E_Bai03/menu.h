#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, int* a, int n);

void XuatMenu()
{
	cout << endl << "===================CHON CHUC NANG====================";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap ma tran:\n";
	cout << endl << "2. Kiem tra ma tran doi xung";
	cout << endl << "3. Kiem tra ma tran tam giac tren";
	cout << endl << "4. Kiem tra ma tran tam giac duoi";
	cout << endl << "5. Kiem tra ma tran cheo";
	cout << endl << "6. Kiem tra ma tran don vi";
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

void XuLyMenu(int menu, int *a, int n)
{

	switch (menu)
	{

	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Nhap ma tran:\n";
		NhapMaTran(a, n);
		XuatMaTran(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Kiem tra ma tran doi xung";
		if (KTMaTranDoiXung(a, n) == 1 )
			cout<<"\nla ma tran doi xung";
		else
			cout << "\nla ma tran khong doi xung";
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Kiem tra ma tran tam giac tren";
		if (KTMaTranTamGiacTren(a, n) == 1)
			cout << "\nla ma tran tam giac tren";
		else
			cout << "\nkhong la ma tran tam giac tren ";
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Kiem tra ma tran tam giac duoi";
		if (KTMaTranTamGiacDuoi(a, n) == 1)
			cout << "\nla ma tran tam giac Duoi";
		else
			cout << "\nkhong la ma tran tam giac duoi ";
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Kiem tra ma tran cheo";
		if (KTMaTranCheo(a, n) == 1)
			cout << "\nLa ma tran cheo";
		else
			cout << "\nKhong la ma tran cheo";
		break;
	case 6:
		system("CLS");
		cout << endl << "6. Kiem tra ma tran don vi";
		if (KTMaTranDonVi(a, n) == 1)
			cout << "\nLa ma tran don vi";
		else
			cout << "\nKhong phai la ma tran don vi";

		break;
	
	}
	_getch();
}