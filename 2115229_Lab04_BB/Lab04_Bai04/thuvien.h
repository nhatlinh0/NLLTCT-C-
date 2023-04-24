#pragma once

void CauA();
void CauB();
void CauC();
void CauD();
void CauE();

void CauA()
{
	int n;
	do
	{
		cout << "\nNhap n:";
		cin >> n;
	} while (n < 0);
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			cout <<"\nCac uoc cua "<< n <<" la "<< i << ".";
	}
}

void CauB()
{
	int n, dem=0;
	do
	{
		cout << "\nNhap n:";
		cin >> n;
	} while (n < 0);
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			dem++;
	}
	cout <<"\nSo luong uoc so cua "<< n <<" la "<< dem;
}

void CauC()
{
	int n, tong=0;
	do
	{
		cout << "\nNhap n:";
		cin >> n;
	} while (n < 0);
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			tong = tong + i;
	}
	cout <<"\nTong cac uoc cua "<< n <<" la "<< tong;
}

void CauD()
{
	int n, kq;
	do
	{
		cout << "\nNhap n:";
		cin >> n;
	} while (n < 0);

	for (int i = 1; pow(2, i) <= n; i++)
	{
		kq = pow(2,i);
	}
	cout << kq;
}

void CauE()
{
	int n, kq = 0;
	do
	{
		cout << "\nNhap n:";
		cin >> n;
	} while (n < 0);
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			kq = kq + i;
	}
	if (kq / 2 == n)
		cout << "\n" << n << " la so hoan hao ";
	if (kq / 2 != n)
		cout << "\n" << n << " khong phai so hoan hao ";
}