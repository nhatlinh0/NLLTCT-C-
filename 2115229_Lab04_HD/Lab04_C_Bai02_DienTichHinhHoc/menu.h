#pragma
// Khai bao nguyen mau cac ham trong he thong menu

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);
// Dinh nghia cac ham xu ly


// Dinh nghia ham xuat danh sach chuc nang ra man hinh
// Input : Khong
// Output: khong

void XuatMenu()
{
	cout << "\n================= CHON CHUC NANG ================";
	cout << "\n0. Thoat khoi man hinh";
	cout << "\n1. Tinh dien tich hinh vuong";
	cout << "\n2. Tinh dien tich hinh chu nhat";
	cout << "\n3. Tinh dien tich hinh tam giac";
	cout << "\n4. Tinh dien tich hinh tron";
	cout << "\n=================================================";
}

// Dinh nghia ham chon mot menu trong danh sach
// Input: soMenu = So luong menu co the chon
// Output: So thu tu menu do nguoi dung nhap vao

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so de chon menu (0<= stt <<" << soMenu << ") : stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

// Dinh nghia ham xu ly menu 
// Input : Menu = so thu tu menu do nguoi chon
// Output : Khong

void XuLyMenu(int menu)
{
	// Khai bao cac bien
	double a, b, c, r, dienTich;
	switch (menu)
	{
	case 0:
		cout << "\n0. Thoat khoi chuong trinh";
		break;
	case 1:
		cout << "\n1. Tinh dien tich hinh vuong";
		// Thong bao nguoi dung nhap canh hinh vuong
		cout << "\nNhap do dai canh hinh vuong";
		cin >> a;

		// Goi ham tinh dien tich hinh vuong
		dienTich = DienTichHinhVuong(a);
		// Xuat ket qua
		cout << "\nDien tich hinh vuong canh" << a << " la " << dienTich;
		break;
	case 2:
		cout << "\n2. Tinh dien tich hinh chu nhat";
		// Thong bao nguoi dung nhap chieu dai va chieu rong
		cout << "\nNhap chieu dai hinh CN : ";
		cin >> a;
		cout << "\nNhap chieu rong hinh CN : ";
		cin >> b;
		// Goi ham tinh dien tich hinh chu nhat
		dienTich = DienTichHinhChuNhat(a, b);
		// Xuat ket qua
		cout << "\nDien tich hinh chu nhat"
			<< " co chieu dai = " << a
			<< " co chieu rong = " << b
			<< " la " << dienTich;
		break;
	case 3:
		cout << "\n3. Tinh dien tich hinh tam giac";
		// Thong bao nguoi dung nhap do dai 3 canh tam giac
		cout << "\nNhap do dai canh a : ";
		cin >> a;
		cout << "\nNhap do dai canh b : ";
		cin >> b;
		cout << "\nNhap do dai canh c : ";
		cin >> c;
		// Goi ham tinh dien tich hinh tam giac
		dienTich = DienTichTamGiac(a, b, c);
		// Xuat ket qua
		cout << "\nDien tich hinh tam giac" << " co 3 canh a = " << a << ",b = "
			<< b << ", c =" << c << " la " << dienTich;
		break;
	case 4:
		cout << "\n4. Tinh dien tich hinh tron";
		// Thong bao nguoi dung nhap ban kinh hinh trong
		cout << "\nNhap do dai ban kinh : ";
		cin >> r;
		// Goi ham tinh dien tich hinh tron
		dienTich = DienTichHinhTron(r);
		// Xuat ket qua
		cout << "\nDien tich hinh tron co ban kinh " << r << " la " << dienTich;
		break;
	}
	_getch();
}
