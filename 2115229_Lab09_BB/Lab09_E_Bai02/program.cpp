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
	int menu, soMenu = 8, n = 0;
	ChuoiDong a;
	char b[100];
	cout << "\nNhap chuoi:";
	gets_s(b, 100);
	a = b;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}