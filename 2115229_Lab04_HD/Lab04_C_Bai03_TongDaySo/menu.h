#pragma once
// Khai bao nguyen mau cac ham trong he thong menu

void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu, unsigned int n);

// Dinh nghia cac hang trong he thong menu

// Ham XuatMenu : Xuat danh sach cac chuc nang ra man hinh:
// Gia su co 4 chuc nang 
// Input :Khong
// Output : Khong 
void XuatMenu()
{
	cout << "\n======== HE THONG CHUC NANG ============";
	cout << "\n 0. THOAT KHOI CHUONG TRINH ";
	cout << "\n 1. Tinh tong R ";
	cout << "\n 2. Tinh tong S ";
	cout << "\n 3. Tinh tong T ";
	cout << "\n========================================";

}

// Ham ChonMenu : Chon mot chuc nang trong danh sach
// Input : soMenu = So chuc nang
// Output: stt == thu tu chuc nang duoc chon

int ChonMenu(int soMenu)
{
	int stt;// bien luu tru so thu tu chuc nang duoc chon
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\n Nhap 1 so trong khoang [0,.. " << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;

	}
	return stt;
}

// Ham XuLyMenu : Xu ly chuc nang duoc chon
// Input : menu = So thu tu menu da chon
//			n = Mot so nguyen duong
// Output : khong

void XuLyMenu(int menu, unsigned int n)
{
	// Khai bao bien
	double sum;
	switch (menu)
	{
	case 0:
		cout << "\n 0. THOAT KHOI CHUONG TRINH. \n";
		break;
	case 1:
		cout << "\n 1. Tinh tong R";
		// Goi ham tinh tong R
		sum = TinhTongR(n);
		// Xuat key qua
		cout << "\nR= " << sum;
		break;
	case 2:
		cout << "\n 2. Tinh tong S";
		// Goi ham tinh tong S
		sum = TinhTongS(n);
		// Xuat ket qua
		cout << "\nS= " << sum;

		break;
	case 3:
		cout << "\n 3. Tinh tong T";
		// Goi ham tinh tong T
		sum = TinhTongT(n);
		// Xuat ket qua
		cout << "\nR= " << sum;
		break;
	}
	_getch();
}