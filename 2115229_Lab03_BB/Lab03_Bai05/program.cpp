#include <iostream>
#include <conio.h>	
#include <math.h>

using namespace std;

double TinhTongBangFora(double n);
double TinhTongBangWhilea(double n);
double TinhTongBangDoWhilea(double n);
double TinhTongBangForb(double n);
double TinhTongBangWhileb(double n);
double TinhTongBangDoWhileb(double n);

int main()							
{
	double n;
	cout << "Nhap N: "; cin >> n;
	cout << TinhTongBangDoWhileb(n);

	
	return 0;
}

double TinhTongBangFora(double n)		        //cau a
{
	double H; H = 0;

	for (double i = 1; i <= n; i++)
	{
		H = H + (1 / i);
	}
	return H;
}

double TinhTongBangWhilea(double n)
{
	double j=1;
	double K=0;
	while (j <= n)
	{
		K = K + (1 / j);
		j++;
	}
	return K;
}

double TinhTongBangDoWhilea(double n)
{
	double i = 1;
	double H = 0;
	do
	{
		H = H + (1 / i);
		i++;
	} while (i <= n);
	return H;
}

double TinhTongBangForb(double n)				// cau b
{
	double H; H = 0;

	for (double i = 1; i <= n; i++)
	{
		H = H + ((i+1)/ (i*i));
	}
	return H;
}

double TinhTongBangWhileb(double n)
{
	double j = 1;
	double K = 0;
	while (j <= n)
	{
		K = K + ((j + 1) / (j * j));
		j++;
	}
	return K;
}


double TinhTongBangDoWhileb(double n)
{
	double i = 1;
	double H = 0;
	do
	{
		H = H + ((i + 1) / (i * i));
		i++;
	} while (i <= n);
	return H;
}