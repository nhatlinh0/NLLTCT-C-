// Nap thu vien cac ham trong chuong trinh
#include <iostream>
#include <conio.h>

using namespace std;

// Chen cac tap tin thu vien tu tao : luu y trinh tu chen.
#include "thuvien.h"
#include "Menu.h"

// Khai bao nguyen mau ham
void ChayChuongTrinh();

// Dinh nghia ham MAIN
int main()
{
	ChayChuongTrinh();
	// Tra gia tri ve 1
	return 1;
}

void ChayChuongTrinh()
{
	// Khai bao bien
	int menu,		// Luu so thu tu menu duoc chon
		soMenu = 3; // luu so luong menu chuc nang
	// Khai bao bien n
	unsigned int n;
	// nhap gia tri cho bien n
	cout << "\nNhap mot so nguyen duong : ";
	cin >> n;
	// Lap lai menu cho den khi dung chon chuc nang 0. Thoat khoi chuong trinh
	do {
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, n);
	} while (menu > 0);

}