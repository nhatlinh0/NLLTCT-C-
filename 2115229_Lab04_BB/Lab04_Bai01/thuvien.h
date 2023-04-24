#pragma once

void CauA();
void CauB();
void CauC();
void CauD();
void CauE();
void CauF();
void CauG();

void CauA()
{
	int n;
	cout << "\nNhap n "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "\t";
	}
}

void CauB()
{
	int n, dem=0;
	cout << "\nNhap n "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0)
			dem++;
	}
	cout<<"\ncac so chia het cho 3 nhung khong chia het cho 4 la: "<<dem;
}

void CauC()
{
	int dem=0,n;
	cout << "\nNhap n "; cin >> n;
	while (n >= 10)
	{
		n = n / 10;
		dem = dem + 1;
	}
	cout << "\nSo luong chu so cua n la:" << dem + 1;
}

void CauD()
{
	unsigned int n, kq;
	cout << "\nNhap n "; cin >> n;
	do
	{	
		kq = n % 10;
		n = n / 10;
		cout << kq;
	} while (n >0);
}

void CauE()
{
	int n, kq=0;
	cout << "\nNhap n "; cin >> n;
	do
	{
		kq = kq + (n % 10);
		n = n / 10;
	} while (n > 0);
	cout << kq;
}

void CauF()
{
	int n, kq=0;
	cout << "\nNhap n "; cin >> n;
	do
	{
		kq = (n % 10);
		n = n / 10;
	} while (n > 0);
	cout << kq;
}

void CauG()
{
	int n;
	int i, m = 0;
	int kq = 0;
	cout << "\nNhap n "; cin >> n;
	for (i = 0; kq <= n; i++)
	{
		
		m= i + 1;
		kq = kq + m;
	} 
	cout << m-1;
}