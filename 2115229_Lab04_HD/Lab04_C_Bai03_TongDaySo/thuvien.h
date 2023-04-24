#pragma once
// Dinh nghia cac hang so va cac kieu du lieu moi

// Khai bao nguyen mau cac ham xu ly
double TinhTongR(unsigned int n);
double TinhTongS(unsigned int n);
double TinhTongT(unsigned int n);
// Dinh nghia cac ham xu ly

// Dinh nghia ham tinh tong R 1+ 1/2 + 1/3 + ... + 1/n
// Input : n = mot so nguyen duong
// Output: Tong 1 + 1/2 + 1/3 +...+1/n

double TinhTongR(unsigned int n)
{
	double sum = 0;
	unsigned int i;
	// Duyet qua tung so i tu 1 den n
	for (i = 1; i <= n; i++)
		sum += 1.0 / i; // Cong don 1/i vao ket qua
	return sum;
}

// Dinh nghia ham tinh tong S 2/1 + 3/4 + 4/9+..
// Input : n = mot so nguyen duong
// Output: Tong 2/1 + 3/4 + 4/9 + ...+ (n^1)/(n^2)

double TinhTongS(unsigned int n)
{
	double sum = 0; // Khai bao bien luu ket qua
	unsigned int i;
	// Duyet qua tung so i tu 1 den n
	// Va cong don (i^1)/(i^2) vao ket qua
	for (i = 1; i <= n; i++)
		sum += (i + 1.0) / (i * i);
	return sum;
}

// Dinh nghia ham tinh tong T -1/2 + 2/3 + 3/4+ ...
// Input : n = mot so nguyen duong
// Output : Tong -1/2 + 2/3+ 3/4 + ...+ n*(-1)^n/(n+1)

double TinhTongT(unsigned int n)
{
	double sum = 0;// khai bao bien luu ket qua
	unsigned int i;
	// Duyet qua tung so i tu 1 den n va cong don
	// hoac tru bot i*(-1)^i/(i+1) khoi ket qua
	for (i = 1; i <= n; i++)
		if (1 % 2 == 0)
			sum += i / (i + 1.0);
		else
			sum -= i / (i + 1.0);
	return sum;
}