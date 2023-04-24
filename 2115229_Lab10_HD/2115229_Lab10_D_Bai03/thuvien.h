#pragma once
#define MAX 10
int a[MAX], n; // khai bao toan cuc
void HV(int& x, int& y)
{
	int t;
	t = x;
	x = y;
	y = t;
}

void LietKe_HoanVi(int k)
{
	int j;
	if (k == 1)
	{
		cout << endl;
		for (j = 0; j < n; j++)
			cout << a[j] << '\t';
	}
	else
		for (j = k - 1; j >= 0; j--)
		{
			HV(a[k - 1], a[j]);
			LietKe_HoanVi(k - 1);
			HV(a[j], a[k - 1]);
		}
}
