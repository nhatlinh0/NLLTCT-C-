#pragma once
void XuatMenu();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);

void XuatMenu()
{
	cout << "\n===========He Thong Chuc Nang==========";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Tim va xuat so Fibonacci thu n ";
	cout << "\n2. Liet ke cac so Fibonacci nho hon hoac bang n ";
	cout << "\n3. Liet ke n so Fibonacci dau tien";

}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap mot stt (1<= stt <=" << soMenu << ")";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu)
{
	int n;
	cout << "\n Nhap n:";
	cin >> n;
	switch (menu)
	{
	case 0:
		cout << "\n Thoat khoi chuong trinh";
		return;
		break;
	case 1:
		cout << "\n So Fibonacci thu " << n << " la ";
		cout << Fibonacci(n);
		break;
	case 2:
		cout << "\n Liet ke cac so Fibonacci nho hon hoac bang " << n << "la ";
		cout << LietKeSoFibonacci(n);

		break;
	case 3:
		cout << "\n Liet ke " << n << " so Fibonacci dau tien";
		cout << LietKeNFibonaciDauTien(n);
		break;

	}
	_getch();
}