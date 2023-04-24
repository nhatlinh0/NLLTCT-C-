#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main() {

	int c, k, soDe;
	cout << "Vui long chon do kho:\n"; cin >> k;
	soDe = rand();
	cout << "Nhap so ban doan: "; cin >> c;
	for (int i = 1; i <= k; i++) {



		if (c < soDe) { cout << "So ban da doan nho hon so de,Vui long nhap lai "; cin >> c; }
		else if (c > soDe) {
			cout << "So ban da doan lon hon so de,Vui long nhap lai ";
			cin >> c;
		}
		if (c == soDe) {
			cout << "Chuc mung ban da thang!!!"; break;
		}

		if (k == i) { cout << "Ban da thua "; break; }
	}



	_getch;
	return 0;
}