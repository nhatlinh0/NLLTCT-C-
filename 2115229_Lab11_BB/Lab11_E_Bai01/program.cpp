#include <iostream>
#include<conio.h>
#include <fstream>
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
	int menu, soMenu = 3;
	char filename[100];
	int a[100];
	int n=0;
	NhanVien b[100];
	
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, filename, a, b, n);
	} while (menu > 0);
	
	_getch();
}