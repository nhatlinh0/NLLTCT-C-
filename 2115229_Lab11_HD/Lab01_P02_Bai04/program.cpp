#include <iostream>
#include <fstream>
using namespace std;
#include “thuvien.h”
void ChayChuongTrinh();
int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	int n, a[MAX][MAX], i, j;
	char filename[80];
	system("cls");
	cout << "Nhap ten file mo de doc:"; cin >> filename;

		File_Mat(filename, a, n);
	cout << "\nn=" << n;
	cout << endl;
	for (i = 0; i < n; i++)
	{
		cout << "\n";
		for (j = 0; j < n; j++)
			cout << a[i][j] << '\t';
	}
	system(“PAUSE”);
}