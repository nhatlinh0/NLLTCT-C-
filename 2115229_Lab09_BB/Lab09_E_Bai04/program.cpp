#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

#include "thuvien.h";
#include "menu.h";

void ChayChuongTrinh();
int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int menu, soMenu = 7, n = 0;
	int e = 0;
	cout << "\nNhap so luong";
	cin >> n;
	Sach a[10];
	BaoKhoaHoc b[10];
	TapChi c[10];
	LuanVan d[10];
	Nhap1TL(a, b, c, d, e);
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, b, c, d, n);
	} while (menu > 0);
}