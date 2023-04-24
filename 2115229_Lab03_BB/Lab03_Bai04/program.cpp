#include <iostream>
#include <conio.h>

using namespace std;

void LoiKhuyen(double w, double h);

int main()
{
	double w, h;
	cout << "Nhap can nang: "; cin >> w;
	cout << " Nhap chieu cao: "; cin >> h;
	LoiKhuyen(w, h);
	_getch();
	return 1;
}

double TinhChiSoBMI(double w, double h)
{
	double BMI;
	BMI = w / (h * h);
	 
	return BMI;
}

void LoiKhuyen(double w, double h)
{
	double BMI;
	BMI = TinhChiSoBMI(w, h);
	if (BMI < 15)
	{
		cout << "Doi Khat ";
		return ;
	}
	if (BMI < 17.5)
	{
		cout << "Bieng An "; 
		return ;
	}
	if (BMI < 18.5)
	{
		cout << "Thieu Can "; 
		return ;
	}
	if (BMI >= 18.5 && BMI <25)
	{
		cout << "Ly Tuong";
		return ;
	}
	if (BMI >= 25 && BMI <30)
	{
		cout << "Thua Can "; 
		return ;
	}
	if (BMI >= 30 && BMI < 40)
	{
		cout << "Beo Phi"; 
		return ;
	}
	if (BMI >=40 )
	{
		cout << "Tre em bi beo phi "; 
		return;
	}
}