#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, DaySo a, int& n);


void XuatMenu()
{
	cout << endl << "============== CHON CHUC NANG =============";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << " Nhap Loai tien te ban muon quy doi ";
	cout << endl << "1. Do-La";
	cout << endl << "2. Yen";
	cout << endl << "3. Bang Anh";
	cout << endl << "4. Euro";
	cout << endl << "5. Baht Thai";
	cout << endl << "6. Viet Nam Dong";
	cout << endl << "7. Nhan Dan Te ";
	cout << endl << "8. Won";
	cout << endl << "9. Ruble";
	cout << endl << "10. Rupee";
	cout << endl << "============================================== ";
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
void XuLyMenu(int menu, DaySo a, int& n)
{

	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "\n1. Do La ban muon nhap la \n";
		cin >> n;
		My(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "\n2. Yen ban muon nhap la ";
		cin >> n;
		Nhat(a, n);
		break;
	case 3:
		system("CLS");
		cout << endl << "\n3. Bang Anh  ban muon nhap la ";
		cin >> n;
		Anh(a, n);
		break;
	case 4:
		system("CLS");
		cout << endl << "\n4. Euro ban muon nhap la ";
		cin >> n;
		euro(a, n);
		break;
	case 5:
		system("CLS");
		cout << endl << "\n5. Bath Thai ban muon nhap la ";
		cin >> n;
		Thai(a, n);

		break;
	case 6:
		system("CLS");
		cout << endl << "\n6. Viet Nam Dong  ban muon nhap la ";
		cin >> n;
		VN(a, n);
		break;
	case 7:
		system("CLS");
		cout << endl << "\n7. Nhan Dan te ban muon nhap la ";
		cin >> n;
		TQ(a, n);

		break;
	case 8:
		system("CLS");
		cout << endl << "\n8. Won ban muon nhap la ";
		cin >> n;
		break;
	case 9:
		system("CLS");
		cout << endl << "\n9. Ruble Nga  ban muon nhap la ";
		cin >> n;
		Nga(a, n);
		break;
	case 10:
		system("CLS");
		cout << endl << "\n10. Rupee An ban muon nhap la ";
		cin >> n;
		AnDo(a, n);
		break;
	}
	_getch();
}
