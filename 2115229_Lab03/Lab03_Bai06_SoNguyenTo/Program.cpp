

#define TAB '\t'
#include<iostream>
#include<conio.h>

using namespace std;



int kiemtrant(int n);
void lietkesont(unsigned n);









int main()
{
	unsigned int n;
	cout << endl << "nhap so luong NT can tim";
	cin >> n;
	lietkesont(n);

	_getch();


	return 1;
}


int kiemtrant(int n)
{
	int kq, m, i;
	if (n < 2)
		kq = 0;
	else
	{
		m = (int)sqrt((float)n);
		i = 2;
		kq = 1;
		while (i <= m && kq)
		{
			if (n % i == 0)
				kq = 0;
			i++;
		}
	}
	return kq;
}

void lietkesont(unsigned n)
{
	int dem = 0, so = 2;
	while (dem < n)
	{
		if (kiemtrant(so))
		{
			cout << so << TAB;
			dem++;
		}
		so++;
	}
}