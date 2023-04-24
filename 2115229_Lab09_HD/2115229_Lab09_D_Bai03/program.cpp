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
	int menu, soMenu = 6, n = 0;
	//cout << endl << "Nhap mot so nguyen duong : ";
	//cin >> n;
	ChuoiDong a;
	a = new char[MAX];
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, MAX);
	} while (menu > 0);
}