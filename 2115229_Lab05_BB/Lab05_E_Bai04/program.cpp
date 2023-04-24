#include <iostream>
#include<conio.h>
#include <math.h>
#include<time.h>
#include<stdlib.h>

typedef int Dayso[100];

using namespace std;

#include "thuvien.h"
#include "menu.h"



void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int n=0, menu, soMenu=7;
	Dayso a;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu,a,n);
	} while (menu > 0);
}


