#pragma once
#define MAX 1000	
#include <time.h>
#include <stdlib.h>

int ChonMucDoan();
int SinhSoNgauNhien();
int XuLyTroChoi(int k, int soDe);
void ThongBaoKetQua(int kq, int soDe);





int ChonMucDoan()
{
	int k;
	do {
		cout << "\nChon so lan doan toi da (3,5,7):k=";
		cin >> k;
	} while (k != 3 && k != 5 && k != 7);
	return k;
}

int SinhSoNgauNhien()
{
	int soDe;
	srand((unsigned int)time(0));
	soDe = rand() % MAX;
	return soDe;
}

int XuLyTroChoi(int k, int soDe)
{
	int i, soDoan, kq = 0;
	for (i = 1; 1 <= k; i++)
	{
		cout << "\nDoan lan" << i << ", so doan = ";
		cin >> soDoan;
		if (soDoan == soDe)
		{
			kq = 1;
			break;
		}
		else
			if (soDoan > soDe)
				cout << "\n So doan lon hon";
			else
				cout << "\nSo doan nho hon";
	}
	return kq;
}

void ThongBaoKetQua(int kq, int soDe)
{
	system("CLS");
	cout << "\nKet Qua Tro Choi: ";
	if (kq)
		cout << "\nNguoi choi thang ";
	else
		cout << "\n Nguoi choi thua ";
	cout << "\n De cho so: " << soDe;
}