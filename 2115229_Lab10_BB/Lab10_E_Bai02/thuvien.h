#pragma once

int TinhTongSoLeDuong(int n, int &sum);
int TichSoLe(int n, int &product);
int Cau3(int n, int P, int S);

int TinhTongSoLeDuong(int n, int &sum)
{
	
	if (n % 2 == 0)
		return TinhTongSoLeDuong(n - 1, sum);
	else
	{
		if (n == 1)
			return sum+1;
		else
			sum = sum + n;
	}
	return TinhTongSoLeDuong(n - 2, sum);
	
}

 int TichSoLe(int n, int &product)
{

	if (n % 2 == 0)
		return TichSoLe(n - 1, product);
	else
	{
		if (n == 1)
			return product;
		else
			product = product * n;
		return TichSoLe(n - 1, product);
	}
	

}


 int Cau3(int n, int P, int S)
 {
	 for (int i = 1; i <= n; i++) {
		 P = P * i;
		 S = S + P;
	 }
	 return S;
 }
