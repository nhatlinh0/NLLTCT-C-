#pragma once

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, Dayso a, int n);

void XuatMenu()
{
	cout << "\n=============================HE THONG CHUC NANG==============================";
	cout << "\n0. Thoat khoi chuong trinh ";
	cout << "\n1. Tim vi tri so nguyen to cuoi cung trong mang a ";
	cout << "\n2. Tim phan tu xuat hien nhieu nhat va so lan xuat hien cua no ";
	cout << "\n3. Tim phan tu co gia tri nho nhat trong mang va vi tri xuat hien cua no ";
	cout << "\n4. Tim so am lon nhat va vi tri cua no ";
	cout << "\n5. Tim so duong lon nhat va vi tri cua no ";
	cout << "\n6. Nhap lai phan tu trong mang:";
	cout << "\n7. Xem lai phan tu trong mang:";
	cout << "\n============================================================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap mot so (0<=,..,<=" << soMenu << ")";
		cin>>stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu,Dayso a, int n)
{
	switch (menu)
	{
	case 0:
		system("CLS");
		return;
		break;
	case 1:
		system("CLS");
		XuatMang(a, n);
		ViTriSoNT(a, n);
		break;
	case 2:
		system("CLS");
		XuatMang(a, n);
		PhanTuXuatHienNhieuNhat(a, n);
		break;
	case 3:
		system("CLS");
		XuatMang(a, n);
		PhanTuNhoNhat(a, n);
		break;
	case 4:
		system("CLS");
		XuatMang(a, n);
		TimSoAmLonNhat(a, n);
		break;
	case 5:
		system("CLS");
		XuatMang(a, n);
		TimSoDuongNhoNhat(a, n);
		break;
	case 6:
		system("CLS");
		NhapMang(a, n);
		break;
	case 7:
		system("CLS");
		XuatMang(a,n);
		break;
	}
	_getch();
}