#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, ChuoiDong a, int n);

void XuatMenu()
{
	cout << endl << "===================CHON CHUC NANG====================";
	cout << endl << "0. Thoat khoi chuong trinh";
	cout << endl << "1. Nhap chuoi a:";
	cout << endl << "2. Tinh chieu dai chuoi ";
	cout << endl << "3. Chen ky tu o vi tri";
	cout << endl << "4. Xoa phan tu o vi tri:";
	cout << endl << "5. Cat duoi chen dau";
	cout << endl << "6. Xoa x trong chuoi";
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
		cin.ignore();
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu,ChuoiDong a, int n)
{
	char x;
	int vt;
	int kq=0;
	switch (menu)
	{

	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:
		system("CLS");
		cout << endl << "1. Nhap chuoi a:";
		NhapChuoi(a);
		cout << "\nChuoi vua nhap:\n";
		XuatChuoi(a);
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Tinh chieu dai chuoi ";
		cout<<endl<<TinhChieuDaiChuoi(a);
		break;

	case 3:
		system("CLS");
		cout << endl << "3. Chen ky tu o vi tri \n";
		cout << "\nNhap ky tu muon chen:";
		cin>>x;
		cin.ignore();
		cout << "\nNhap vi tri muon chen:";
		cin >> vt;
		cin.ignore();
		XuatChuoi(a);
		kq = ChenKT_VT(a, x, vt);
		if (kq == 1)
		{
			XuatChuoi(a);
		}
		if(kq==0)
			cout << "\nVi tri qua nho hoac qua lon";
		
		break;

	case 4:
		system("CLS");
		cout << endl << "4. Xoa phan tu o vi tri:";
		cout << "\nNhap vi tri muon xoa:";
		cin >> vt;
		kq=XoaKT_VT(a, vt);
		if (kq == 1)
		{
			cout << "\nPhan tu da duoc xoa";
			XuatChuoi(a);
		}
		if (kq == 0)
			cout << "\nVi tri qua nho hoac qua lon";
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Cat duoi chen dau";
		CatCuoiChenDau(a);
		cout << "\nChuoi sau khi sua:";
		XuatChuoi(a);
		
		break;
	case 6:
		system("CLS");
		cout << endl << "6. Xoa x trong chuoi";
		cout << "\nXoa phan tu x trong chuoi. Vui long nhap x";
		cin >> x;
		Xoa_x(a, x);
		cout << "\nChuoi sau khi xoa x:";
		XuatChuoi(a);
		break;
	
	}
	_getch();
}