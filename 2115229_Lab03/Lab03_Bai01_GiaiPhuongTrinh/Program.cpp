
#include <iomanip>
#include <math.h>	
#include <iostream>
#include <conio.h>

using namespace std;

float nhapmotsokhackhong();
void giaiphuongtrinhbachai(float a, float b, float c);












int main()
{
	float a, b, c;
	a = nhapmotsokhackhong();
	cout << endl << "nhap he so b: "; cin >> b;
	cout << endl << "nhap he so c: "; cin >> c;
	giaiphuongtrinhbachai(a, b, c);

	_getch();


	return 1;
}





float nhapmotsokhackhong()
{
	float so;
	cout << endl << "Nhap mot so thuc (khac 0)";
	cin >> so;

	while (so == 0)
	{
		cout << endl << "Yeu cau nhap lai mot so thuc (khac 0)";
		cin >> so;
		return so;
	}
}



void giaiphuongtrinhbachai(float a, float b, float c)
{
	float delta, x;
	delta = b * b - 4 * a * c;
	if (delta < 0)
	{
		cout << endl << "Phuong Trinh Vo Nghiem";
	}
	else if (delta == 0.0)
	{
		x = -b / (2 * a);
		cout << endl << "Phuong Trinh co nghiem kep x=" << x;
	}
	else
	{
		cout << endl << "Phuong trinh co 2 nghiem phan biet:";
		x = (-b + sqrt(delta)) / (2 * a);
		cout << "x1=" << setprecision(5) << x;
		x = (-b - sqrt(delta)) / (2 * a);
		cout << "va x2=" << setprecision(5) << x;
	}
}