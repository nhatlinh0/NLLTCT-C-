#pragma once
unsigned Fibonacci(int n);
unsigned LietKeSoFibonacci(int n);
long LietKeNFibonaciDauTien(long n);

unsigned Fibonacci(int n)
{
	if (n == 1 || n == 2)
		return 1;
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}
unsigned LietKeSoFibonacci(int n)
{
	if (n < 0) {
		cout << "Vui long nhap so duong n!" << endl;
	}
	else {
		if (n == 0) {
			cout << "0" << endl;
		}

		if (n == 1) {
			cout << "1" << endl;
		}

		if (n >= 2) {
			long long fn, f0 = 0, f1 = 1;
			for (int i = 2; i <= n; i++)
			{
				fn = f0 + f1;
				f0 = f1;
				f1 = fn;
			}

			cout << fn << endl;
		}
	}
	return 1;
}
long LietKeNFibonaciDauTien(long n)
{
	int f1 = 0, f2 = 1, fi;
	fi = f2;
	for (int i = 1; i <= n; i++)
	{
		cout << fi << " ";
		fi = f1 + f2;
		f1 = f2;
		f2 = fi;
	}
	return fi;
}