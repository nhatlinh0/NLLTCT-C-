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
	int menu, soMenu = 4, n = 0;
	MaTran a;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu >= 0);
}