#include <iostream>
#include <conio.h>

using namespace std;
#include "thuvien.h"

void ChayChuongTrinh();
int main()
{
	ChayChuongTrinh();
	return 1;
}
void ChayChuongTrinh()
{
	char kt;
	int kq, k, soDe;
	do {
		system("CLS");
		soDe = SinhSoNgauNhien();
		k = ChonMucDoan();
		kq = XuLyTroChoi(k, soDe);
		system("CLS");
		cout << "\n TRO CHOI DOAN SO VOI SO LAN DOAN: k= " << k << "\n";
		ThongBaoKetQua(kq, soDe);
		_getch();
		system("CLS");
		cout << "\n CHoi nua khong, nhan ESC neu khong! \n";
		kt = _getch();
	} while (kt != 27);
}