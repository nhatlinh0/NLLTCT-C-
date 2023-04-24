#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, sinhvien a[100], int& n);

void XuatMenu()
{
	cout << endl << "===================CHON CHUC NANG====================";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1.Tao bang diem sinh vien";
	cout << endl << "2.Xem bang diem sinh vien";
	cout << endl << "3.Xem bang diem day du, co XLHT";
	cout << endl << "4.Xuat bang diem sinh vien theo tung lop ";
	cout << endl << "5.Sap xep bang diem sinh vien giam dan theo diem trung binh ";
	cout << endl << "6.Sap xep va xuat bang diem tang dan theo ten, neu trung ten, sap tang theo ma sinh vien ";
	cout << endl << "7.Tim va xuat thong tin sinh vien co ten cho truoc ";
	cout << endl << "8.Tim va xuat thong tin sinh vien co diem trung binh cao nhat ";
	cout << endl << "9.Xep loai hoc luc cua sinh vien dua vao diem trung binh ";
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

void XuLyMenu(int menu, sinhvien a[100], int& n)
{

	switch (menu)
	{

	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "Tao bang diem sinh vien";
		system("CLS");
		XuatDSSV(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "Xem bang diem sinh vien";
		system("CLS");
		XuatDSSV(a,n);
		break;
	case 3:
		system("CLS");
		cout << endl << "Xem bang diem day du, co XLHT";
		system("CLS");
		XuatDSSV(a, n);
		break;
	case 4:
		system("CLS");
		cout << endl << "Xuat bang diem sinh vien theo tung lop ";
		system("CLS");
		SapXepTheoLop(a, n);
		break;
	case 5:
		system("CLS");
		cout << endl << "Sap xep bang diem sinh vien giam dan theo diem trung binh ";
		SapXepGiamDanTheoDTB(a, n);
		break;
	case 6:
		system("CLS");
		cout << endl << "Sap xep va xuat bang diem tang dan theo ten, neu trung ten, sap tang theo ma sinh vien ";
		system("CLS");
		SapXepTangDanTheoTen(a, n);
		break;
	case 7:
		char Ten[27];
		system("CLS");
		cout << endl << "Tim va xuat thong tin sinh vien co ten cho truoc ";
		cout << "\nNhap ten sinh vien\n";
		cin.ignore();
		cin.getline(Ten,27);
		ThongTinSVCoTen(a, n, Ten);
		break;
	case 8:
		system("CLS");
		cout << endl << "Tim va xuat thong tin sinh vien co diem trung binh cao nhat ";
		system("CLS");
		XuatSVCoDTBCaoNhat(a, n);
		break;
	case 9:
		system("CLS");
		cout << endl << "Xep loai hoc luc cua sinh vien dua vao diem trung binh ";
		XepLoaiHocLuc(a, n);
		break;
	}
	_getch();
}

