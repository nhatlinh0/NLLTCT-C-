#include <iostream>
#include <conio.h>
#include <iomanip>

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
	int menu, soMenu = 5;
	int n;
	
	
	 
	
	
	cout << "\nNhap kich thuoc n";
	cin >> n;
	MaTranVuong a, b;
	a = new int[n * n];
	b = new int[n * n];
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu,a,b, n);
		
	} while (menu > 0);
}