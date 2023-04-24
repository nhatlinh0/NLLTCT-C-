#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include<time.h>


using namespace std;

#include "thuvien.h"
#include "menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	_getch();
	return 1;
}

void ChayChuongTrinh()
{
	int menu, soMenu = 7, n=0;
	Dayso a;
	
	
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}