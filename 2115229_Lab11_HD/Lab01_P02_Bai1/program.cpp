#include <iostream>
#include <fstream>
using namespace std;
#include �thuvien.h�
void ChayChuongTrinh();
int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	int n, a[MAX];
	char filename[MAX];
	system("cls");
	cout << "Nhap ten file mo de doc:";
	cin >> filename;
	File_Array(filename, a, n);
	cout << n << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << '\t';
	system(�PAUSE�);
}