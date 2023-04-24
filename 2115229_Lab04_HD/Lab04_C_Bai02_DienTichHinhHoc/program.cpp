// Nap thu vien cac ham cho chuong trinh
#include <iostream>
#include <conio.h>

using namespace std;
// Chen cac tap tin thu vien tu tao : luu y trinh tu chen
#include "thuvien.h"
#include "Menu.h"
void ChayChuongTrinh();

// Dinh nghia ham MAIN
int main()
{
	ChayChuongTrinh();
	// Tra ve gia tri 1
	return 1;
}

void ChayChuongTrinh()
{
	int menu, soMenu = 4;
	do {
		menu = ChonMenu(soMenu);
		XuLyMenu(menu);
	} while (menu > 0);

}