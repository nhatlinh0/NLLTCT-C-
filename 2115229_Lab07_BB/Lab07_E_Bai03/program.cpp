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
	String a;
	cout << "\nNhap chuoi:";
	gets_s(a, 100);
	if (ChuoiDoiXung(a) == 1)
		cout << "\nla chuoi doi xung";
	else
		cout << "\nKhong la chuoi doi xung";
	
	_getch();
}