#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);

void XuatMenu()
{
	cout << "======== HE THONG CHUC NANG ========";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. In lich";
	cout << "\n===================================";
}
int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so stt (1 <= stt <= " << soMenu << ") de chon menu, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}
void XuLyMenu(int menu, Lich lich, int& n)
{

}

