#include <iostream>
#include <conio.h>
#include <string.h>

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
	int menu, soMenu = 11;
	String a, b;
	do
	{
		system("CLS");
		menu = ChonMenu(soMenu);
		cin.ignore();
		XuLyMenu(menu, a, b);
	} while (menu > 0);
}