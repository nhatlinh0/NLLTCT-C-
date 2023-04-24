#include <iostream>
#include <conio.h>

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
	int menu, soMenu = 8,n=0;
	cout << endl << "Nhap mot so nguyen duong : ";
	cin >> n;
	DaySo a;
	NhapMang(a, n);
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu,a,n);
	} while (menu > 0);
}