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

	int n;
	int menu, soMenu = 5;
	cout << endl << "Nhap mot so nguyen duong : ";
	cin >> n;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu,n);
	} while (menu > 0);
}