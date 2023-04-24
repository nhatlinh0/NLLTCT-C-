#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

#include "thuvien.h";

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	String a, b;
	char x;
	cout << "\nNhap chuoi a:";
	gets_s(a, 100);
	//cout << "\nNhap ky tu x:";
	//cin >> x;
	//cout << "\nNhap chuoi b:";
	//gets_s(b, 100);
	/*if (TimVTXuatHienCuaChuoi(a, b) == -1)
		cout << "\nKhong co chuoi b trong chuoi a\n";
	else
		cout<<"\nChuoi b co trong chuoi a tai vi tri "<<TimVTXuatHienCuaChuoi(a, b);*/
	DemSoTuTrongChuoi(a);
	_getch();
}