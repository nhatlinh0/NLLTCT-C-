#pragma once

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, String a, String b);

void XuatMenu()
{
	cout << endl << "===================CHON CHUC NANG====================";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap chuoi:";
	cout << endl << "2. Xem chuoi: ";
	cout << endl << "3. Tinh chieu dai chuoi ";
	cout << endl << "4. Chen dau";
	cout << endl << "5. Chen cuoi";
	cout << endl << "6. Chen o vi tri bat ky";
	cout << endl << "7. Xoa dau";
	cout << endl << "8. Xoa cuoi";
	cout << endl << "9. Xoa o vi tri bat ky";
	cout << endl << "10. Cat dau chen duoi";
	cout << endl << "11. Cat duoi chen dau";
	cout << endl << "12. Xoa x";
	cout << endl << "13. Thay x bang y";
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

void XuLyMenu(int menu, String a, String b)
{
	char kt;

	switch (menu)
	{

	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh";
		return;
		break;
	case 1:
		system("CLS");
		cout << endl << "\n1. Nhap chuoi:";;
		NhapChuoi(a, 'a');
		break;
	case 2:
		system("CLS");
		cout << endl << "\n2. Xem chuoi: ";
		cout << "\nChuoi a:";
		XuatChuoi(a);
		break;
	case 3:
		system("CLS");
		cout << endl << "\n3. Tinh chieu dai chuoi ";
		cout<<TinhChieuDaiChuoi(a);
		break;
	case 4:
		system("CLS");
		cout << endl << "\n4. Chen dau";
		cout << "\nNhap ky tu muon chen";
		cin >> kt;
		 ChenDau_KT(a, kt);
		 XuatChuoi(a);
		break;
	case 5:
		system("CLS");
		cout << endl << "\n5. Chen cuoi";
		cout << "\nNhap ky tu muon chen";
		cin >> kt;
		ChenCuoi_KT(a, kt);
		XuatChuoi(a);
		break;
	case 6:
		int vt;
		system("CLS");
		cout << endl << "\n6. Chen o vi tri bat ky";
		cout << "\nNhap ky tu muon chen";
		cin >> kt;
		cout << "\nNhap vi tri";
		cin >> vt;
		ChenKT_VT(a, kt, vt);
		XuatChuoi(a);
		break;
	case 7:
		system("CLS");
		cout << endl << "\n7. Xoa dau";
		XoaDau_KT(a);
		XuatChuoi(a);
		break;
	case 8:
		system("CLS");
		cout << endl << "\n8. Xoa cuoi";
		XoaCuoi_KT(a);
		XuatChuoi(a);
		break;
	case 9:
		system("CLS");
		cout << endl << "\n9. Xoa o vi tri bat ky";
		cout << "\nNhap vi tri muon xoa";
		cin >> vt;
		XoaKT_VT(a, vt);
		XuatChuoi(a);
		break;
	case 10:
		system("CLS");
		cout << endl << "\n10. Cat dau chen duoi";
		CatDauChenCuoi(a);
		XuatChuoi(a);
		break;
	case 11:
		system("CLS");
		cout << endl << "\n11. Cat duoi chen dau";
		CatCuoiChenDau(a);
		XuatChuoi(a);
		break;
	case 12:
		system("CLS");
		cout << endl << "\n12. Xoa x";
		cout << "\nNhap ky tu muon xoa:";
		cin >> kt;
		Xoa_x(a, kt);
		break;
	case 13:
		char x, y;
		system("CLS");
		cout << endl << "\n13. Thay x bang y";
		cout << "\nNhap x:";
		cin >> x;
		cout << "\nNhap y:";
		cin >> y;
		Thay_x_Bang_y(a, x, y);
		XuatChuoi(a);
		break;
	}

	_getch();
}