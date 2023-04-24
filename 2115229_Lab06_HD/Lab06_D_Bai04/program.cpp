#include <iostream>
#include <conio.h>
#include <iomanip>

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
	int soMenu = 5, 
		menu, 
		n = 0; 
	MaTranVuong a, b, c;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, b, c,  n);
	} while (menu > 0);
}

