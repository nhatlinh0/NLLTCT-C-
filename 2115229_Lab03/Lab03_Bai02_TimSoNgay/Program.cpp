


#include<iostream>
#include<conio.h>

using namespace std;

int nhapsotrongmien(int min, int max);
int timsongay(int thang, int nam);











int main()
{
	int songay, thang, nam;
	cout << endl << "Nhap not thang trong nam";
	thang = nhapsotrongmien(1, 12);

	cout << endl << "Nhap nam duong lich";
	nam = nhapsotrongmien(1, 3000);

	songay = timsongay(thang, nam);
	cout << endl << " Thang " << thang << " nam " << nam << " co " << songay << " ngay ";


	_getch();



	return 1;
}




int nhapsotrongmien(int min, int max)
{
	int so;

	do
	{
		cout << endl << "Nhap mot so trong doan [" << min << ".." << max << "]:";
		cin >> so;

	}while (so < min || so>max);
	return so;
}

int timsongay(int thang, int nam)
{
	int songay;

	if (thang == 1, 3, 5, 7, 8, 10, 12)
		songay = 31;
	if (thang == 4, 6, 9, 11)
		songay = 30;
	if (thang == 2)
	{
		if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 100 == 0))
			songay = 29;
		else 
			songay = 28;
	}
	return songay;
}