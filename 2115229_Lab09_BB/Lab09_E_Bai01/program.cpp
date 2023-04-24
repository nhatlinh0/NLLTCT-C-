#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
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
	cout << endl << "Nhap mot so nguyen duong : ";
	cin >> n;
	int b[100];
	int* a;
	a = b;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	} while (menu > 0);
}