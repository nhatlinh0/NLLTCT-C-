#include <iostream>
#include <conio.h>

using namespace std;

#include "thuvien1.h"

#include "menu.h"


void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{	
		int soMenu = 4, Menu;
	do
	{
		Menu = (ChonMenu(soMenu));
		XuLyMenu(Menu);
	}while (Menu > 0);
}