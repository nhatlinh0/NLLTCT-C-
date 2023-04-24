#pragma once

void CauA();
void CauB();
void CauC();
void CauD();
void CauE();
int KiemTraNT(int x);






void CauA()
{
	int n, dem = 0;
	do
	{	cout << "\nNhap n (n>1):";
		cin >> n;
	} while (n <= 1);
		
	for (int i = 2; i <= n; i++)
	{
		if ((n % i)==0)
			dem = dem + 1;
	}
	if (dem == 1)
		cout << "\n n la so nguyen to ";
	if (dem !=1)
		cout << "\n n khong la so nguyen to ";
}

void CauB()
{
	int n, dem = 0;
	do
	{
		cout << "\nNhap n (n>1):";
		cin >> n;
	} while (n <= 1);
	for (int i = 2; i <= n; i++)
	{
		if (KiemTraNT(i) == 1)
		{
			cout << i << "\t";
			dem = dem + 1;
		}
		if (dem == 5)
		{
			dem = dem - 5;
			cout << "\n";
		}

	
			
	}
}

int KiemTraNT(int x)
{
	for (int i = 2; i <= sqrt(x); i++)
	{
		if ((x % i) == 0)
			return 0;
	}
	return 1;
}

void CauC()
{
	int n, dem = 0;
	do
	{
		cout << "Nhap n (n>1) :";
		cin >> n;
	} while (n <= 1);

	for (int i = 2; i <= n; i++)
	{
		if (KiemTraNT(i) == 1)
			dem++;
	}
	cout <<"\nso nguyen to tu 1 toi "<<n<<" la:" << dem;
}
void CauD()
{
	int n, ketqua=0;
	do
	{
		cout << "\nNhap n (n>1) :";
		cin >> n;
	} while (n <= 1);
	for (int i = 2; i <= n; i++)
	{
		if ((n % i) == 0)
		{
			if (KiemTraNT(i)==1)

			ketqua = ketqua + i;
			
		}
	}
	cout << "\nTong cac uoc so nguyen to tu 1 toi " << n << " la: " << ketqua;
}

void CauE()
{
	int n;
	do
	{
		cout << "\nNhap n (n>1) :";
		cin >> n;
	} while (n <= 1);
	for (int i = 2; i <= n; i++)
	{
		while (i == 2)
		{
			cout << "\nThua so nguyen to cua " << n << " la: ";
			break;
		}
		if ((n % i) == 0 && KiemTraNT(i) == 1)
		{
			while ((n % i) == 0)
			{
				cout << "\t" << i;
				n = n / i;
			}
		}
	}
}