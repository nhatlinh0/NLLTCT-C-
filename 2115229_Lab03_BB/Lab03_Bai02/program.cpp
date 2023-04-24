#include <iostream>
#include <conio.h>

using namespace std;

double TinhBieuThuc(double x, double y, char k);


int main()
{	
	double a, b;
	char k;
	cout << "Nhap a= "; cin >> a;
	cout << endl << "Nhap b= "; cin >> b;
	cout << endl<< "Nhap phep toan (+, -, *, /)"; cin >> k;
	TinhBieuThuc(a, b, k);

	_getch();
	return 1;
}


double TinhBieuThuc(double x, double y, char k)
{
	if (k != '+' && k != '-' && k != '*' && k != '/')
	{
		return 0;
	}
	
	switch (k)
	{
		case '+' :
		{
			cout << "Tong cua " << x << " va " << y << "= " << x + y;
			break;
		}
		case '-':
		{
			cout << "Hieu cua " << x << " va " << y << "= " << x - y;
			break;
		}
		case '*':
		{
			cout << "Tich cua " << x << " va " << y << "= " << x * y;
			break;
		}
		case '/':
		{
			cout << "Thuong cua " << x << " va " << y << "= " << x / y;
			break;
		}
	}
	return k;
}