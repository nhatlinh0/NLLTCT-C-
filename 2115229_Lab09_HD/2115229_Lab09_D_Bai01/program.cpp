#include <iostream>
#include <conio.h>

using namespace std;

#include "thuvien.h";

void ChayChuongTrinh();
int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int* a;
	a = new int[100];
	int n;
	cout << "\nNhap n:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	XuatGiaTri_SoLan_PhanBiet(a , n);
	
}