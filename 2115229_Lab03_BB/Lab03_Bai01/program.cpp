#include <iostream>
#include <conio.h>

using namespace std;

void GiaiPhuongTrinhBacNhat(double a, double b);



int main()
{
	double a, b;
	cout << "Nhap a va b theo phuong trinh ax+b=0 :" << endl;
	cout << "Nhap a= "; cin >> a;
	cout << "Nhap b= "; cin >> b;
	GiaiPhuongTrinhBacNhat(a, b);
	_getch();
	return 1;
}


void GiaiPhuongTrinhBacNhat(double a, double b)
{
	if (a == 0 && b == 0)
	{
		cout << "Phuong trinh vo so nghiem " << endl;
		return;
	}

	if (a == 0 && b != 0)
	{
		cout << "Phuong trinh vo nghiem " << endl;
		return;
	}

	if (a != 0)
	{
		cout << "x =" << (-b / a) << endl;
	}
}