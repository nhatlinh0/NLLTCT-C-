#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, Dayso a, int &n);

void XuatMenu()
{
	cout << endl << "===================CHON CHUC NANG====================";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap mang thu cong";
	cout << endl << "2. Nhap mang tu dong";
	cout << endl << "3. Tinh trung binh cong cua cac phan tu";
	cout << endl << "4. Tinh tong binh phuong cac phan tu";
	cout << endl << "5. Tinh do lech lon nhat giua 2 phan tu lien tiep";
	cout << endl << "6. Tinh tong cac so nguyen to co 2 chu so";
	cout << endl << "7. Xem du lieu day so";
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

void XuLyMenu(int menu, Dayso a, int &n)
{

	switch (menu)
	{

	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		return;
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Nhap mang thu cong: ";
		cout << "\nNhap kich thuoc mang:";
		cin >> n;
		NhapMang(a, n);
		XuatMang(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Nhap mang tu dong";
		cout << "\nNhap kich thuoc mang:";
		cin >> n;
		NhapMangTuDong(a, n);
		XuatMang(a, n);
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Tinh trung binh cong cua cac phan tu";
		TinhTongCacPhanTu(a, n);
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Tinh tong binh phuong cac phan tu: ";
		TinhTongBinhPhuong(a, n);
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Tinh do lech lon nhat giua 2 phan tu lien tiep: ";
		TinhDoLechMax(a, n);
		break;
	case 6:
		system("CLS");
		cout << endl << "6. Tinh tong cac so nguyen to co 2 chu so: ";
		TinhTongSoNT(a, n);
		break;
	case 7:
		system("CLS");
		cout << endl << "7. Xem du lieu day so";
		cout << "\nDay so hien hanh:\n";
		XuatMang(a, n);
		break;
	}
	_getch();
}