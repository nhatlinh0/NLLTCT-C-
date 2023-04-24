#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;


double CanBacHai(double a);


int main()
{
	double a;
	cout << "\nNhap so thuc a= "; cin >> a;
	cout << "\nCan bac hai cua so thuc a la: " << CanBacHai(a);
	// Dung chuong trinh va nhan 1 phim de ket thuc chuong trinh
	_getch();

	// Tra ve gia tri 1
	return 1;
}


double CanBacHai(double a)
{
	double xo, xn, Eps;
	Eps = pow(10, -15);
	if (a == 0)
		xn = 0;
	else
	{
		xn = 1;
		do
		{
			xo = xn;
			xn = (a / xo + xo) / 2.0;
		} while (abs(xn - xo) >= Eps);
	}
	return xn;
}