#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

#include "thuvien.h";
#include "menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int menu, soMenu=7, n = 0;
	Dayso a;
	cout << "\nNhap mot so nguyen duong=";
	cin >> n;
	NhapMang(a, n);
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);

}