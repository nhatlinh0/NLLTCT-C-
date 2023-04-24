#include <iostream>
#include <conio.h>

using namespace std;
#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main()

{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int menu, soMenu = 7;
	int n = 0;
	MaTranVuong a;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu,a,n);
	} while (menu >= 0);
}